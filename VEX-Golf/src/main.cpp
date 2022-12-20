// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    11, 20          
// armMotor             motor         19              
// clawMotor            motor         1               
// Vision9              vision        9               
// rightDist            distance      18              
// leftDist             distance      12              
// LineTrackerA         line          A               
// LineTrackerB         line          B               
// LineTrackerC         line          C               
// LineTrackerD         line          D               
// LineTrackerE         line          E               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    11, 20          
// armMotor             motor         19              
// clawMotor            motor         1               
// Vision9              vision        9               
// rightDist            distance      18              
// leftDist             distance      12              
// LineTrackerA         line          A               
// LineTrackerB         line          B               
// LineTrackerC         line          C               
// LineTrackerD         line          D               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    11, 20          
// armMotor             motor         19              
// clawMotor            motor         1               
// Vision9              vision        9               
// rightDist            distance      18              
// leftDist             distance      12              
// LineTrackerA         line          A               
// LineTrackerB         line          B               
// LineTrackerC         line          C               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    11, 20          
// armMotor             motor         19              
// clawMotor            motor         1               
// Vision9              vision        9               
// rightDist            distance      18              
// leftDist             distance      12              
// LineTrackerA         line          A               
// LineTrackerB         line          B               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    11, 20          
// armMotor             motor         19              
// clawMotor            motor         1               
// Vision9              vision        9               
// rightDist            distance      18              
// leftDist             distance      12              
// LineTrackerA         line          A               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    11, 20          
// armMotor             motor         19              
// clawMotor            motor         1               
// Vision9              vision        9               
// rightDist            distance      18              
// leftDist             distance      12              
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    11, 20          
// armMotor             motor         19              
// clawMotor            motor         1               
// Vision9              vision        9               
// rightDist            distance      18              
// leftDist             distance      12              
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    11, 20          
// armMotor             motor         19              
// clawMotor            motor         1               
// Vision9              vision        9               
// rightSense           distance      18              
// leftDist             distance      12              
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    11, 20          
// armMotor             motor         19              
// clawMotor            motor         1               
// Vision9              vision        9               
// rightSense           distance      18              
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    11, 20          
// armMotor             motor         19              
// clawMotor            motor         1               
// Vision9              vision        9               
// Distance18           distance      18              
// ---- END VEXCODE CONFIGURED DEVICES ----
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

int thresholdVal = 50;

void getBall(){
  if ( Vision9.takeSnapshot(Vision9__BALL)){
    if (Vision9.largestObject.centerY > 100){
      clawMotor.spin(forward);
      armMotor.spinToPosition(90, degrees);
      armMotor.stop();        
      wait(3,seconds);
        
    }
  }
}

void driveSense(){
  if (LineTrackerB.reflectivity()>thresholdVal){
    Drivetrain.drive(reverse);
  } else if (LineTrackerA.reflectivity()>thresholdVal){
    Drivetrain.turnFor(right, 1, degrees);
    wait(5, msec);
  } else if (LineTrackerC.reflectivity()>thresholdVal){
    Drivetrain.turnFor(left, 1, degrees);
    wait(5, msec);
  } else if (LineTrackerE.reflectivity()>thresholdVal){
    Drivetrain.driveFor(reverse, 210, mm);
    Drivetrain.turnFor(left, 90, degrees);
  } else if (LineTrackerD.reflectivity()>thresholdVal){
    Drivetrain.driveFor(reverse, 210, mm);
    Drivetrain.turnFor(right, 90, degrees);
  }
}

void senseT(){
  if (LineTrackerD.reflectivity()>thresholdVal && LineTrackerE.reflectivity()>thresholdVal){
    armMotor.spinToPosition(260, degrees);
    armMotor.spinToPosition(190, degrees);
    if (rightDist.objectDistance(mm) > 250){
      Drivetrain.turnFor(right , 90, degrees);
    }
    if (leftDist.objectDistance(mm) > 250){
      Drivetrain.turnFor(left, 90, degrees);
    }
  }
}
int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  armMotor.setVelocity(20, percent);
  armMotor.spinToPosition(190, degrees);
  while (true) {
    getBall();
    driveSense();
    senseT();
    wait(25, msec);
 }
  
}
