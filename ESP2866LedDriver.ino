#include <FastLED.h>

#define NUM_LEDS 60
#define DATA_PIN 2

CRGB leds[NUM_LEDS];

// !! Does the pin need setting to output mode?
// !! Try setting the onboard LED at the same time
// Check the connections and power to the LEDs...

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  // Turn the first led red for 1 second
  leds[0] = CRGB::Red; 
  FastLED.show();
  delay(1000);
  
  // Set the first led back to black for 1 second
  leds[0] = CRGB::Black;
  FastLED.show();
  delay(1000);
}
