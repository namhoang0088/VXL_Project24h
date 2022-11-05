/*
 * button3.c
 *
 *  Created on: Nov 4, 2022
 *      Author: ACER
 */

#include "button3.h"
#include "software_timer.h"
#include "display7SEG.h"
#include "global.h"

int keyreg0 = NORMAL_STATE;
int keyreg1 = NORMAL_STATE;
int keyreg2 = NORMAL_STATE;
int keyreg3 = NORMAL_STATE;

int TimeOutForKeyPress3 =  100;

int buffer_button3 = 0;

int button3_flag = 0;
int button3_long_press = 0;
int button3_2click = 0;

void getInput3(){
	  keyreg2 = keyreg1;
	  keyreg1 = keyreg0;
	  keyreg0 = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
	  if ((keyreg1 == keyreg0) && (keyreg1 == keyreg2)){
	    if (keyreg2 != keyreg3){
	      keyreg3 = keyreg2;
	      if (keyreg3 == PRESSED_STATE){
	        TimeOutForKeyPress3 = 100;
	        buffer_button3 = FLAG;
	      }
	    }else{
	       TimeOutForKeyPress3 --;
	        if (TimeOutForKeyPress3 == 0){
	        	if(keyreg3 == PRESSED_STATE ){
	        		buffer_button3 = LONGPRESS;
	        	}
	        	else{
	        		keyreg3 = NORMAL_STATE;
	        	}
	        }
	    }
	  }
}
void getKeyInput3(){
	switch(buffer_button3){
	case INIT:
		getInput3();
		button3_long_press = 0;
		break;
	case FLAG:
		  keyreg2 = keyreg1;
		  keyreg1 = keyreg0;
		  keyreg0 = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
		  if ((keyreg1 == keyreg0) && (keyreg1 == keyreg2)){
		    if (keyreg2 != keyreg3){
		      keyreg3 = keyreg2;
		      if (keyreg3 == PRESSED_STATE){
		        buffer_button3 = TWOCLICK;
		      }
		    }else{
		        //if (timer2_flag == 1){
		      	    button3_flag = 1;
		        	buffer_button3 = INIT;
		        //}
		    }
		  }
		break;
	case TWOCLICK:
		//TODO
		buffer_button3 = INIT;
		break;
	case LONGPRESS:
		 button3_long_press = 1;
		 keyreg2 = keyreg1;
		 keyreg1 = keyreg0;
		 keyreg0 = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
		 if(keyreg0 == keyreg1 && keyreg0 == keyreg2 && keyreg0 == NORMAL_STATE){
			 buffer_button3 = INIT;
		 }
		break;
	default:
		break;

	}
}


