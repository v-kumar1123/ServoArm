/*
 * GOALS:
 * This arm should have a simplified control, with only one joystick, 
 * 
  */
/*
 * Controlling a gripper arm with multiple servos, with a radio. 
 */
 
#include <Servo.h>

Servo rotatorBase;
Servo firstLeg;
Servo secondLeg;
Servo gripper;

void setup() {
  // put your setup code here, to run once:
  rotatorBase.attach(10);//Digital port to which the rotator base servo is attached, so on, so forth
  firstLeg.attach(9);
  secondLeg.attach(8);
  gripper.attach(11);

  
}

void loop() {
  // put your main code here, to run repeatedly:

}
