#include <Servo.h>

#define sensor 8

Servo servoMotor;

void setup() {
  Serial.begin(9600);
  servoMotor.attach(9);
  servoMotor.write(0);
  delay(1000);

  pinMode(sensor, INPUT);
}

void loop() {
  if(digitalRead(sensor) == LOW){
      servoMotor.write(90);
       delay(2000);
  }
  servoMotor.write(0);

}
