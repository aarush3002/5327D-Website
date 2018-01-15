#pragma config(Motor,  port1,           frontLeft,     tmotorVex393TurboSpeed_HBridge, openLoop, driveLeft)
#pragma config(Motor,  port2,           backLeft,      tmotorVex393TurboSpeed_MC29, openLoop, driveLeft)
#pragma config(Motor,  port3,           backRight,     tmotorVex393TurboSpeed_MC29, openLoop, driveRight)
#pragma config(Motor,  port4,           mogo,          tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port5,           chainbarLL,    tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           chainbarLR,    tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port7,           chainbarRL,    tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           chainbarRR,    tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port9,           claw,          tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port10,          frontRight,    tmotorVex393TurboSpeed_HBridge, openLoop, reversed, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/* 1/3/2018. Today we decided to change back from a 4 motor base to a 6 motor turbo base,
so that our base is faster. This is a test for the base motors, mobile goal intake motors,

/* List of autons:
- One cone in 20pt/10pt/5pt zone
- Two cones in 20pt/10pt/5pt zone
~ One cone on stat goal
~ One cone in 20pt/10pt/5pt goal and 1 cone on stat goal
- D E F E N S E  A U T O N {R A M  T H E  P E O P L E}
and the newly designed chainbar motors.*/
task main()
{
	while (true)
	{
		motor[backLeft] = motor[frontLeft] = vexRT[Ch3]; //MOGO IN FRONT
		motor[backRight] = motor[frontRight] = vexRT[Ch2];
		if (vexRT[Btn5U] == 1)
		{
			motor[chainbarLL] = motor[chainbarLR] = motor[chainbarRL] = motor[chainbarRR] = 127;
		}
		else if (vexRT[Btn5D] == 1)
		{
			motor[chainbarLL] = motor[chainbarLR] = motor[chainbarRL] = motor[chainbarRR] = -127;
		}
		else
		{
			motor[chainbarLL] = motor[chainbarLR] = motor[chainbarRL] = motor[chainbarRR] = 0;
		}
		if (vexRT[Btn8U] == 1)
		{
			motor[mogo] = 127;
		}
		else if (vexRT[Btn8R] == 1)
		{
			motor[mogo] = -127;
		}
		else
		{
			motor[mogo] = 0;
		}
		if (vexRT[Btn6U] == 1)
		{
			motor[claw] = 127;
		}
		else if (vexRT[Btn6D] == 1)
		{
			motor[claw] = -127;
		}
		else
		{
			motor[claw] = 0;
		}
	}
}
