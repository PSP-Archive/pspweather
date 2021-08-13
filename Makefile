TARGET = pspweather
PSPSDK = $(shell psp-config --pspsdk-path)
PSPBIN = $(shell psp-config --psp-prefix)/bin
OBJS = main.o pg.o nlh.o parser.o screenshot.o icons.o stubs.o loadutil.o util.o

DEFAULT_CFLAGS =
MORE_CFLAGS = -O2 -G0  -Wall

CFLAGS = $(DEFAULT_CFLAGS) $(MORE_CFLAGS)
CXXFLAGS = $(CFLAGS) -fno-exceptions -fno-rtti
ASFLAGS = $(CFLAGS) -c

LIBS=-lpspwlan -lpsppower -lm

EXTRA_TARGETS = EBOOT.PBP
PSP_EBOOT_TITLE = pspweather
PSP_EBOOT_ICON= pspweather.png
# PSP_EBOOT_PIC1 = pspweather-pic.png

include $(PSPSDK)/lib/build.mak

install: kxploit
	cp __SCE__pspweather/EBOOT.PBP /mnt/sda1/psp/game/__SCE__pspweather/
	cp %__SCE__pspweather/EBOOT.PBP /mnt/sda1/psp/game/%__SCE__pspweather/

realclean:
	/bin/rm -f $(OBJS) EBOOT.PBP PARAM.SFO __SCE__pspweather/EBOOT.PBP %__SCE__pspweather/EBOOT.PBP pspweather.elf

