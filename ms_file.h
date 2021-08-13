
#define O_RDONLY    0x0001
#define O_WRONLY    0x0002
#define O_RDWR      0x0003
#define O_NBLOCK    0x0010
#define O_APPEND    0x0100
#define O_CREAT     0x0200
#define O_TRUNC     0x0400
#define O_NOWAIT    0x8000

# if 0
int sceIoOpen(const char* file, int mode, int perm);
//void sceIoClose(int fd);
int sceIoRead(int fd, void *data, int size);
//int sceIoWrite(int fd, void *data, int size);
//int sceIoLseek(int fd, int offset, int whence);
int sceIoRemove(const char *file);
int sceIoMkdir(const char *dir, int mode);
int sceIoRmdir(const char *dir);
int sceIoRename(const char *oldname, const char *newname);

int sceIoIoctl(int fd, int cmd, int argR6, int argR7, int argR8, int argR9);




# endif
