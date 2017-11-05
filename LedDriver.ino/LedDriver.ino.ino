#include <Adafruit_NeoPixel.h>

// Pin 5: GPIO 5: use D1 pin on lolin nodemcu, and connect ws2812 VIn to 3v...
#define PIN            5

// How many NeoPixels are attached?
#define NUMPIXELS      1

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 10;
int frame = 0;

void setup() {
  pixels.begin();
}

void loop() {
  for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(frame%31,(frame%31)/3,0));
  }
  pixels.show();
  delay(delayval);
  frame++;
}
