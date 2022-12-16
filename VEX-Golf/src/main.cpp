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
  armMotor.spinFor(reverse, 193, degrees);
 while (true) {
   if ( Vision9.takeSnapshot(Vision9__BOB) || Vision9.takeSnapshot(Vision9__BOBBY)){
     if (Vision9.largestObject.centerY > 105.5){
        armMotor.stop();
        clawMotor.spin(reverse);
        wait(3,seconds);
        armMotor.spinFor(reverse, 360, degrees);
     }
    }
   wait(25, msec);
 }
  
}
