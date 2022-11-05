/*
 * button2.c
 *
 *  Created on: Nov 4, 2022
 *      Author: ACER
 */

#include "button2.h"
#include "software_timer.h"
#include "display7SEG.h"
#include "global.h"

int keyReg0 = NORMAL_STATE;
int keyReg1 = NORMAL_STATE;
int keyReg2 = NORMAL_STATE;
int keyReg3 = NORMAL_STATE;

int TimeOutForKeyPress2 =  300;

int buffer_button2 = 0;

int button2_flag = 0;
int button2_long_press = 0;
int button2_2click = 0;

void getInput2(){
	  keyReg2 = keyReg1;
	  keyReg1 = keyReg0;
	  keyReg0 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
	  if ((keyReg1 == keyReg0) && (keyReg1 == keyReg2)){
	    if (keyReg2 != keyReg3){
	      keyReg3 = keyReg2;
	      if (keyReg3 == PRESSED_STATE){
	        TimeOutForKeyPress2 = 300;
	        buffer_button2 = FLAG;
	      }
	    }else{
	       TimeOutForKeyPress2 --;
	        if (TimeOutForKeyPress2 == 0){
	        	if(keyReg3 == PRESSED_STATE ){
	        		buffer_button2 = LONGPRESS;
	        	}
	        	else{
	        		keyReg3 = NORMAL_STATE;
	        	}
	        }
	    }
	  }
}
void getKeyInput2(){
	switch(buffer_button2){
	case INIT:
		getInput2();
		button2_long_press = 0;
		break;
	case FLAG:
		 /* keyReg2 = keyReg1;
		  keyReg1 = keyReg0;
		  keyReg0 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
		  if ((keyReg1 == keyReg0) && (keyReg1 == keyReg2)){
		    if (keyReg2 != keyReg3){
		      keyReg3 = keyReg2;
		      if (keyReg3 == PRESSED_STATE && timer2_flag == 0){
		        buffer_button2 = TWOCLICK;
		      }
		    }else{*/
		        //if (timer2_flag == 1){
		      	    button2_flag = 1;
		        	buffer_button2 = INIT;
		        //}
		    //}
		 // }
		break;
	case TWOCLICK:
		//TODO
		buffer_button2 = INIT;
		break;
	case LONGPRESS:
		 button2_long_press = 1;
		 keyReg2 = keyReg1;
		 keyReg1 = keyReg0;
		 keyReg0 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
		 if(keyReg0 == keyReg1 && keyReg0 == keyReg2 && keyReg0 == NORMAL_STATE){
			 buffer_button2 = INIT;
		 }
		break;
	default:
		break;

	}
}


