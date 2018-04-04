#pragma config(Motor,  port2,           rightMotor,    tmotorVex269, openLoop)
#pragma config(Motor,  port6,           armMotor,      tmotorVex269, openLoop)
#pragma config(Motor,  port7,           clawMotor,     tmotorVex269, openLoop)
#pragma config(Motor,  port10,          leftMotor,     tmotorVex269, openLoop)

// This is a basic program for the clawbots

// START of main program

task main()
{
	while(1 == 1)
	{

	    //Motor Control for the two drive motors
	    motor[leftMotor] = vexRT[Ch3];
	    motor[rightMotor] = vexRT[Ch2];


	    //Motor Control for the Arm
	    if(vexRT[Btn6U] == 1)
	      {
	       motor[armMotor] = 127;
	      }
	    else if(vexRT[Btn6D] == 1)
	      {
   	       motor[armMotor] = -127;
  	      }
    	    else
   	      {
   	       motor[armMotor] = 0;
    	      }


	    //Motor Control for the Claw
	    if(vexRT[Btn5U] == 1)
   	      {
     	       motor[clawMotor] = 127;
    	      }
    	    else if(vexRT[Btn5D] == 1)
    	      {
      	       motor[clawMotor] = -127;
    	      }
    	    else
    	      {
	       motor[clawMotor] = 0;
              }
	}

}

// END of main program
