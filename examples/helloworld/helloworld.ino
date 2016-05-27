#include <SSD1306_text.h>
#include <Wire.h>

#define OLED_RESET 4
SSD1306_text display(OLED_RESET);

void setup(void) {
  display.init();
  display.clear();
  display.print("Hello World!");
}

void loop(void) {}