/*
	Taken from rockpapersizzors - by Skippy911
*/

#include "screenshot.h"

void writeByte(int fd, unsigned char data)
{
	sceIoWrite(fd, &data, 1);
}

const char tgaHeader[] = {0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0};

extern char home_dir[];

void screenshot()
{
  char tmp_filename[512];
	const int width = 480;
	const int lineWidth = 512;
	const int height = 272;
	unsigned short lineBuffer[width];
	unsigned short* vram = (unsigned short*) pgGetVramAddr(0, 0);
	int x, y;
  sprintf(tmp_filename,"%s/screenshot.tga", home_dir);
	int fd = sceIoOpen(tmp_filename, O_CREAT | O_TRUNC | O_WRONLY, 0777);
	if (!fd) return;
	sceIoWrite(fd, tgaHeader, sizeof(tgaHeader));
	writeByte(fd, width & 0xff);
	writeByte(fd, width >> 8);
	writeByte(fd, height & 0xff);
	writeByte(fd, height >> 8);
	writeByte(fd, 16);
	writeByte(fd, 0);
	for (y = height - 1; y >= 0; y--) {
		for (x = 0; x < width; x++) {
			unsigned short color = vram[y * lineWidth + x];
			unsigned char red = color & 0x1f;
			unsigned char green = (color >> 5) & 0x1f;
			unsigned char blue = (color >> 10) & 0x1f;
			lineBuffer[x] = blue | (green<<5) | (red<<10);
		}
		sceIoWrite(fd, lineBuffer, width * 2);
	}
	sceIoClose(fd);
}
