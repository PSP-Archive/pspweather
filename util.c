#include "std.h"
// here's a minimal C runtime
// program stand alone with no libc requirements

int my_strlen(const char* sz)
{
    int n = 0;
    while (*sz++ != '\0')
        n++;
    return n;
}

void my_strcpy(char* szOut, const char* szIn)
{
    while ((*szOut++ = *szIn++) != '\0')
        ;
}

/////////////////////////////////////////////////////

char AsHex(u8 val)
{
    val = val & 0xF;
    if (val < 10)
        return val + '0';
    else
        return val + 'A' - 10;
}

void FormatHex(char* szOut, u32 val)
{
    int i;
    for (i = 0; i < 8; i++)
        szOut[7-i] = AsHex(val >> (i*4));
    szOut[8] = '\0';
}

/////////////////////////////////////////////////////

# if 0 //LUDO:
static int my_print_y = 0;
# endif

void my_print(const char* str)
{
# if 0 //LUDO:
	mh_print(0,my_print_y,str,GREY);
  my_print_y += 10;
  if (my_print_y >= 270) my_print_y = 0;
# endif
}

void my_printn(const char* str1, u32 val, const char* str2)
{
# if 0 //LUDO:
    char szT[8+1];
    my_print(str1);
    FormatHex(szT, val);
    my_print(szT);
    my_print(str2);
# endif
}

void my_printn8(const char* str1, u8 val, const char* str2)
{
# if 0 //LUDO:
    char szT[8+1];
    my_print(str1);
    FormatHex(szT, val);
    my_print(szT+6); // lower 2 nibbles
    my_print(str2);
# endif
}

/////////////////////////////////////////////////////
