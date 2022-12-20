using namespace vex;

extern brain Brain;

using signature = vision::signature;

// VEXcode devices
extern drivetrain Drivetrain;
extern motor armMotor;
extern motor clawMotor;
extern signature Vision9__BALL;
extern signature Vision9__SIG_2;
extern signature Vision9__SIG_3;
extern signature Vision9__SIG_4;
extern signature Vision9__SIG_5;
extern signature Vision9__SIG_6;
extern signature Vision9__SIG_7;
extern vision Vision9;
extern distance rightDist;
extern distance leftDist;
extern line LineTrackerA;
extern line LineTrackerB;
extern line LineTrackerC;
extern line LineTrackerD;
extern line LineTrackerE;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );