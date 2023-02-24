
#include <Keyboard.h>

const int buttonPin = 2;  // the number of the pushbutton pin
int buttonState = 0;  // variable for reading the pushbutton status
char ctrlKey = KEY_LEFT_CTRL;

void setup() {
  // initialize the LED pin as an output:
 // pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  //start keyboard connection
  Keyboard.begin();
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {


        Keyboard.releaseAll();
        Keyboard.press(KEY_F8);
        delay (500);
        Keyboard.releaseAll();
    
    delay(100);
   
  
  } else {
       Keyboard.releaseAll();
        Keyboard.press(KEY_F5);
        delay (500);
        Keyboard.releaseAll();
  }
}

