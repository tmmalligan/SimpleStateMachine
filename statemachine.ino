/*
 * Week 6: Simple State Machine
 * By Taylor Malligan
 */

// A0 has the pushbutton attached to it. Give it a name:
  const int pushButton = A0;
  int buttonCount = 0;
  int buttonState = 0;
  int redLED =13;
  int greenLED = 12;
  int blueLED = 27;

 
  void setup() { // the setup routine runs once when you press reset:
    Serial.begin(9600); // initialize serial communication at 9600 bits per second:
  
     // make the pushbutton's pin an input:
    pinmode(pushButtton, INPIUT);
    pinMode(redLED, OUTPUT);
    pinMode(greenLED,OUTPUT);
    pinMode(blueLED,OUTPUT);

  }


  void loop() { // (the loop where variables run
   
  int buttonState = digitalRead(pushButton); /// new variable 
  delay(200);        // delay in between reads for stability

  if (buttonCount == 1){ //State 1 - press 1 time and turns to red
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    digitalWrite(blueLED, LOW);
 
    }
  else if(buttonCount == 2) { //State 2 - press 2 times and turns to green
     digitalWrite(redLED, LOW);
     digitalWrite(greenLED, HIGH);
     digitalWrite(blueLED, LOW);
  }
  else if(buttonCount == 3) { //State 3 - press 3 tims and turns to blue
     digitalWrite(redLED, LOW);
     digitalWrite(greenLED, LOW);
     digitalWrite(blueLED, HIGH);
  }
  else if(buttonCount == 4) { // State 4 - press 4 times and starts blinking
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
    
  }
  else{
    buttonCount = 0;
     digitalWrite(redLED, LOW);
     digitalWrite(greenLED, LOW);
     digitalWrite(blueLED, LOW);
  }   
 }   
   
