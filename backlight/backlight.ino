#include"TFT_eSPI.h"
TFT_eSPI tft;

void setup() {
    tft.begin();
    tft.setRotation(2);
    digitalWrite(LCD_BACKLIGHT, HIGH); // turn on the backlight

    tft.fillScreen(TFT_RED);
}

void loop() {
}
