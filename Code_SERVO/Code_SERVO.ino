/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo servoGauche;
Servo servoDroite;

void setup() {
  servoGauche.attach(5);
  servoDroite.attach(6);
}

void loop() {
  int pos = 0;
  servoGauche.write(pos);
  servoDroite.write(pos);
  for (pos = 0; pos <= 140; pos += 1) {
    servoGauche.write(pos);
    delay(15);
  }
  for (pos = 140; pos >= 0; pos -= 1) {
    servoGauche.write(pos);
    delay(15);
  }
  delay(1500);
  for (pos = 0; pos <= 140; pos += 1) {
    servoDroite.write(pos);
    delay(15);
  }
  for (pos = 140; pos >= 0; pos -= 1) {
    servoDroite.write(pos);
    delay(15);
  }
  delay(1500);
}
