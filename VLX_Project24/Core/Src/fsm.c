/*
 * fsm.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ACER
 */


#include "fsm.h"
#include "global.h"
#include "main.h"
#include "display7SEG.h"
#include "button1.h"
#include "button2.h"
#include "button3.h"
#include "software_timer.h"

int status = RELAX;
void getstatus(){
	if(button1_flag == 1){
		status = INC;
	}
	if(button2_flag == 1){
		status = DEC;
	}
	if(button1_long_press == 1){
		status = INCPLUS;
	}
	if(button2_long_press == 1){
		status = DECSUB;
	}
	if(button3_flag == 1){
		status = RESETNUM;
	}
}
void fsm_simple_buttons_run (){
	switch(status){
	case RELAX:
		getstatus();
		if(timer5_flag == 1){
			status = AUTO;
		}
		timer_run5();
		break;
	case AUTO:
		 if(timer3_flag == 1 && counter >= 0){
			 setTimer3(100);
			 counter -= 1;
		 }
		  getstatus();
		break;
	case INC:
		button1_flag = 0;
  	    counter += 1;
  	  if(counter > 9){
  		  counter = 0;
  	  }
  	  if(counter < 0){
  		  counter = 9;
  	  }
  	    setTimer5(timeout);
  		status = RELAX;
		break;
	case DEC:
		button2_flag = 0;
  	    counter -= 1;
  	  if(counter > 9){
  		  counter = 0;
  	  }
  	  if(counter < 0){
  		  counter = 9;
  	  }
	    setTimer5(timeout);
		status = RELAX;
		break;
	case INCPLUS:
		  if(timer1_flag == 1){
			  setTimer1(100);
			  counter += 1;
			  if(counter > 9){
				  counter = 0;
			  }
			  if(counter < 0){
				  counter = 9;
			  }
		  }
		  if(button1_long_press == 0){
		  	    setTimer5(timeout);
		  		status = RELAX;
		  }
		break;
	case DECSUB:
		  if(timer2_flag == 1){
			  setTimer2(100);
			  counter -= 1;
			  if(counter > 9){
				  counter = 0;
			  }
			  if(counter < 0){
				  counter = 9;
			  }
		  }
		  if(button2_long_press == 0){
		  	    setTimer5(timeout);
		  		status = RELAX;
		  }
		break;
	case RESETNUM:
		button3_flag = 0;
		counter = 0;
  	    setTimer5(timeout);
  		status = RELAX;
		break;
	default:
		break;

	}
}
