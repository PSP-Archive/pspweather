/*
	pspWeather
	by mcdongle

	Description: Crappy XML parser, searches for the string and reads up to </
*/
#include "parser.h"

void 
getPos(char *buff, char *matchString, int *pos) 
{
	int stop = 0;
	int i = 0;
	int buffSize = strlen(buff);
	int matchSize = strlen(matchString);
	pos[0] = 0;
	pos[1] = -1;
	while (i < buffSize) {
		int j = i;
		int k = 0;
		while (buff[j] == matchString[k]) {
	   if (k == matchSize-1) {
				my_print("FOUND ");
				pos[0] = j+1;
				my_printn("0==",pos[0],"");
				while (buff[j] != '<') {
					j++;
				}
				pos[1] = j-1;
				my_printn(" 1==",pos[1],"\n");
				stop = 1;
				break;
			}
			j++;
			k++;
			if (k > matchSize)
				break;
		}
		if (stop)
			break;
		i++;
	}
	//my_printn("exited getPos with i of ",i,"\n");
}
void copyBuff(char *buff, char *toBuff, int start, int end) {
	memset(toBuff, 0, strlen(toBuff));
	int i = start;
	while (i <= end) {
		toBuff[i-start] = buff[i];
		i++;
		if ((i-start) >= 64)
			break;
	}
	toBuff[strlen(toBuff)] = '\0';
}
