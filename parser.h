/*
	pspWeather
	by mcdongle

	Description: Crappy XML parser, searches for the string and reads up to </
*/

#ifndef PARSER_H
#define PARSER_H

void getPos(char *buff, char *matchString, int *pos);
void copyBuff(char *buff, char *newBuff, int start, int end);

#endif
