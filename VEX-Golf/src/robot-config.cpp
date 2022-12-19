#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor LeftDriveSmart = motor(PORT11, ratio18_1, false);
motor RightDriveSmart = motor(PORT20, ratio18_1, true);
drivetrain Drivetrain = drivetrain(LeftDriveSmart, RightDriveSmart, 319.19, 295, 40, mm, 1);
motor armMotor = motor(PORT19, ratio36_1, true);
motor clawMotor = motor(PORT1, ratio18_1, true);
/*vex-vision-config:begin*/
signature Vision9__BALL = signature (1, -1263, -949, -1106, -5333, -5099, -5216, 5.7, 0);
vision Vision9 = vision (PORT9, 50, Vision9__BALL);
/*vex-vision-config:end*/
distance rightDist = distance(PORT18);
distance leftDist = distance(PORT12);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}