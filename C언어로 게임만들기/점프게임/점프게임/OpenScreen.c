#include "Map.h"

//���� ȭ��*************************************************
void openscreen(int map[size_y][size_x], int* score)
{
	printf("                                                         \n");
	printf("          ����  ��    �� ��      ��  ����            \n");
	printf("              ��  ��    �� ���  ��� ��    ��           \n");
	printf("              ��  ��    �� ��  ��  �� ��    ��           \n");
	printf("             ��   ��    �� ��  ��  �� ����             \n");
	printf("           ��       ���   ��  ��  �� ��                 \n");
	printf("                                      ��                 \n");
	printf("                 ����       ��      ��      �� �����\n");
	printf("               ��            ���     ���  ��� ��      \n");
	printf("               ��  ����   ��  ��    ��  ��  �� �����\n");
	printf("               ��      ��  �����   ��  ��  �� ��      \n");
	printf("                 ����   ��      ��  ��  ��  �� �����\n");
	printf("                                                         \n");
	printf("                   ���� �ε����Դϴ�.                    \n");
	printf("                                                         \n");
	Sleep(5000);
	mapbase(map);
	system("cls");
	mapping(map, score);
}