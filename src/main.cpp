#include <Arduino.h>
#include "USB.h"
#include "USBHIDMouse.h"

#define DELAY_MS 10000
#define MOVE_X 10

USBHIDMouse Mouse;

void setup()
{
  Mouse.begin();
  USB.begin();
}

void loop()
{
  Mouse.move(-MOVE_X, 0, 0);
  delay(DELAY_MS);
  Mouse.move(MOVE_X, 0, 0);
  delay(DELAY_MS);
}
