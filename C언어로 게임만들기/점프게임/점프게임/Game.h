#pragma once
#include "Map.h"

#define spd 100 //�ӵ� �ʱⰪ 
#define oti 501 //��ֹ� ��ε� �ʱⰪ 

void jump(int map[size_y][size_x], int* score, int a);
void obstaclemaker(int map[size_y][size_x]);
void obstaclemove(int map[size_y][size_x], int* speed, int* score, int* otime);
int gameover(int map[size_y][size_x], int* score);
void Score(int* speed, int* score, int* otime);