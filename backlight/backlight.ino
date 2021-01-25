#include"TFT_eSPI.h"
TFT_eSPI tft;

void setup() {
    tft.begin();
    tft.setRotation(3);
    digitalWrite(LCD_BACKLIGHT, HIGH); // turn on the backlight

    tft.fillScreen(TFT_RED);
    tft.drawPixel(4,7,TFT_BLACK); //drawing a black pixel at (4,7)
    tft.drawLine(0,0,160,120,TFT_BLACK); //drawing a black line from (0,0) to (160,120)

    tft.drawFastHLine(0,120,320,TFT_BLACK); //A black horizontal line starting from (0, 120)
    tft.drawFastVLine(160,0,240,TFT_BLACK); // A black vertical line starting from (160, 0)

    tft.drawRect(110,70,100,100,TFT_BLACK); //A 100x100 black rectangle starting from (110, 70)

    tft.drawCircle(160,120,50,TFT_BLACK); //A black circle origin at (160, 120)

    tft.drawEllipse(160,120,50,100,TFT_BLACK);

    tft.drawTriangle(160,70,60,170,260,170,TFT_BLACK);

    tft.drawRoundRect(110,70,100,100,10,TFT_BLACK);

    tft.drawChar(140,120,'A',TFT_BLACK, TFT_RED,2); //Draw a black character A from (140,120)
    tft.drawChar(155,120,'B',TFT_BLACK, TFT_RED,2); //Draw a black character B from (155,120)
    tft.drawChar(170,120,'C',TFT_BLACK, TFT_RED,2); //Draw a black character C from (170,120)

    tft.setTextColor(TFT_BLACK);          //sets the text colour to black
    tft.setTextSize(1);                   //sets the size of text
    tft.drawString("Hello world!", 0, 0); //prints strings from (0, 0)
    tft.setTextSize(2);
    tft.drawString("Hello world!", 0, 10);
}

void loop() {
    //Looping through color R-G-B
    delay(1000);
    tft.fillScreen(TFT_RED);
    delay(1000);
    tft.fillScreen(TFT_GREEN);
    delay(1000);
    tft.fillScreen(TFT_BLUE);
    delay(1000);
}
