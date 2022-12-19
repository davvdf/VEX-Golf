// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    11, 20          
// armMotor             motor         19              
// clawMotor            motor         1               
// Vision9              vision        9               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    11, 20          
// armMotor             motor         19              
// clawMotor            motor         1               
// Vision9              vision        9               
// ---- END VEXCODE CONFIGURED DEVICES ----
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\david                                            */
/*    Created:      Fri Dec 16 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    11, 20          
// armMotor             motor         19              
// clawMotor            motor         1               
// Vision9              vision        9               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  armMotor.spinFor(reverse, 190, degrees);
  armMotor.setVelocity(20, percent);
 while (true) {
   if ( Vision9.takeSnapshot(Vision9__BALL)){
     if (Vision9.largestObject.centerY > 100){
        clawMotor.spin(forward);
        armMotor.spinFor(forward, 100, degrees);
        armMotor.stop();        
        wait(3,seconds);
        armMotor.spinFor(reverse, 260, degrees);
     }
    }
   wait(25, msec);
 }
  
}
