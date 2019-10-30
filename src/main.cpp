// Released under the GPLv3 license to match the rest of the
// Adafruit NeoPixel library
#include <Adafruit_NeoPixel.h>

#define PIN 6
#define RED (255,0,0)
#define NUMPIXELS 12
// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

//*******************************************************************************
//                              Color Functions                                //
//*******************************************************************************

void orange(){
  //this loops through all possible brightness' from 0-255 and sets it with strip.setBrighness
  for(int j=0; j<255; j++){
    strip.setBrightness(j);
  //this loops through all of the leds in the strip, and then sets the color.
  //this loop alone will just turn on all leds in the strip.  
  for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(255, 128, 0));
  strip.show();
  delay(1);
  }
  }
//this loop is opposite and fades out....
for(int j=255; j>0; j--){
    strip.setBrightness(j);
    for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(255, 128, 0));
  strip.show();
  delay(1);
  }
  }
}

  void purple(){
  //this loops through all possible brightness' from 0-255 and sets it with strip.setBrighness
  for(int j=0; j<255; j++){
    strip.setBrightness(j);
  //this loops through all of the leds in the strip, and then sets the color.
  //this loop alone will just turn on all leds in the strip.  
  for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(200, 0, 255));
  strip.show();
  delay(1);
  }
  }
//this loop is opposite and fades out....
for(int j=255; j>0; j--){
    strip.setBrightness(j);
    for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(200, 0, 255));
  strip.show();
  delay(1);
  }
  }
}
void white(){
  //this loops through all possible brightness' from 0-255 and sets it with strip.setBrighness
  for(int j=0; j<255; j++){
    strip.setBrightness(j);
  //this loops through all of the leds in the strip, and then sets the color.
  //this loop alone will just turn on all leds in the strip.  
  for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(j, j, j));
  strip.show();
  delay(1);
  }
  }
//this loop is opposite and fades out....
for(int j=255; j>0; j--){
    strip.setBrightness(j);
    for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(j, j, j));
  strip.show();
  delay(1);
  }
  }
}
void green(){
  //this loops through all possible brightness' from 0-255 and sets it with strip.setBrighness
  for(int j=0; j<255; j++){
    strip.setBrightness(j);
  //this loops through all of the leds in the strip, and then sets the color.
  //this loop alone will just turn on all leds in the strip.  
  for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(0, j, 0));
  strip.show();
  delay(1);
  }
  }
//this loop is opposite and fades out....
for(int j=255; j>0; j--){
    strip.setBrightness(j);
    for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(0, j, 0));
  strip.show();
  delay(1);
  }
  }
}
void red(){
  //this loops through all possible brightness' from 0-255 and sets it with strip.setBrighness
  for(int j=0; j<255; j++){
    strip.setBrightness(j);
  //this loops through all of the leds in the strip, and then sets the color.
  //this loop alone will just turn on all leds in the strip.  
  for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(j, 10, 0));
  strip.show();
  delay(1);
  }
  }
//this loop is opposite and fades out....
for(int j=255; j>0; j--){
    strip.setBrightness(j);
    for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(j, 10, 0));
  strip.show();
  delay(1);
  }
  }
}
void yellow(){
  //this loops through all possible brightness' from 0-255 and sets it with strip.setBrighness
  for(int j=0; j<255; j++){
    strip.setBrightness(j);
  //this loops through all of the leds in the strip, and then sets the color.
  //this loop alone will just turn on all leds in the strip.  
  for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(j, j, 0));
  strip.show();
  delay(1);
  }
  }
//this loop is opposite and fades out....
for(int j=255; j>0; j--){
    strip.setBrightness(j);
    for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(j, j, 0));
  strip.show();
  delay(1);
  }
  }
}
void blue(){
  //this loops through all possible brightness' from 0-255 and sets it with strip.setBrighness
  for(int j=0; j<255; j++){
    strip.setBrightness(j);
  //this loops through all of the leds in the strip, and then sets the color.
  //this loop alone will just turn on all leds in the strip.  
  for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(3,10,j));
  strip.show();
  delay(1);
  }
  }
//this loop is opposite and fades out....
for(int j=255; j>0; j--){
    strip.setBrightness(j);
    for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(3,10,j));
  strip.show();
  delay(1);
  }
  }
}
void pink(){
  //this loops through all possible brightness' from 0-255 and sets it with strip.setBrighness
  for(int j=0; j<255; j++){
    strip.setBrightness(j);
  //this loops through all of the leds in the strip, and then sets the color.
  //this loop alone will just turn on all leds in the strip.  
  for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(j,3,10));
  strip.show();
  delay(1);
  }
  }
//this loop is opposite and fades out....
for(int j=255; j>0; j--){
    strip.setBrightness(j);
    for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(j,3,10));
  strip.show();
  delay(1);
  }
  }
}

void indigo(){
  //this loops through all possible brightness' from 0-255 and sets it with strip.setBrighness
  for(int j=0; j<255; j++){
    strip.setBrightness(j);
  //this loops through all of the leds in the strip, and then sets the color.
  //this loop alone will just turn on all leds in the strip.  
  for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(2,1,20));
  strip.show();
  delay(1);
  }
  }
//this loop is opposite and fades out....
for(int j=255; j>0; j--){
    strip.setBrightness(j);
    for(int i = 0; i<strip.numPixels(); i++){
  strip.setPixelColor(i, strip.Color(2,1,20));
  strip.show();
  delay(1);
  }
  }
}

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {  

  delay(2);

  indigo();
  strip.show();
  red();
  strip.show();
  orange();
  strip.show();
  yellow();
  strip.show();
  green();
  strip.show(); 
  purple();
  strip.show(); 
  blue();
  strip.show(); 
//  strip.setPixelColor(0,0,0,0);
//  delay(10);
// 

}














  
