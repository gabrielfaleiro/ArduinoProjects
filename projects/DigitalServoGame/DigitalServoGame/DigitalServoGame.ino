/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
bool increasing = true;

void setup() {
  // initialize serial:
  Serial.begin(9600);
  
  myservo.attach(10);  // attaches the servo on pin 9 to the servo object
//  servo.attach(pin, min, max)
//    pin: the number of the pin that the servo is attached to
//    min (optional): the pulse width, in microseconds, corresponding to the minimum (0-degree) angle on the servo (defaults to 544)
//    max (optional): the pulse width, in microseconds, corresponding to the maximum (180-degree) angle on the servo (defaults to 2400)
//  myservo.attach(10,900,2000);
}

void loop() {
  int readPosMs = 0;
  int readPos = 0;
  
  readPosMs = myservo.readMicroseconds();
  readPos = myservo.read();
  Serial.print(pos);
  Serial.print(" - ");
  Serial.print(readPos);
  Serial.print(" - ");
  Serial.println(readPosMs);
  
//  myservo.writeMicroseconds(1000);              // tell servo to go to position in variable 'pos'
//  delay(2000);                       // waits 15ms for the servo to reach the position
//
//  myservo.writeMicroseconds(1500);              // tell servo to go to position in variable 'pos'
//  delay(2000);                       // waits 15ms for the servo to reach the position

  if ( pos >= 180 ) {
    pos = 180;
    increasing = false;
  }
  if ( pos <= 0 ) {
    pos = 0;
    increasing = true;
  }

  myservo.write(pos);              // tell servo to go to position in variable 'pos'
  delay(15);                       // waits 15ms for the servo to reach the position
  
  if (increasing){
    pos += 1;
  } else {
    pos -= 1;
  }
  
//  for (pos = 0; pos <= 180; pos += 1.5) { // goes from 0 degrees to 180 degrees
//    // in steps of 1 degree
//    myservo.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
//  for (pos = 180; pos >= 0; pos -= 1.5) { // goes from 180 degrees to 0 degrees
//    myservo.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
}
