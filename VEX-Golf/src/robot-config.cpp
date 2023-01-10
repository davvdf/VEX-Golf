#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor armMotor = motor(PORT19, ratio36_1, false);
motor clawMotor = motor(PORT1, ratio18_1, true);
/*vex-vision-config:begin*/
signature Vision6__BALL = signature (1, -1263, -949, -1106, -5333, -5099, -5216, 5.7, 0);
vision Vision6 = vision (PORT6, 50, Vision6__BALL);
/*vex-vision-config:end*/
distance rightDist = distance(PORT18);
distance leftDist = distance(PORT12);
line LineTrackerA = line(Brain.ThreeWirePort.A);
line LineTrackerB = line(Brain.ThreeWirePort.B);
line LineTrackerC = line(Brain.ThreeWirePort.C);
line LineTrackerD = line(Brain.ThreeWirePort.D);
line LineTrackerE = line(Brain.ThreeWirePort.E);
motor LeftDriveSmart = motor(PORT11, ratio18_1, false);
motor RightDriveSmart = motor(PORT20, ratio18_1, true);
drivetrain Drivetrain = drivetrain(LeftDriveSmart, RightDriveSmart, 319.19, 295, 40, mm, 1);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}