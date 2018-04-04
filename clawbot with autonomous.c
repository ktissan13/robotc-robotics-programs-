#pragma config(Motor,  port2,           rightmotor,    tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port9,           leftmotor,     tmotorVex393HighSpeed_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
  while(1 == 1)
  {
    //Driving Motor Control
    motor[leftMotor] = vexRT[Ch3];
    motor[rightMotor] = vexRT[Ch2];

    //Automous mode number 1
    if(vexRT[Btn8L] == 1)
    {
    	//Go staright for 2 secs
    	motor[rightmotor] = 127;
    	motor[leftmotor] = 127;
    	wait10Msec(200);

    	//Turn right 90 degrees
    	motor[rightmotor] = -50;
    	motor[leftmotor] = 50;
    	wait10Msec(100);

    	//Go straight for 1 sec
    	motor[rightmotor] = 127;
    	motor[leftmotor] = 127;
    	wait10Msec(100);

    	//Go back for 1 sec
    	motor[rightmotor] = -127;
    	motor[leftmotor] = -127;
    	wait10Msec(100);

    	//turn backwards 90 degrees
    	motor[rightmotor] = 50;
    	motor[leftmotor] = -50;
    	wait10Msec(100);

    	//go backwards for 2 secs
    	motor[rightmotor] = -127;
    	motor[leftmotor] = -127;
    	wait10Msec(200); }

    	//Automous Number 2
    	if(vexRT[Btn8R] == 1)
    	{
    		//Go straight for 5 secs
        motor[rightmotor] = 127;
        motor[leftmotor] = 127;
        wait10Msec(500);

        //Come back
        motor[rightmotor] = -127;
        motor[leftmotor] = -127;
        wait10Msec(500); }




  }
}