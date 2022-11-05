/*
 * fsm.h
 *
 *  Created on: Nov 5, 2022
 *      Author: ACER
 */

#ifndef INC_FSM_H_
#define INC_FSM_H_

#define AUTO 0
#define INC 1
#define DEC 2
#define INCPLUS 3
#define DECSUB 4
#define RESETNUM 5
#define RELAX 6
extern int status;

void fsm_simple_buttons_run ();

#endif /* INC_FSM_H_ */
