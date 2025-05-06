RoboticArm.h 
#ifndef ROBOTICARM_H
#define ROBOTICARM_H

#include "ServoMotor.h"

class RoboticArm {
  private:
  ServoMotor base;
  ServoMotor elbow;
  ServoMotor gripper;

  public:
  RoboticArm(int basePin, int elbowPin, int gripperPin);
  void initialize();
  void moveBase(int angle);
  void moveElbow(int angle);
  void moveGripper(int angle);
};

#endif
