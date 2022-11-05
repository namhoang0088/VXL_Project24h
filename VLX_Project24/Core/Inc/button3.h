/*
 * button3.h
 *
 *  Created on: Nov 4, 2022
 *      Author: ACER
 */

#ifndef INC_BUTTON3_H_
#define INC_BUTTON3_H_

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

#define INIT 0
#define FLAG 1
#define TWOCLICK 2
#define LONGPRESS 3

extern int buffer_button3;

extern int button3_flag;
extern int button3_long_press;
extern int button3_1click;
extern int button3_2click;

void getKeyInput3();

#endif /* INC_BUTTON3_H_ */
