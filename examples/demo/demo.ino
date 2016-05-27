#include <SSD1306_text.h>
#include <Wire.h>

#define OLED_RESET 4
SSD1306_text display(OLED_RESET);

//------------------------------------------------------------------------------
void setup() {

// Initialize, optionally clear the screen
    display.init();
    display.clear();                 // clear screen
    
// Hello world - single sized character at row 0, pixel 0    
    display.setTextSize(1,1);        // 5x7 characters, pixel spacing = 1
    display.write("Hello world!");

// Scaled characters, extra spacing
    display.setCursor(3, 10);        // move cursor to row 3, pixel column 10
    display.setTextSize(3, 8);       // 3X character size, spacing 8 pixels
    display.write("Abc");

// Use print()
    float floatVal = 23.792;
    display.setCursor(6,40);
    display.setTextSize(2,1);
    display.print(floatVal,3);
    
// Pseudo-graphics: Draw a box using direct writes  
    display.setCursor(0, 100);
    display.sendData(0xFF);
    for (int i=0; i<14; i++) display.sendData(0x01);
    display.sendData(0xFF);
    display.setCursor(1,100);
    display.sendData(0xFF);
    for (int i=0; i<14; i++) display.sendData(0x80);
    display.sendData(0xFF);
}
//------------------------------------------------------------------------------

void loop() {}

