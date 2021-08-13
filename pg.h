// primitive graphics for Hello World PSP

void pgInit();
void pgWaitV();
void pgWaitVn(unsigned long count);
void pgScreenFrame(long mode,long frame);
void pgScreenFlip();
void pgScreenFlipV();
void pgPrint(unsigned long x,unsigned long y,unsigned long color,const char *str);
void pgPrint2(unsigned long x,unsigned long y,unsigned long color,const char *str);
void pgPrint4(unsigned long x,unsigned long y,unsigned long color,const char *str);
void pgFillvram(unsigned long color);
void pgBitBlt(unsigned long x,unsigned long y,unsigned long w,unsigned long h,unsigned long mag,const unsigned short *d);
void pgPutChar(unsigned long x,unsigned long y,unsigned long color,unsigned long bgcolor,unsigned char ch,char drawfg,char drawbg,char mag);
void pgRefresh();

void pgPrintCursor(int* xRef, int* yRef, unsigned long color, const char *str);
void mh_print(int x,int y,const char *msg,int col);

#ifndef PSPCHARS
#define PSPCHARS
const static char *squareChar = "��";
const static char *triangleChar = "��";
const static char *circleChar = "��";
const static char *crossChar = "�~";
#endif

#define SCREEN_WIDTH  480
#define SCREEN_HEIGHT 272

