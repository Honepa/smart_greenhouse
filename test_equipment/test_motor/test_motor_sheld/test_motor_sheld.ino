#include <AFMotor.h>
AF_DCMotor motor1(200,1);
AF_DCMotor motor2(200,2);

void setup() 
{
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  Serial.begin(9600);
}

void loop() 
{
  motor1.run(2);
  motor2.run(2);
  delay(1000);
  motor2.run(1);
  delay(1000);
  motor1.run(4);
  motor2.run(4);
  delay(1000);
}
