#include <Keyboard.h>

// use this option for OSX:
//char ctrlKey = KEY_LEFT_GUI;
// use this option for Windows and Linux:
char ctrlKey = KEY_LEFT_CTRL;

void setup() {
  // make pin 2 an input and turn on the
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  while (digitalRead(2) == HIGH) {
    // do nothing until pin 2 goes low
    delay(500);
    //Serial.println ('a');
  }
 // Serial.print ('b');
  delay(1000);
  
  //start all engines
  Keyboard.press(ctrlKey);
  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  //allow engine to start
  delay(1000);
}