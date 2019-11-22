/*
 * Push_BOX.h
 *
 *  Created on: 2019. 6. 15.
 *      Author: juwan
 */

#ifndef PUSH_BOX_H_
#define PUSH_BOX_H_

#define N 10
#include <stdlib.h>
struct Object {
	int xPosition;
	int yPosition;
	unsigned char zn;
	unsigned long ozn; //unsigned long이다.
};
struct Object obj[N] = { };
int wbox = 0;
int clearStage = 0;
int glocation = 10;
int lev = 0;
int step = 0;
int countPush = 0;


#endif /* PUSH_BOX_H_ */
