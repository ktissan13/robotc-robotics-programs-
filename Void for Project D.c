#pragma config(Sensor, in1,    Gyro,           sensorGyro)
#pragma config(Sensor, dgtl1,  ClawC,          sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  LiftRC,         sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  LiftLC,         sensorQuadEncoder)
#pragma config(Sensor, dgtl7,  DriveRC,        sensorQuadEncoder)
#pragma config(Sensor, dgtl9,  DriveLC,        sensorQuadEncoder)
#pragma config(Sensor, dgtl11, ClawStopper,    sensorTouch)
#pragma config(Motor,  port1,           Claw1,         tmotorVex393HighSpeed_HBridge, openLoop, driveLeft, encoderPort, dgtl1)
#pragma config(Motor,  port2,           Lift12,        tmotorVex393HighSpeed_MC29, openLoop, driveLeft, encoderPort, dgtl3)
#pragma config(Motor,  port3,           Lift3,         tmotorVex393HighSpeed_MC29, openLoop, driveLeft, encoderPort, dgtl3)
#pragma config(Motor,  port4,           Lift45,        tmotorVex393HighSpeed_MC29, openLoop, driveRight, encoderPort, dgtl5)
#pragma config(Motor,  port5,           Lift6,         tmotorVex393HighSpeed_MC29, openLoop, driveRight, encoderPort, dgtl5)
#pragma config(Motor,  port6,           DriveRF,       tmotorVex393HighSpeed_MC29, openLoop, encoderPort, dgtl7)
#pragma config(Motor,  port7,           DriveRR,       tmotorVex393HighSpeed_MC29, openLoop, encoderPort, dgtl7)
#pragma config(Motor,  port8,           DriveLF,       tmotorVex393HighSpeed_MC29, openLoop, encoderPort, dgtl9)
#pragma config(Motor,  port9,           DriveLR,       tmotorVex393HighSpeed_MC29, openLoop, encoderPort, dgtl9)
#pragma config(Motor,  port10,          Claw2,         tmotorVex393HighSpeed_HBridge, openLoop, driveRight, encoderPort, dgtl1)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//void
//Claw Void
void Claw(int speed)
{
	motor[Claw1] = speed;
	motor[Claw2] = speed;
}

//Open Claw
void OpenClaw(float time)
{
	Claw(100);
	wait10Msec(10);
}

//Close Claw
void CloseClaw(float time)
{
	Claw(-100);
	wait10Msec(10);
}

//Drive
//Left Drive
void DriveL(int speed)
{
	motor[DriveLF] = speed;
	motor[DriveLR] = speed;
}

//Right Drive
void DriveR(int speed)
{
	motor[DriveRF] = speed;
	motor[DriveRR] = speed;
}

//Both Left and Right Drive
void Drive(int speed)
{
	DriveL(speed);
	DriveR(speed);
}

//Drive Foward
void DriveF(int speed)
{
	Drive(127);
}

//Drive Back
void DriveB(int speed)
{
	Drive(-127);
}

//Turn Right
void TurnR(int speed)
{
	DriveL(80);
	DriveR(-80);
}

//Turn Left
void TurnL(int speed)
{
	DriveL(-80);
	DriveR(80);
}

//Lift
void Lift(int speed)
{
	motor[Lift12] = speed;
	motor[Lift3] = speed;
	motor[Lift45] = speed;
	motor[Lift6] = speed;
}

//Lift UP
void LiftUP(int speed)
{
	Lift(100);
}

//Lift DOWN
void LiftDOWN(int speed)
{
	Lift(-100);
}

