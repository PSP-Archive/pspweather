////////////////////////////////////////////////////////////////////
// Must be linked with KMEM memory access

#define LogErr()

#include "std.h"
#include "nlh.h"

////////////////////////////////////////////////////////////////////
// system entries - must be part of 'startup.s' list

// library
u32 sceKernelLoadModule(const char* path, u32 zero, void* pWhat);
// u32 sceKernelLoadModuleMs(const char* path, u32 zero, void* pWhat);

// general init
int sceNetInit(u32 r4, u32 r5, u32 r6, u32 r7, u32 r8);
int sceNetTerm();

int sceNetGetLocalEtherAddr(u8* addr);
    // REVIEW: what does this do ?

// adhoc - game sharing
int sceNetAdhocInit();
int sceNetAdhocctlInit(u32 r4, u32 r5, void* r6);
int sceNetAdhocTerm();
int sceNetAdhocctlConnect(const char*);

// internet
int sceNetResolverInit();
int sceNetApctlInit(u32 r4, u32 r5);
int sceNetApctlTerm();
int sceNetResolverTerm();
int sceNetApctlGetState(u32* stateOut);
int sceNetApctlGetInfo(u32 r4, void* r5);

int sceNetInetInit();
int sceNetInetTerm();

////////////////////////////////////////////////////////////////////
// SLIME NOTE: Module library linkage trickery
//  in theory shouldn't be necessary
//  in practice appears to be necessary

// SLIME NOTE: symbols exported from standard 'startup.s'
extern void __lib_stub_top();
extern void __lib_stub_bottom();

// SYSTEM ENTRY: sceKernelModuleFromUID
// 1.0 ->	88014318:	27bdffd0	addiu sp,sp,#0xffffffd0
// 1.50 ->	88017308:	27bdffd0	addiu sp,sp,#0xffffffd0

static u32 FindProcEntry(u32 oid, u32 nid)
{
	typedef u32* (*MAP_PROC)(u32);
    MAP_PROC pfnMap;
	u32* modPtr;

    u32* addr = (u32*)0x88014318;
    if (*addr != 0x27bdffd0)
    {
	    addr = (u32*)0x88017308;
	    if (*addr != 0x27bdffd0)
        {
            my_print("ERROR: version error (find)!\n");
            return 0;   // something terribly wrong
        }
    }
    pfnMap = (MAP_PROC)addr;
	modPtr = (*pfnMap)(oid);

    if ((((long)modPtr) & 0xFF000000) != 0x88000000)
        return 0;
	if ((modPtr[18] - modPtr[16]) < 40)
        return 0;

	// assume standard library order
    {
		u32* modPtr2 = (u32*)modPtr[16];
		int count = (modPtr2[6] >> 16) & 0xFFFF;
		u32* idPtr = (u32*)modPtr2[7];
		u32* procAddrPtr = idPtr + count;
        int i;

		for (i = 0; i < count; i++)
		{
	        if (*idPtr == nid)
	            return (*procAddrPtr);
			idPtr++;
			procAddrPtr++;
	    }
    }
	return 0;
}

static int PatchMyLibraryEntries(u32 oid)
{
	//REVIEW: should match single module name
    // this version is dumb and walks all of them (assumes NIDs are unique)

    int nPatched = 0;

    int* stubPtr; // 20 byte structure
    for (stubPtr = (int*)__lib_stub_top;
     stubPtr + 5 <= (int*)__lib_stub_bottom;
      stubPtr += 5)
    {
        int count = (stubPtr[2] >> 16) & 0xFFFF;
	    int* idPtr = (int*)stubPtr[3];
	    int* procPtr = (int*)stubPtr[4];

        if (stubPtr[1] != 0x90000)
            continue;   // skip non-lazy loaded modules
	    while (count--)
	    {
	        if (procPtr[0] == 0x54C && procPtr[1] == 0)
	        {
	            // SWI - scan for NID
	            u32 proc = FindProcEntry(oid, *idPtr);
	            if (proc != 0)
	            {
	                if (((u32)procPtr & 0xF0000000) != (proc & 0xF0000000))
	                {
						// if not in user space we can't use it
		                my_print("!! NOT PATCH\n");
	                }
	                else
	                {
	                    u32 val = (proc & 0x03FFFFFF) >> 2;
	                    procPtr[0] = 0x0A000000 | val;
	                    procPtr[1] = 0;

		                nPatched++;
	                }
#if 0
					my_printn("PATCH ", (u32)procPtr, " ");
	                my_printn("jump_to ", proc, "\n");
#endif
	            }
	        }
	        idPtr++;
	        procPtr += 2; // 2 opcodes
        }
    }
    return nPatched;
}

u32 LoadAndStartAndPatch(const char* szFile)
    // return oid or error code
{
	u32 oid;

    LogErr();
	oid = sceKernelLoadModule(szFile, 0, NULL);
    LogErr();
    my_print("Load: "); my_print(szFile);
    my_printn("=", oid, "\n");

//REVIEW: if already loaded - assume ok
    if (oid & 0x80000000)
        return oid; // error code

    // Start it
    {
        u32 err;
        u32 fake = 0;
        my_print("  +start : ");
        LogErr();
        err = sceKernelStartModule(oid, 0, 0, &fake, 0);
        LogErr();
		my_printn("", err, "\n");

        if (err != oid)
        {
            my_print(" -- DID NOT START\n");
            return err;
        }
    }

    // Patch it
    {
		int n = PatchMyLibraryEntries(oid);
		my_printn("  +patch : ", n, "\n");
    }
    return oid;
}

// SYSTEM ENTRY: sceKernelIcacheInvalidateAll:
// 1.0 -> 	88054618:	40088000	mfc0 r8,cop0[16]
// 1.50 ->	880584f0:	40088000	mfc0 r8,cop0[16]
static void FlushCaches()
{
	typedef void (*VOID_PROC)(void);
    VOID_PROC pfnFlush;
    u32* addr = (u32*)0x88054618;
    if (*addr != 0x40088000)
    {
	    addr = (u32*)0x880584f0;
	    if (*addr != 0x40088000)
        {
            my_print("ERROR: version error (flush)!\n");
            return;   // something terribly wrong
        }
    }
    pfnFlush = (VOID_PROC)addr;

    sceKernelDcacheWritebackAll();
    (*pfnFlush)();
}

int nlhLoadDrivers()
{
	LoadAndStartAndPatch("flash0:/kd/ifhandle.prx"); // kernel

	// wipeout list
	// LoadAndStartAndPatch("flash0:/kd/memab.prx");
	// LoadAndStartAndPatch("flash0:/kd/pspnet_adhoc_auth.prx");
	LoadAndStartAndPatch("flash0:/kd/pspnet.prx");
	// LoadAndStartAndPatch("flash0:/kd/pspnet_adhoc.prx");
	// LoadAndStartAndPatch("flash0:/kd/pspnet_adhocctl.prx");
	LoadAndStartAndPatch("flash0:/kd/pspnet_inet.prx");
	LoadAndStartAndPatch("flash0:/kd/pspnet_apctl.prx");
	LoadAndStartAndPatch("flash0:/kd/pspnet_resolver.prx");
	// LoadAndStartAndPatch("flash0:/kd/pspnet_ap_dialog_dummy.prx");

    // jumps have been patched - flush DCache and ICache
    FlushCaches();

    //REVIEW: add error checks
    return 0;
}

#if 0
// handler not needed
static u32 g_handlerHandle; // ?
void apctl_handler(u32 regs_unknown)
{
    // nothing
}
#endif

int nlhInit()
{
    u32 err;
    err = sceNetInit(0x20000, 0x20, 0x1000, 0x20, 0x1000);
    my_printn("sceNetInit returns ", err, "\n");
    if (err != 0)
        return err;
	err = sceNetInetInit();
	my_printn("sceNetInetInit returns ", err, "\n");
	if (err != 0)
        return err;

	err = sceNetResolverInit();
	my_printn("sceNetResolverInit returns ", err, "\n");
    if (err != 0)
        return err;

	err = sceNetApctlInit(0x1000, 0x42);
	my_printn("sceNetApctlInit returns ", err, "\n");
    if (err != 0)
        return err;

#if 0
    // add handler
	err = sceNetApctlAddHandler((u32)apctl_handler, 0);
	my_printn("sceNetApctlAddHandler returns ", err, "\n");
    if (err & 0x80000000)
        return err;
    g_handlerHandle = err;
#endif
    return 0;   // it worked!
}

int nlhTerm()
{
    u32 err;
#if 0
	err = sceNetApctlDelHandler(g_handlerHandle);
	my_printn("sceNetApctlDelHandler returns ", err, "\n");
#endif

//REVIEW: we need to do something first to stop the connection
//REVIEW: -- sceNetApctlTerm returns 80410A04 ??
	err = sceNetApctlTerm();
	my_printn("sceNetApctlTerm returns ", err, "\n");

	err = sceNetResolverTerm();
	my_printn("sceNetResolverTerm returns ", err, "\n");

	err = sceNetInetTerm();
	my_printn("sceNetInetTerm returns ", err, "\n");
	err = sceNetTerm();
	my_printn("sceNetTerm returns ", err, "\n");
    LogErr();
    return 0; // assume it worked
}

////////////////////////////////////////////////////////////////////

// byte swap - REVIEW: is there a helper in the NetLib ?
unsigned short htons(unsigned short wIn)
{
    u8 bHi = (wIn >> 8) & 0xFF;
    u8 bLo = wIn & 0xFF;
    return ((unsigned short)bLo << 8) | bHi;
}

////////////////////////////////////////////////////////////////////
