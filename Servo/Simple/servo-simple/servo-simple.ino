/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = A0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin
int delayms = 200;

void setup() {
  myservo.attach(0);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservo.write(0);                 
  delay(delayms);   
  myservo.write(45);                 
  delay(delayms); 
  myservo.write(90);                 
  delay(delayms);  
  myservo.write(135);                 
  delay(delayms); 
  myservo.write(180);                 
  delay(delayms); 
  myservo.write(135);                 
  delay(delayms);  
  myservo.write(90);                 
  delay(delayms); 
  myservo.write(45);                 
  delay(delayms);                      
}
