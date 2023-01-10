using namespace vex;

extern brain Brain;

using signature = vision::signature;

// VEXcode devices
extern motor armMotor;
extern motor clawMotor;
extern signature Vision6__BALL;
extern signature Vision6__SIG_2;
extern signature Vision6__SIG_3;
extern signature Vision6__SIG_4;
extern signature Vision6__SIG_5;
extern signature Vision6__SIG_6;
extern signature Vision6__SIG_7;
extern vision Vision6;
extern distance rightDist;
extern distance leftDist;
extern line LineTrackerA;
extern line LineTrackerB;
extern line LineTrackerC;
extern line LineTrackerD;
extern line LineTrackerE;
extern drivetrain Drivetrain;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );