#include <FastLED.h>
#define NUM_LEDS 1     
#define DATA_PIN D8    
#define LED_TYPE NEOPIXEL    
CRGB leds[NUM_LEDS];    

void setup() { 
    FastLED.addLeds<LED_TYPE, DATA_PIN>(leds, NUM_LEDS);  
}

void loop() { 
  leds[0] = CRGB(0,0,0);  //CRGB（red,green,blue）every parameter range from 0 to 255
  FastLED.show();
  delay(1000);
}