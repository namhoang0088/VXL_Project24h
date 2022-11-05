/*
 * display7SEG.c
 *
 *  Created on: Nov 4, 2022
 *      Author: ACER
 */

#include "display7SEG.h"
#include "main.h"
void display7SEG(int counter){
	if(counter == 0){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
	}
	if(counter == 1){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
	}
	if(counter == 2){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, SET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	}
	if(counter == 3){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	}
	if(counter == 4){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	}
	if(counter == 5){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	}
	if(counter == 6){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	}
	if(counter == 7){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
	}
	if(counter == 8){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	}
	if(counter == 9){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	}
}

