/*
	pspWeather
	by mcdongle

	Description: Icons used by pspWeather
				 All icons are from an icon pack called Konfabulator

	plotCellImage taken from RPS
*/
#include "icons/clouds_hail.c"
#include "icons/cloudy.c"
#include "icons/drizzle.c"
#include "icons/dust.c"
#include "icons/fog.c"
#include "icons/foggy_day.c"
#include "icons/foggy_night.c"
#include "icons/frigid.c"
#include "icons/haze.c"
#include "icons/heavy_rain_icy.c"
#include "icons/heavy_snow.c"
#include "icons/hot_day.c"
#include "icons/light_rain.c"
#include "icons/light_rain_icy.c"
#include "icons/light_snow.c"
#include "icons/mostly_cloudy_day.c"
#include "icons/mostly_cloudy_night.c"
#include "icons/night.c"
#include "icons/na.c"
#include "icons/partly_cloudy_day.c"
#include "icons/partly_cloudy_night.c"
#include "icons/rain.c"
#include "icons/rainy_night.c"
#include "icons/rain_day.c"
#include "icons/smoke.c"
#include "icons/snow.c"
#include "icons/snowflakes.c"
#include "icons/snowy_night.c"
#include "icons/snow_rain.c"
#include "icons/snow_rain_icy.c"
#include "icons/snow_wind.c"
#include "icons/sunny.c"
#include "icons/thunderstorm_rain.c"
#include "icons/tstorm_day.c"
#include "icons/tstorm_night.c"
#include "icons/windy.c"
#include "icons/windy_rain.c"

#include "icons.h"
#include "pg.h"

void plotCellImage(int x, int y, int unsigned short* image, int width, int height)
{
	unsigned short* vram = (unsigned short*) pgGetVramAddr(x, y);
	int xo, yo;
	for (yo = 0; yo < height; yo++) {
		for (xo = 0; xo < width; xo++) {
			if (*image != 0x8000) {
				vram[xo + yo * 512] = *image;
			}
			image++;
		}
	}
}

// Get ready for a huge if/else if/else method :(
// I could have ||'d some of this stuff but I auto generated most of this and I'm getting lazy
// Fix later...
void displayIcon(char *iconVal) {
	if (!(strncmp(iconVal,"10",2))) {
		plotCellImage(15,35,heavy_rain_icyData, heavy_rain_icyWidth, heavy_rain_icyHeight);
	}
	else if (!(_strncmp(iconVal,"11",2))) {
		plotCellImage(15,35,drizzleData, drizzleWidth, drizzleHeight);
	}
	else if (!(_strncmp(iconVal,"12",2))) {
		plotCellImage(15,35,rainData, rainWidth, rainHeight);
	}
	else if (!(_strncmp(iconVal,"13",2))) {
		plotCellImage(15,35,light_snowData, light_snowWidth, light_snowHeight);
	}
	else if (!(_strncmp(iconVal,"14",2))) {
		plotCellImage(15,35,snowData, snowWidth, snowHeight);
	}
	else if (!(_strncmp(iconVal,"15",2))) {
		plotCellImage(15,35,snowflakesData, snowflakesWidth, snowflakesHeight);
	}
	else if (!(_strncmp(iconVal,"16",2))) {
		plotCellImage(15,35,heavy_snowData, heavy_snowWidth, heavy_snowHeight);
	}
	else if (!(_strncmp(iconVal,"17",2))) {
		plotCellImage(15,35,thunderstorm_rainData, thunderstorm_rainWidth, thunderstorm_rainHeight);
	}
	else if (!(_strncmp(iconVal,"18",2))) {
		plotCellImage(15,35,clouds_hailData, clouds_hailWidth, clouds_hailHeight);
	}
	else if (!(_strncmp(iconVal,"19",2))) {
		plotCellImage(15,35,dustData, dustWidth, dustHeight);
	}
	else if (!(_strncmp(iconVal,"20",2))) {
		plotCellImage(15,35,fogData, fogWidth, fogHeight);
	}
	else if (!(_strncmp(iconVal,"21",2))) {
		plotCellImage(15,35,hazeData, hazeWidth, hazeHeight);
	}
	else if (!(_strncmp(iconVal,"22",2))) {
		plotCellImage(15,35,smokeData, smokeWidth, smokeHeight);
	}
	else if (!(_strncmp(iconVal,"23",2))) {
		plotCellImage(15,35,windyData, windyWidth, windyHeight);
	}
	else if (!(_strncmp(iconVal,"24",2))) {
		plotCellImage(15,35,windyData, windyWidth, windyHeight);
	}
	else if (!(_strncmp(iconVal,"25",2))) {
		plotCellImage(15,35,frigidData, frigidWidth, frigidHeight);
	}
	else if (!(_strncmp(iconVal,"26",2))) {
		plotCellImage(15,35,cloudyData, cloudyWidth, cloudyHeight);
	}
	else if (!(_strncmp(iconVal,"27",2))) {
		plotCellImage(15,35,mostly_cloudy_nightData, mostly_cloudy_nightWidth, mostly_cloudy_nightHeight);
	}
	else if (!(_strncmp(iconVal,"28",2))) {
		plotCellImage(15,35,mostly_cloudy_dayData, mostly_cloudy_dayWidth, mostly_cloudy_dayHeight);
	}
	else if (!(_strncmp(iconVal,"29",2))) {
		plotCellImage(15,35,partly_cloudy_nightData, partly_cloudy_nightWidth, partly_cloudy_nightHeight);
	}
	else if (!(_strncmp(iconVal,"30",2))) {
		plotCellImage(15,35,partly_cloudy_dayData, partly_cloudy_dayWidth, partly_cloudy_dayHeight);
	}
	else if (!(_strncmp(iconVal,"31",2))) {
		plotCellImage(15,35,nightData, nightWidth, nightHeight);
	}
	else if (!(_strncmp(iconVal,"32",2))) {
		plotCellImage(15,35,sunnyData, sunnyWidth, sunnyHeight);
	}
	else if (!(_strncmp(iconVal,"33",2))) {
		plotCellImage(15,35,foggy_nightData, foggy_nightWidth, foggy_nightHeight);
	}
	else if (!(_strncmp(iconVal,"34",2))) {
		plotCellImage(15,35,foggy_dayData, foggy_dayWidth, foggy_dayHeight);
	}
	else if (!(_strncmp(iconVal,"35",2))) {
		plotCellImage(15,35,thunderstorm_rainData, thunderstorm_rainWidth, thunderstorm_rainHeight);
	}
	else if (!(_strncmp(iconVal,"36",2))) {
		plotCellImage(15,35,hot_dayData, hot_dayWidth, hot_dayHeight);
	}
	else if (!(_strncmp(iconVal,"37",2))) {
		plotCellImage(15,35,tstorm_dayData, tstorm_dayWidth, tstorm_dayHeight);
	}
	else if (!(_strncmp(iconVal,"38",2))) {
		plotCellImage(15,35,tstorm_dayData, tstorm_dayWidth, tstorm_dayHeight);
	}
	else if (!(_strncmp(iconVal,"39",2))) {
		plotCellImage(15,35,rain_dayData, rain_dayWidth, rain_dayHeight);
	}
	else if (!(_strncmp(iconVal,"40",2))) {
		plotCellImage(15,35,rainData, rainWidth, rainHeight);
	}
	else if (!(_strncmp(iconVal,"41",2))) {
		plotCellImage(15,35,heavy_snowData, heavy_snowWidth, heavy_snowHeight);
	}
	else if (!(_strncmp(iconVal,"42",2))) {
		plotCellImage(15,35,heavy_snowData, heavy_snowWidth, heavy_snowHeight);
	}
	else if (!(_strncmp(iconVal,"43",2))) {
		plotCellImage(15,35,snow_windData, snow_windWidth, snow_windHeight);
	}
	else if (!(_strncmp(iconVal,"44",2))) {
		plotCellImage(15,35,partly_cloudy_dayData, partly_cloudy_dayWidth, partly_cloudy_dayHeight);
	}
	else if (!(_strncmp(iconVal,"45",2))) {
		plotCellImage(15,35,rainy_nightData, rainy_nightWidth, rainy_nightHeight);
	}
	else if (!(_strncmp(iconVal,"46",2))) {
		plotCellImage(15,35,snowy_nightData, snowy_nightWidth, snowy_nightHeight);
	}
	else if (!(_strncmp(iconVal,"47",2))) {
		plotCellImage(15,35,tstorm_nightData, tstorm_nightWidth, tstorm_nightHeight);
	}
	else if (!(_strncmp(iconVal,"48",2))) {
		plotCellImage(15,35,naData, naWidth, naHeight);
	}
	else if (!(_strncmp(iconVal,"0",1))) {
		plotCellImage(15,35,thunderstorm_rainData, thunderstorm_rainWidth, thunderstorm_rainHeight);
	}
	else if (!(_strncmp(iconVal,"1",1))) {
		plotCellImage(15,35,windy_rainData, windy_rainWidth, windy_rainHeight);
	}
	else if (!(_strncmp(iconVal,"2",1))) {
		plotCellImage(15,35,windy_rainData, windy_rainWidth, windy_rainHeight);
	}
	else if (!(_strncmp(iconVal,"3",1))) {
		plotCellImage(15,35,thunderstorm_rainData, thunderstorm_rainWidth, thunderstorm_rainHeight);
	}
	else if (!(_strncmp(iconVal,"4",1))) {
		plotCellImage(15,35,thunderstorm_rainData, thunderstorm_rainWidth, thunderstorm_rainHeight);
	}
	else if (!(_strncmp(iconVal,"5",1))) {
		plotCellImage(15,35,snow_rainData, snow_rainWidth, snow_rainHeight);
	}
	else if (!(_strncmp(iconVal,"6",1))) {
		plotCellImage(15,35,clouds_hailData, clouds_hailWidth, clouds_hailHeight);
	}
	else if (!(_strncmp(iconVal,"7",1))) {
		plotCellImage(15,35,snow_rain_icyData, snow_rain_icyWidth, snow_rain_icyHeight);
	}
	else if (!(_strncmp(iconVal,"8",1))) {
		plotCellImage(15,35,light_rain_icyData, light_rain_icyWidth, light_rain_icyHeight);
	}
	else if (!(_strncmp(iconVal,"9",1))) {
		plotCellImage(15,35,light_rainData, light_rainWidth, light_rainHeight);
	}
	else {
		plotCellImage(15,35,naData, naWidth, naHeight);
	}
}
