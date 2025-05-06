#ifndef SERVOMOTOR_H
#define SERVOMOTOR_H

#include <Servo.h>

class ServoMotor {
  private:
  Servo motor;
  int pin;
  int currentAngle;

  public:
  ServoMotor(int motorPin);
  void attach();
  void moveTo(int angle);
  int getAngle() const;
};

#endif
