#include "RoboticArm.h"

RoboticArm arm(9, 10, 11); // example pins

void setup() {
  Serial.begin(9600);
  arm.initialize();
  Serial.println("Robotic Arm Ready.");
}

void loop() {
  if (Serial.available()) {
    String cmd = Serial.readStringUntil('\n');
    cmd.trim();

    if (cmd == "base left") {
      arm.moveBase(45);
    } else if (cmd == "base right") {
      arm.moveBase(135);
    } else if (cmd == "elbow up") {
      arm.moveElbow(45);
    } else if (cmd == "elbow down") {
      arm.moveElbow(135);
    } else if (cmd == "grab") {
      arm.moveGripper(30);
    } else if (cmd == "release") {
      arm.moveGripper(90);
    }
  }
}
