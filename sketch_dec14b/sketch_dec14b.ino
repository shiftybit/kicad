#include <Adafruit_NeoPixel.h>
#define PIN 6
#define LED 8
#define NUMPIXELS 1
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  pixels.begin();
  pixels.show();
  pixels.setBrightness(50);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  pixels.setPixelColor(0, pixels.Color(0,255,0));
  pixels.show();
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(LED,HIGH);
  delay(1000);
  pixels.clear();
  pixels.setPixelColor(0, pixels.Color(255,0,0));
  pixels.show();
  digitalWrite(LED, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
