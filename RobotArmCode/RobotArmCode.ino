/*
 * HOW IT WORKS:
 * 
 */
/*
 * Controlling a gripper arm with multiple servos- in the future, radio control is going to be added
 */
 
#include <Servo.h>

Servo rotatorBase;
Servo firstLeg;
Servo secondLeg;
Servo gripper;

void setup() {
  // put your setup code here, to run once:
  rotatorBase.attach(10);//Digital port to which the rotator base servo is attached
}

void loop() {
  // put your main code here, to run repeatedly:

}
