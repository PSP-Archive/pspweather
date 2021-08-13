pspWeather v1.06
  Modified by Zx-81

pspWeather v1.05
	by mcdongle
	
Buttons:
Triangle key 	- For refreshing was disabled due to it being somewhat buggy so disregard that message
Circle key	- Will exit, menu button is broken..
Square key	- captures a screenshot of the display and places it at
		  \PSP\GAME\__SCE__PSPWEATHER\screenshot.tga
Cross Key	- (DISABLED) used to capture the weather image of your location to view later on.. but isn't working yet
Menu Key	- (DISABLED) won't exit, barely worked in v1.0

Notes:
  - The icons were taken from an icon pack called Konfabulator. I just edited them
    and put a black background on it. If you notice little white pixels in areas, that's just
    my excellent computer graphics skills.
    
  - Please do not change the folder name for pspWeather. It's essential that it's kept
    as is. I'm sorry for any inconvenience and will try to change this later on.
  
  - Thanks to PspPet's posts on the new structures for sockaddr_in which made this possible.
  
  - I used wifi_sample as a shell to create this.
  
  - DONT EXIT/POWER DOWN/REMOVE MEMORY STICK while memory stick light is on!
    This means some file is open and it will be corrupt if you don't exit nicely!


To use: (this was taken from wifi_sample's readme and edited)
  * There must be one configuration (multiple configuration selection not implemented)

#1) Be sure you can connect to that WiFi net using your PC

#2) Edit \PSP\GAME\__SCE__PSPWEATHER\pspWeather.cfg and place your zip code in there
    Search for your local location id!
      Go to http://xoap.weather.com/search/search?where= and type your location there
      And it will display location id's, choose which one you need
      
      eg "http://xoap.weather.com/search/search?where=Rome Italy"
      <loc id="ITXX0067" type="1">Rome, Italy</loc>
      
      So use ITXX0067 in the config file
       

#3) run the program on PSP 1.50


Terms & Agreement (You must agree to this before using this application)
By using this application you are taking full responsibility of your actions and what it may
or can do to your PSP. If it decides to corrupt files on your PSP one day, I'm terribly sorry
but I'm not holding myself responsible.

I just wanted this application to serve as an example This code can be
altered for many other applications using sockets.
