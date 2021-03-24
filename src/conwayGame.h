#ifndef _CONWAYGAME_
#define _CONWAYGAME_

#include <stdio.h>
#include <math.h>
#include <float.h>


int **initiate(int n);
int **next_step(int **M, int n);
int **change_dead_alive(int **M, int n, int f, int c);


#endif