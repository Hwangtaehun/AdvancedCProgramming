#include "Map.h"

//���� ȭ��*************************************************
void openscreen(int map[size_y][size_x], int* score, double* timer)
{
	int key;

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
	printf("             Enterkey�� �Է��ϸ� �����մϴ�.             \n");
	printf("                                                         \n");
	// ���ӷε� �ð��� ���ִ� ���� �ٷ� ���۵Ǿ EnterŰ�� ������ ���� �����ϴ� ������ �ٲپ����ϴ�.
	while (1)
	{
		if (_kbhit())
		{
			key = _getch();
			if (key == 13)
				break;
		}
	}
	//Sleep(5000);
	
	mapbase(map);
	system("cls");
	mapping(map, score, timer);
	
}