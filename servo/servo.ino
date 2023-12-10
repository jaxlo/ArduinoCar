#include <Servo.h>

Servo Servo1; //servo motor 1

void setup() {
  // put your setup code here, to run once:
  Serial.print("Starting...\n");
  Serial.begin(9600);
  Servo1.attach(2);

}


void loop() {
  // put your main code here, to run repeatedly:
  Servo1.write(0);
  delay(1);
  Servo1.write(90);
  delay(1);
  Serial.print("Running\n");

}
