/*
 * button1.c
 *
 *  Created on: Nov 4, 2022
 *      Author: ACER
 */

#include "button1.h"
#include "software_timer.h"
#include "display7SEG.h"
#include "global.h"

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int TimeOutForKeyPress =  300;

int buffer_button1 = 0;

int button1_flag = 0;
int button1_long_press = 0;
int button1_2click = 0;

void getInput(){
	  KeyReg2 = KeyReg1;
	  KeyReg1 = KeyReg0;
	  KeyReg0 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
	    if (KeyReg2 != KeyReg3){
	      KeyReg3 = KeyReg2;
	      if (KeyReg3 == PRESSED_STATE){
	        TimeOutForKeyPress = 300;
	        buffer_button1 = FLAG;
	      }
	    }else{
	       TimeOutForKeyPress --;
	        if (TimeOutForKeyPress == 0){
	        	if(KeyReg3 == PRESSED_STATE ){
	        		buffer_button1 = LONGPRESS;
	        	}
	        	else{
	        		KeyReg3 = NORMAL_STATE;
	        	}
	        }
	    }
	  }
}
void getKeyInput(){
	switch(buffer_button1){
	case INIT:
		getInput();
		button1_long_press = 0;
		break;
	case FLAG:
		 /* KeyReg2 = KeyReg1;
		  KeyReg1 = KeyReg0;
		  KeyReg0 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
		  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
		    if (KeyReg2 != KeyReg3){
		      KeyReg3 = KeyReg2;
		      if (KeyReg3 == PRESSED_STATE && timer1_flag == 0){
		        buffer_button1 = TWOCLICK;
		      }
		    }else{*/
		        //if (timer1_flag == 1){
		      	    button1_flag = 1;
		        	buffer_button1 = INIT;
		        //}
		   // }
		 // }
		break;
	case TWOCLICK:
		//TODO
		buffer_button1 = INIT;
		break;
	case LONGPRESS:
		 button1_long_press = 1;
		 KeyReg2 = KeyReg1;
		 KeyReg1 = KeyReg0;
		 KeyReg0 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
		 if(KeyReg0 == KeyReg1 && KeyReg0 == KeyReg2 && KeyReg0 == NORMAL_STATE){
			 buffer_button1 = INIT;
		 }
		break;
	default:
		break;

	}
}
