#include "ServoMotor.h"

ServoMotor::ServoMotor(int motorPin) {
  pin = motorPin;
  currentAngle = 90; 
}

void ServoMotor::attach() {
  motor.attach(pin);
  motor.write(currentAngle);
}
