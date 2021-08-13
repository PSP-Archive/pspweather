/*
	pspWeather
	by mcdongle

	Code reused from (in no special order)
	  - wifi_sample by PspPet
	  - FTPD by pspkrazy (used his nlh and _clib sources)
	  - rps by Skippy911 (used his screenshot method)
	  - malloc by Yoshihiro (due to me not utilizing the PSPSDK yet)
	  - HelloWorld by NEM (the primitive graphics)

	Terms & Agreement (You must agree to this before using this application)
	By using this application you are taking full responsibility of your actions and what it may
	or can do to your PSP. If it decides to corrupt files on your PSP one day, I'm terribly sorry
	but I'm not holding myself responsible.

	I just wanted this application to serve as an example on the potential of the PSP.
	This code can be altered for many other applications using sockets.

*/

/*
TODO:
  - Read destination ip from config file
  - Timeout for connecting
  - Download latest weather image of the area and display it
  - Show future days?
*/

#include <string.h>
#include <pspctrl.h>
#include <pspkernel.h>
#include <pspdebug.h>

PSP_MODULE_INFO("PSP-FTPD", 0x1000, 1, 1); /* 0x1000 REQUIRED!!! */
PSP_MAIN_THREAD_ATTR(0); /* 0 REQUIRED!!! */
PSP_MAIN_THREAD_STACK_SIZE_KB(32); /* smaller stack for kernel thread */

char home_dir[512];

//Regular Colors
#define WHITE rgb(255,255,255)
#define RED rgb(255,0,0)
#define GREEN rgb(0,255,0)
#define BLUE rgb(0,0,255)
#define YELLOW rgb(255,255,0)
#define TEAL rgb(0,128,128)
#define BLUEGREEN (0,255,255)
//#define GREY (128,128,128) //looks wrong...
#define GREY 0xbdef

//Lighter Colors
#define LRED rgb(255,128,128)
#define LGREEN rgb(128,255,128)
#define LBLUE rgb(0,128,255)
#define LYELLOW rgb(255,255,128)
#define LBLUEGREEN (128,255,255)
#define LGREY (192,192,192)


#define LogErr()
#define PRINTVAL printPos(recvBuff,getVal[0],getVal[1])

#include <pspkernel.h>
#include <pspctrl.h>
#include <stdlib.h>
#include <stdio.h>
#include "malloc.h"
#include "pg.h"
#include "nlh.h"
#include "parser.h"
#include "screenshot.h"
#include "icons.h"

const static char *pspWeatherVersion = "pspWeather v1.06";

static void DoInetNetTest(); // web access
static void getWeather(const char *szMyIpAddr);
void sceKernelExitGame(void);
static unsigned long rgb(unsigned long r, unsigned long b, unsigned long g);
static void pspWeatherLogo();
int SetupCallbacks(void);
static int exitPspWeather = 0;
static int space_x = 0;
static int space_y = 0;
static int space_i = 0;
static int goodExit = 0;
static char units[64];
static char szMyIPAddr[32];

/*
int exit_callback(void) {
	exitPspWeather = 1;

	if (goodExit == 0) { // I like the main loop to exit..
		my_print("Editing badly, oh well...\n");
		if (g_fdLog > 0)
			sceIoClose(g_fdLog);

		int err = sceNetApctlDisconnect();

		nlhTerm();

		sceKernelExitGame();
	}

	my_print("Trying to exit normally...\n");

	return 0;
}


void CallbackThread(void *arg) {
	int cbid;


	cbid = sceKernelCreateCallback("Exit Callback", exit_callback, NULL);
	sceKernelRegisterExitCallback(cbid);

	sceKernelSleepThreadCB();
}


int SetupCallbacks(void) {
	int thid = 0;

	thid = sceKernelCreateThread("update_thread", CallbackThread, 0x11, 0xFA0, THREAD_ATTR_USER, 0);
	if(thid >= 0)
	{
		sceKernelStartThread(thid, 0, 0);
	}

	return thid;
}
*/

//A simple doubly linked list
struct lNode {
	struct lNode *prev;
	char data[32];
	struct lNode *next;
};
typedef struct lNode linkedList;

linkedList *head = NULL;
linkedList *tail = NULL;
linkedList *current = NULL;

void addNode(char *newData) 
{
	linkedList *newNode = (linkedList*)malloc(sizeof(struct lNode));
	strcpy(newNode->data,newData);

	if ((head == (linkedList*)NULL) && (tail == (linkedList*)NULL)) {
		my_print("- First node!\n");
		head = (linkedList*)newNode;
		tail = (linkedList*)newNode;
		newNode->prev = (linkedList*)NULL;
		newNode->next = (linkedList*)NULL;
	}
	else {
		my_print("- Appending node\n");
		newNode->prev = (linkedList*)tail;
		newNode->next = (linkedList*)NULL;
		tail->next = (linkedList*)newNode;
		tail = (linkedList*)newNode;
	}

	if ((space_i+1 % 7) == 0) {
		space_y++;
	}
	mh_print(135+space_x*5+space_i*5,(space_y)*10,newNode->data,GREY);
	space_x += strlen(newNode->data);
	space_i++;

	my_printn("Added node with size: ", strlen(newNode->data),"\n");
	if (newNode->prev != (linkedList*)NULL) {
		my_printn("	Node has prev with size: ", strlen((newNode->prev)->data),"\n");
	}
	if (newNode->next != (linkedList*)NULL) {
		my_printn("	Node has next with size: ", strlen((newNode->next)->data),"\n");
	}
}

static void 
DoInetNetTest() 
{
    u32 err;
    int state;

    LogErr();

    err = nlhInit();
	my_printn("nlhInit returns ", err, "\n");

    if (err != 0) {
        nlhTerm();
	    return;
    }

    // try first connection
	err = sceNetApctlConnect(0); // how to pick this ?
	my_printn("sceNetApctlConnect returns ", err, "\n");
    if (err != 0)
        goto close_net;

    state = 0;
	err = sceNetApctlGetState(&state);
	my_printn("getstate: err=", err, ", ");
	my_printn("state=", state, "\n");
    if (err != 0)
		goto close_connection;

    // 4 connected with IP address
    while (1) {
        u32 state;

		err = sceNetApctlGetState(&state);
        if (err != 0) {
			my_printn("sceNetApctlGetState returns ", err, "\n");
            goto close_connection;
        }
		pgFillvram(0);
		mh_print(5,10,"Connecting...",GREY);
        if ((state == 1) || (state == 2))
			mh_print(5,20,"Starting up...",GREY);
		else if (state == 3)
			mh_print(5,20,"Waiting for DHCP",GREY);
		else if (state == 4)
			mh_print(5,20,"Got IP Address!",GREY);
		pspWeatherLogo();
		pgWaitVn(50);

        // 0 - idle
        // 1,2 - starting up
        // 3 - waiting for dynamic IP -- REVIEW: wedges with DHCP
        // 4 - got IP - usable
        if (state == 4)
            break;  // connected with static IP
    }

    // get IP address
    if (sceNetApctlGetInfo(8, szMyIPAddr) != 0) {
        strcpy(szMyIPAddr, "unknown IP address");
		mh_print(5,30,"Unknown IP Address!",RED);
		pgWaitVn(10);
	}
	char ipInfo[64];
	strcpy(ipInfo,"IP Address set to: ");
	strcat(ipInfo,szMyIPAddr);
	mh_print(5,30,ipInfo,GREY);

	my_print("sceNetApctlGetInfo: ipaddr=");
  my_print(szMyIPAddr);
  my_print("\n");

  getWeather(szMyIPAddr);
  return;


close_connection:
	err = sceNetApctlDisconnect();
	my_printn("sceNetApctlDisconnect returns ", err, "\n");

close_net:
  nlhTerm();
}
int _strncmp(const char *d,const char *s, int n)
{
	while( *d && n>0 ){
		if( *d++ != *s++ )return 1;
		n--;
	}
	return	0;
}
static void pspWeatherIntroLogo() {
	pgPrint2(5,7,LBLUE,"-");
	pgPrint2(7,7,WHITE,pspWeatherVersion);
	pgPrint2((7+strlen(pspWeatherVersion)+1),7,LBLUE, "-");
}
static void pspWeatherLogo() {
	mh_print(480-101,271-10,"-",LBLUE);
	mh_print(480-93,271-10,pspWeatherVersion,WHITE);
	mh_print(480-10,271-10,"-",LBLUE);

}
static void pspWeatherExitMessage() {
	mh_print(5,271-10,"-",WHITE);
	mh_print(15,271-10,"Press '",GREY);
	mh_print(48,271-10,circleChar,BLUE);
	mh_print(59,271-10,"' to Exit",GREY);

}
static void pspWeatherLR() {
	if (current->prev) {
		mh_print(0,0,(current->prev)->data,BLUE);
	}
	if (current->next) {
		mh_print((480 - strlen((current->next)->data)*5),0,(current->next)->data,BLUE);
	}
}
static unsigned long rgb(unsigned long r, unsigned long g, unsigned long b) {
	r=r/8;  /* no idea if this method is 100% correct, grey looks off */
	g=g/8;
	b=b/8;
	return (unsigned long)(b<<10)+(g<<5)+(r<<0)+0x8000;
}
static void centerText(unsigned long y,unsigned long color,const char *str, int opt) {
	if ((opt == 0) || (opt == 1)) {
		pgPrint((int)((59 - strlen(str))/2)+1,y,color,str);
	}
}
static void mh_centerText(unsigned long y,unsigned long color,const char *str) {
	mh_print((int)((480 - strlen(str)*5)/2)+1,y,str,color);
}
char *
getString(char *recvBuff, char *string) 
{
	int getVal[2];
	char *sendBuff = (char*)malloc(32);
	getPos(recvBuff,string,getVal);
	copyBuff(recvBuff,sendBuff,getVal[0],getVal[1]);

	return sendBuff;
}
/*
static void getWeatherImage() {
	u32 err;

	SOCKET weatherImageSocket;
	struct sockaddr_in weatherImageAddy;

	weatherImageSocket = sceNetInetSocket(AF_INET, SOCK_STREAM, 0);
	memset(&weatherImageAddy, 0, sizeof(struct sockaddr_in));
	my_printn("WeatherImage: socket returned ", weatherImageSocket, "\n");
	if (weatherImageSocket & 0x80000000)
		goto done;

	weatherImageAddy.sin_family = AF_INET;
	weatherImageAddy.sin_port = htons(80);

	//image.weather.com 12.120.41.15
	weatherImageAddy.sin_addr[0] = 12;
	weatherImageAddy.sin_addr[1] = 120;
	weatherImageAddy.sin_addr[2] = 41;
	weatherImageAddy.sin_addr[3] = 15;

	int fd_Image = sceIoOpen("ms0:/PSP/GAME/PSPWEATHER/pspWeather.jpg", O_CREAT|O_RDWR|O_TRUNC, 0777);

    weatherImageAddy.sin_reserved = sizeof(struct sockaddr_in);
	err = sceNetInetConnect(weatherImageSocket, (struct sockaddr_in*)&weatherImageAddy, sizeof(weatherImageAddy));
	my_printn("WeatherImage: connect returned: ", err, "\n");
	if (err != 0) {
		goto done;
	}

	char sendImageBuff[256];
	//Ok so i thought loc_id would get the image of that but apparently it wont... This should get europe
	strcpy(sendImageBuff,"GET /images/sat/europesat_440x297.jpg HTTP/1.1\n");
	strcat(sendImageBuff,"Host: image.weather.com\n");
	strcat(sendImageBuff,"Cache-Control: no-cache\n");
	strcat(sendImageBuff,"Cookie: RMID=44aae12642177c80; RMFS=011D54ZtU109wv; LocID=");
	strcat(sendImageBuff,loc_id);
	strcat(sendImageBuff,"; RMFM=011D54ZoU20AAu\r\n\r\n");

	err = sceNetInetSend(weatherImageSocket, sendImageBuff, sizeof(sendImageBuff), 0);
	my_printn("send returned ", err, "\n");
    my_printn("  errno=", sceNetInetGetErrno(), "\n");
    if (sceNetInetGetErrno() != 0) {
		my_printn("WeatherImage: error ",sceNetInetGetErrno(),"\n");
		if (fd_Image > 0)
			sceIoClose(fd_Image);
		goto done;
	}

	char recvImageBuff[2048]; // should be big enough
	int recvImage;
	int i = 1;
	my_print("WeatherImage: before loop\n");
	centerText(26,GREEN,"Getting weather image... DO NOT TURN OFF!",1);
	//Don't forget to remove the HTML header! start at \255\216\255\214 ??
	do {
		recvImage = sceNetInetRecv(weatherImageSocket, (u8*)recvImageBuff, sizeof(recvImageBuff), 0);
		sceIoWrite(fd_Image,recvImageBuff,sizeof(recvImageBuff));
		i++;

	} while (recvImage > 0);
	centerText(26,rgb(0,0,0),"Getting weather image... DO NOT TURN OFF!",1);
	my_print("WeatherImage: out of loop\n");

	if (fd_Image > 0)
		sceIoClose(fd_Image);

	done:
	my_print("WeatherImage: done...\n");
	err = sceNetInetClose(weatherImageSocket);
    my_printn("WeatherImage: closesocket returned ", err, "\n");



}
*/
static void getWeather(const char *szMyIPAddr) {
    u32 err;
	unsigned short *vram = (unsigned short*) pgGetVramAddr(0, 0);
	unsigned short *image;

	SOCKET weatherSocket;
	struct sockaddr_in weatherAddy;

	weatherSocket = sceNetInetSocket(AF_INET, SOCK_STREAM, 0);
	memset(&weatherAddy, 0, sizeof(struct sockaddr_in));
	my_printn("socket returned ", weatherSocket, "\n");
	if (weatherSocket & 0x80000000)
		goto done;

	mh_print(5,40,"setup socket...",GREY);
	pgWaitVn(10);
	weatherAddy.sin_family = AF_INET;
	weatherAddy.sin_port = htons(80);

	//xoap.weather.com 63.111.24.34
	weatherAddy.sin_addr[0] = 63;
	weatherAddy.sin_addr[1] = 111;
	weatherAddy.sin_addr[2] = 24;
	weatherAddy.sin_addr[3] = 34;

    weatherAddy.sin_reserved = sizeof(struct sockaddr_in);
	err = sceNetInetConnect(weatherSocket, (struct sockaddr_in*)&weatherAddy, sizeof(weatherAddy));
	my_printn("connect returned: ", err, "\n");
	my_printn("    errno=", sceNetInetGetErrno(), "\n");

	if (err != 0) {
		mh_print(5,50,"Failed to connect!",RED);
		pspWeatherExitMessage();
		pgWaitVn(10);
		goto done;
	}
	mh_print(5,50,"Connected!",GREY);
	pgWaitVn(10);

	// send request
	char sendBuff[512];
	strcpy(sendBuff,"GET /weather/local/");
	strcat(sendBuff,current->data);
	strcat(sendBuff,"?cc=*&par=6149&prod=xoap&key=551&unit=");
	strcat(sendBuff,units);
	strcat(sendBuff," HTTP/1.0\n");
	strcat(sendBuff,"HOST: xoap.weather.com\r\n\r\n");

	err = sceNetInetSend(weatherSocket, sendBuff, sizeof(sendBuff), 0);
	my_printn("send returned ", err, "\n");
    my_printn("  errno=", sceNetInetGetErrno(), "\n");

    if (sceNetInetGetErrno() != 0) {
			mh_print(5,60,"Failed to send request!",RED);
			pspWeatherExitMessage();
			pgWaitVn(10);
			goto done;
	}
	mh_print(5,60,"Sent request...Please wait",GREY);
	pgWaitVn(10);

	char recvBuff[2048]; // should be big enough

	int recv;
	recv = sceNetInetRecv(weatherSocket, (u8*)recvBuff, 2048, 0); //I should probably use sizeof() here
	pgFillvram(0);
	pspWeatherLogo();

	if (recv > 0) {
		int getVal[2];
		char *recvdBuff;
		char printBuff[128];

		//Check to see if we've got any valid weather information
		//Need to add in other error types! (what are they?)

		recvdBuff = getString(recvBuff,"<err type=\"2\">");
		strcpy(printBuff,recvdBuff);

		//(_strncmp(printBuff,"Invalid location provided.",26) == 0)  <-- doesn't work?

		if (strlen(printBuff) > 0) {
			strcpy(printBuff,"Invalid location: ");
			strcat(printBuff,current->data);
			centerText(1,RED,printBuff,1);
			pspWeatherExitMessage();
			mh_print(5,271-30,"-",WHITE);
			mh_print(15,271-30,"Press '",GREY);
			mh_print(48,271-30,triangleChar,BLUE);
			mh_print(59,271-30,"' to Refresh",GREY);

			mh_print(5,271-20,"-",WHITE);
			mh_print(15,271-20,"Press '",GREY);
			mh_print(48,271-20,squareChar,BLUE);
			mh_print(59,271-20,"' to capture a screenshot",GREY);
			pspWeatherLR();
			return;
		}


		//Get location of weather
		recvdBuff = getString(recvBuff,"<dnam>");
		strcpy(printBuff,"Weather Report for ");
		strcat(printBuff,recvdBuff);

		centerText(1,WHITE,printBuff,1);
		mh_print(0,13,"------------------------------------------------------------------------------------------------",rgb(0,0,75));

		// Print weather icon
		recvdBuff = getString(recvBuff,"<icon>");
		strcpy(printBuff,recvdBuff);
		displayIcon(printBuff);

		// Print weather description
		recvdBuff = getString(recvBuff,"</flik>\r\n    <t>");
		strcpy(printBuff,recvdBuff);
		//mh_print(((105-strlen(printBuff))/2),116,printBuff,WHITE);
		pgPrint(((15-strlen(printBuff))/2),14,WHITE,printBuff);

		// Temperature
		recvdBuff = getString(recvBuff,"<tmp>");
		strcpy(printBuff,recvdBuff);
		recvdBuff = getString(recvBuff,"<ut>");
		strcat(printBuff,recvdBuff);

		pgPrint2(7,3,WHITE,printBuff);

		//Feels Like
		recvdBuff = getString(recvBuff,"<flik>");
		strcpy(printBuff,recvdBuff);
		recvdBuff = getString(recvBuff,"<ut>");
		strcat(printBuff,recvdBuff);

		//mh_print(120,72,"Feels Like",GREY);
		//mh_print(140-strlen(printBuff),82,printBuff,WHITE);
		pgPrint(12,9,GREY,"Feels Like");
		pgPrint(15,10,WHITE,printBuff);

		//UV Index
		recvdBuff = getString(recvBuff,"<uv>\r\n      <i>");
		strcpy(printBuff,recvdBuff);
		strcat(printBuff," ");
		recvdBuff = getString(recvBuff,"</i>\r\n      <t>");
		strcat(printBuff,recvdBuff);

		pgPrint(25,6,GREY,"UV Index:");
		pgPrint(35,6,WHITE,printBuff);


		//Wind
		recvdBuff = getString(recvBuff,"</d>\r\n      <t>");
		strcpy(printBuff,recvdBuff);
		if (_strncmp(printBuff,"CALM",4) != 0) {
			strcpy(printBuff,"From ");
			strcat(printBuff,recvdBuff);
			strcat(printBuff," at ");

			//Get Speed
			recvdBuff = getString(recvBuff,"<s>");
			strcat(printBuff,recvdBuff);
			strcat(printBuff," ");

			//Get Unit
			recvdBuff = getString(recvBuff,"<us>");
			strcat(printBuff,recvdBuff);
		}
		else {
			strcpy(printBuff,"calm"); //wind is in caps, i should use toLower or something
		}

		pgPrint(29,7,GREY,"Wind:");
		pgPrint(35,7,WHITE,printBuff);

		//Humidity
		recvdBuff = getString(recvBuff,"<hmid>");
		strcpy(printBuff,recvdBuff);
		strcat(printBuff,"%");
		pgPrint(25,8,GREY,"Humidity:");
		pgPrint(35,8,WHITE,printBuff);

		//Pressure
		recvdBuff = getString(recvBuff,"<r>");
		strcpy(printBuff,recvdBuff);
		recvdBuff = getString(recvBuff,"<up>");
		strcat(printBuff," ");
		strcat(printBuff,recvdBuff);
		recvdBuff = getString(recvBuff,"</r>\r\n      <d>");
		strcat(printBuff," and ");
		strcat(printBuff,recvdBuff);

		pgPrint(25,9,GREY,"Pressure:");
		pgPrint(35,9,WHITE,printBuff);

		//Dew Point
		recvdBuff = getString(recvBuff,"<dewp>");
		strcpy(printBuff,recvdBuff);
		recvdBuff = getString(recvBuff,"<ut>");
		strcat(printBuff,recvdBuff);

		pgPrint(24,10,GREY,"Dew Point:");
		pgPrint(35,10,WHITE,printBuff);

		//Visibility
		recvdBuff = getString(recvBuff,"<vis>");
		strcpy(printBuff,recvdBuff);
		strcat(printBuff," ");
		recvdBuff = getString(recvBuff,"<ud>");
		strcat(printBuff,recvdBuff);

		pgPrint(23,11,GREY,"Visibility:");
		pgPrint(35,11,WHITE,printBuff);

		//Sunrise
		recvdBuff = getString(recvBuff,"<sunr>");
		strcpy(printBuff,recvdBuff);

		pgPrint(26,12,GREY,"Sunrise:");
		pgPrint(35,12,WHITE,printBuff);

		//Sunset
		recvdBuff = getString(recvBuff,"<suns>");
		strcpy(printBuff,recvdBuff);

		pgPrint(27,13,GREY,"Sunset:");
		pgPrint(35,13,WHITE,printBuff);

		//Last Updated at Location
		recvdBuff = getString(recvBuff,"<obst>");
		strcpy(printBuff,"As reported at ");
		strcat(printBuff,recvdBuff);
		strcat(printBuff," ");
		recvdBuff = getString(recvBuff,"<lsup>");
		strcat(printBuff,recvdBuff);

		mh_centerText(21,GREY,printBuff);
	}
	else {
		pgPrint2(10,5,RED,"Error: No data received!");
	}

	pspWeatherLR();
	mh_print(5,271-30,"-",WHITE);
	mh_print(15,271-30,"Press '",GREY);
	mh_print(48,271-30,triangleChar,BLUE);
	mh_print(59,271-30,"' to Refresh",GREY);

	mh_print(5,271-20,"-",WHITE);
	mh_print(15,271-20,"Press '",GREY);
	mh_print(48,271-20,squareChar,BLUE);
	mh_print(59,271-20,"' to capture a screenshot",GREY);

	pspWeatherExitMessage();
	pgWaitVn(50);

	err = sceNetInetClose(weatherSocket);
    my_printn("closesocket(client) returned ", err, "\n");
	return;

	done:
    err = sceNetInetClose(weatherSocket);
    my_printn("closesocket returned ", err, "\n");
}

static	char configBuff[2048];

void
user_thread()
{
  char tmp_filename[512];
  sprintf(tmp_filename, "%s/pspWeather.cfg", home_dir);
	// Parse through config file
	int config_fd = sceIoOpen(tmp_filename,O_RDONLY, 0111);

	char *configPtr = configBuff;
	char totalIds[512];
	char getId[32];
	char newId[2];

	sceIoRead(config_fd, configBuff, sizeof(configBuff));

	// Get units
	configPtr = getString(configBuff,"<units>");
	strcpy(units,configPtr);
	if (strlen(units) != 1) {
		strcpy(units, "s");
		my_print("ERROR: No units found; defaulting to 's'\n");
	}


	// Total Ids
	configPtr = getString(configBuff,"<totalIds>");
	strcpy(totalIds,configPtr);


	if ((strlen(totalIds) < 1) || (!(strncmp(totalIds,"0",1)))) {
		sceIoClose(config_fd);
		my_print("ERROR: totalIds not found; recreating pspWeather.cfg\n");
		int config_fd = sceIoOpen(tmp_filename,O_CREAT|O_RDWR|O_TRUNC, 0777);
		sceIoWrite(config_fd, "<totalIds>5</totalIds>\n",23);
		sceIoWrite(config_fd, "<locid1>USNY0996</locid1>\n",26);
		sceIoWrite(config_fd, "<locid2>USFL0316</locid2>\n",26);
		sceIoWrite(config_fd, "<locid3>USTX0057</locid3>\n",26);
		sceIoWrite(config_fd, "<locid4>USCA0777</locid4>\n",26);
		sceIoWrite(config_fd, "<locid5>ITXX0067</locid5>\n",26);
		sceIoWrite(config_fd, "<units>s</units>\n",17);
		sceIoClose(config_fd);
		addNode("USNY0996");
		addNode("USFL0316");
		addNode("USTX0057");
		addNode("USCA0777");
		addNode("ITXX0067");
	} else {
		my_printn("Scanning through location id's (", totalIds[0]," total)\n");
		char i = '1';
		const char *tp = totalIds;
		char prntBuff[128];
		int a = 0;
		strcpy(prntBuff,"Loading ");
		strcat(prntBuff,tp);
		strcat(prntBuff," location id(s): ");
		mh_print(0,5,prntBuff,GREY);

		// I had to write another parser.. damnit I knew that crappy one
		// would bite me in the rear later on..
		while ((i <= *tp) && (i <= '9')) {
			newId[0] = i;
      newId[1] = 0;
			strcpy(getId,"<locid");
			strcat(getId,newId);
			strcat(getId,">");

			//mh_print(10,60+a*10,getId,WHITE);

			int sT[2];

			getPos(configBuff,getId,sT);
			int start = sT[0];
			int end = sT[1];
			my_printn("Located: 0==",start,"");
			my_printn(" 1==",end," <-- ");

			if (end < start) {
				my_print("Error parsing line!\n");
        break;
			}
			else {
				my_print("Good\n");
			}

			char foundNode[10];
			int j = start;
			my_printn("before loop: j==",j," ");
			my_printn("getVal==",end,"\n");
			while (j <= end) {
				my_printn("j==",j," ");
				my_printn("val==",end,"\n");
				foundNode[j-start] = configBuff[j];
				j++;
			}
			foundNode[j-start] = '\0';
			addNode(foundNode);
			i++;
			a++;
		}

		sceIoClose(config_fd);
		my_print("Finished scanning through location id's\n");
		mh_print(0,40,"Finished scanning through location id's\n",GREY);
	}

	current = (linkedList*)head;
	my_print("Finished parsing through config file...\n");



  DoInetNetTest();

	while (1) {
		SceCtrlData pad;
		sceCtrlReadBufferPositive(&pad, 1);
		if (exitPspWeather == 1) {
			my_print("exitPspWeather is true\n");
			break;
		}
		else if(pad.Buttons & PSP_CTRL_TRIANGLE) {
			mh_print(48,271-30,triangleChar,WHITE);
			pgFillvram(0);
			pspWeatherLogo();
			pgWaitVn(10);

			getWeather(szMyIPAddr);
		}
		else if (pad.Buttons & PSP_CTRL_SQUARE) {
			mh_print(48,271-20,squareChar,WHITE);
			screenshot();
			mh_print(48,271-20,squareChar,BLUE);

		}
		else if (pad.Buttons & PSP_CTRL_CROSS) {
			//bah I'm stumped...
			//Need to figure out how to give a loc_id and figure out where the radar image is
			//getWeatherImage();
		}
		else if (pad.Buttons & PSP_CTRL_LTRIGGER) {
			if (current->prev) {
				mh_print(0,0,(current->prev)->data,WHITE);
				current = (linkedList*)current->prev;
				pgFillvram(0);
				pspWeatherLR();
				pspWeatherLogo();

				pgWaitVn(10);

				getWeather(szMyIPAddr);
			}
		}
		else if (pad.Buttons & PSP_CTRL_RTRIGGER) {
			if (current->next) {
				mh_print((480 - strlen((current->next)->data)*5),0,(current->next)->data,WHITE);
				current = (linkedList*)current->next;
				pgFillvram(0);
				pspWeatherLR();
				pspWeatherLogo();

				pgWaitVn(10);

				getWeather(szMyIPAddr);
			}
		}
		else if (pad.Buttons & PSP_CTRL_CIRCLE) {
			mh_print(48,271-10,circleChar,WHITE);
			exitPspWeather = 1;
			break;
		}
	}

	goodExit = 1;

	if (exitPspWeather == 1) {
		int err = sceNetApctlDisconnect();
		my_printn("exitPspWeather - sceNetApctlDisconnect returns ", err, "\n");
		nlhTerm();
	}

	if (exitPspWeather == 1) {
		pgPrint2(5,9,GREY,"Exiting...Please Wait");
	}
}

int 
main(void)
{
  pspDebugScreenInit();

  pspDebugScreenPrintf("pspWeather v1.06 by McDongle\n");
  pspDebugScreenPrintf("Modified by Zx-81\n\n");

  pspDebugScreenPrintf("Please wait now loading !\n");
  sceKernelDelayThread(2000000); 

	sceCtrlSetSamplingCycle(0);
	sceCtrlSetSamplingMode(PSP_CTRL_MODE_ANALOG);

  if (nlhLoadDrivers(&module_info) != 0) {
    pspDebugScreenPrintf("unable to load wifi drivers !");
    return 0;
  }

	//Bah.. this sometimes just never works
	//SetupCallbacks();
  getcwd(home_dir,512);

	pgInit();
	pgScreenFrame(1,1);

	pgFillvram(0);
	pspWeatherIntroLogo();
	pgWaitVn(50);

  int user_thid = sceKernelCreateThread( "user_thread", 
     (SceKernelThreadEntry)user_thread, 0x8, 256*1024, PSP_THREAD_ATTR_USER, 0 );
  if(user_thid >= 0) {
    sceKernelStartThread(user_thid, 0, 0);
    sceKernelWaitThreadEnd(user_thid, NULL);
  }

	sceKernelExitGame();

	return 0;
}
