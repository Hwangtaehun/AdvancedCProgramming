//**********************************************************
//#include <stdio.h>
//#include <time.h>
//#include <conio.h>
//#include <windows.h>
//#include <stdlib.h>

//#define size_x 30
//#define size_y 10
//#define c_y size_y-2 //�� ��ġ 
//#define c_x 2
//#define spd 100 //�ӵ� �ʱⰪ 
//#define oti 501 //��ֹ� ��ε� �ʱⰪ 

#include "OpenScreen.h"
#include "Game.h"
#include "EndScreen.h"

////**********************************************************
//void openscreen(int map[size_y][size_x], int* score);
//void mapbase(int map[size_y][size_x]);
//void mapping(int map[size_y][size_x], int* score);
//void jump(int map[size_y][size_x], int* score, int a);
//void obstaclemaker(int map[size_y][size_x]);
//void obstaclemove(int map[size_y][size_x], int* speed, int* score, int* otime);
//int gameover(int map[size_y][size_x], int* score);
//void Score(int* speed, int* score, int* otime);
//int endscreen(int map[size_y][size_x], int* speed, int* score, int* otime);
//int eventscreen();

//����******************************************************
int main()
{
	int run = 1;
	int map[size_y][size_x];
	int speed = spd;
	int score = 0;
	int otime = oti;
	double timer = 0;

	srand((unsigned)time(NULL));

	openscreen(map, &score, &timer);


	while (run)
	{
		/*clock_t start = clock();
		for (;;) {
			clock_t end = clock();
			double time = (end - start) / CLOCKS_PER_SEC; //�ʴ��� ��ȯ
		}*/
		obstaclemove(map, &speed, &score, &otime, &timer);
		run = endscreen(map, &speed, &score, &otime, &timer);

		score = 0;
	}

	

	return 0;
}

////���� ȭ��*************************************************
//void openscreen(int map[size_y][size_x], int* score)
//{
//	printf("                                                         \n");
//	printf("          ����  ��    �� ��      ��  ����            \n");
//	printf("              ��  ��    �� ���  ��� ��    ��           \n");
//	printf("              ��  ��    �� ��  ��  �� ��    ��           \n");
//	printf("             ��   ��    �� ��  ��  �� ����             \n");
//	printf("           ��       ���   ��  ��  �� ��                 \n");
//	printf("                                      ��                 \n");
//	printf("                 ����       ��      ��      �� �����\n");
//	printf("               ��            ���     ���  ��� ��      \n");
//	printf("               ��  ����   ��  ��    ��  ��  �� �����\n");
//	printf("               ��      ��  �����   ��  ��  �� ��      \n");
//	printf("                 ����   ��      ��  ��  ��  �� �����\n");
//	printf("                                                         \n");
//	printf("                   ���� �ε����Դϴ�.                    \n");
//	printf("                                                         \n");
//	Sleep(5000);
//	mapbase(map);
//	system("cls");
//	mapping(map, score);
//}
////�ʺ��̽�**************************************************
//void mapbase(int map[size_y][size_x])
//{
//	for (int i = 0; i < size_y; i++)
//	{
//		for (int j = 0; j < size_x; j++)
//		{
//			if (i == (size_y - 1))
//				map[i][j] = 1;
//
//			else
//				map[i][j] = 0;
//		}
//	}
//
//	map[c_y][c_x] = 2;
//}
////����******************************************************
//void mapping(int map[size_y][size_x], int* score)
//{
//	printf("����������������������������\n");
//	for (int i = 0; i < size_y; i++)
//	{
//		printf("��");
//		for (int j = 0; j < size_x - 5; j++)
//		{
//			if (map[i][j] == 0)
//				printf("  ");
//
//			if (map[i][j] == 1)
//				printf("��");
//
//			if (map[i][j] == 2)
//				printf("��");
//
//			if (map[i][j] == 3)
//				printf("��");
//		}
//		printf("��");
//		if (i == 1)
//			printf(" Score : %d", (*score) / 2);
//
//		if (i == 5)
//			printf(" ���� Ű : j Ű");
//
//		printf("\n");
//	}
//	if (*score >= 1000)
//	{
//		printf("������������������\n");
//		printf("��  ����              ����  ��\n");
//		printf("�� ��    ��            ��    �� ��\n");
//		printf("���      ��          ��      ���\n");
//		printf("��         ��        ��         ��\n");
//		printf("��      ����      ����      ��\n");
//	}
//	if (*score >= 2000)
//	{
//		printf("��     ��    ��    ��    ��     ��\n");
//		printf("��     ��     ����     ��     ��\n");
//		printf("��      ��    ��  ��    ��      ��\n");
//		printf("��        ���      ���        ��\n");
//		printf("��                              ��\n");
//		printf("��  ����              ����  ��\n");
//	}
//	if (*score >= 3000)
//	{
//		printf("�� ��    ���������    �� ��\n");
//		printf("�� ��                        �� ��\n");
//		printf("�� ��                        �� ��\n");
//		printf("�� ��    ���������    �� ��\n");
//		printf("��  ����              ����  ��\n");
//		printf("������������������\n");
//	}
//	/*����� ��
//	printf("\n\n\n");
//	for(int i=0;i<size_y;i++)
//	{
//		for(int j=0;j<size_x;j++)
//		{
//			if(map[i][j]==0)
//			printf("%d",map[i][j]);
//
//			if(map[i][j]==1)
//			printf("%d",map[i][j]);
//
//			if(map[i][j]==2)
//			printf("%d",map[i][j]);
//
//			if(map[i][j]==3)
//			printf("%d",map[i][j]);
//		}
//		printf("\n");
//	}*/
//}
////����*******************************************************
//void jump(int map[size_y][size_x], int* score, int cot)
//{
//	int cx, cy;
//
//	for (int i = 0; i < size_y; i++)
//	{
//		for (int j = 0; j < size_x; j++)
//		{
//			if (map[i][j] == 2)
//			{
//				cx = j;
//				cy = i;
//			}
//		}
//	}
//
//	if (cot < 4)
//	{
//		if (map[cy - 1][cx] == 3)
//			map[cy][cx] = 0;
//		else
//		{
//			map[cy - 1][cx] = 2; map[cy][cx] = 0;
//			mapping(map, score);
//		}
//	}
//	if (cot >= 4)
//	{
//		if (map[cy + 1][cx] == 3)
//			map[cy][cx] = 0;
//		else
//		{
//			map[cy][cx] = 0; map[cy + 1][cx] = 2;
//			mapping(map, score);
//		}
//	}
//}
////��ֹ�**********************************************************
//void obstaclemaker(int map[size_y][size_x])
//{
//	int b;
//	int obs[5][size_y - 1];
//
//	b = rand() % 4;
//
//	if (b == 0)
//	{
//		obs[b][size_y - 10] = 0;
//		obs[b][size_y - 9] = 0;
//		obs[b][size_y - 8] = 0;
//		obs[b][size_y - 7] = 0;
//		obs[b][size_y - 6] = 0;
//		obs[b][size_y - 5] = 0;
//		obs[b][size_y - 4] = 0;
//		obs[b][size_y - 3] = 0;
//		obs[b][size_y - 2] = 3;
//		for (int i = 0; i < size_y - 1; i++)
//		{
//			map[i][size_x - 1] = obs[b][i];
//		}
//	}
//	if (b == 1)
//	{
//		obs[b][size_y - 10] = 0;
//		obs[b][size_y - 9] = 0;
//		obs[b][size_y - 8] = 0;
//		obs[b][size_y - 7] = 0;
//		obs[b][size_y - 6] = 0;
//		obs[b][size_y - 5] = 0;
//		obs[b][size_y - 4] = 0;
//		obs[b][size_y - 3] = 3;
//		obs[b][size_y - 2] = 3;
//		for (int i = 0; i < size_y - 1; i++)
//		{
//			map[i][size_x - 1] = obs[b][i];
//		}
//	}
//	if (b == 2)
//	{
//		obs[b][size_y - 10] = 0;
//		obs[b][size_y - 9] = 0;
//		obs[b][size_y - 8] = 0;
//		obs[b][size_y - 7] = 0;
//		obs[b][size_y - 6] = 0;
//		obs[b][size_y - 5] = 0;
//		obs[b][size_y - 4] = 0;
//		obs[b][size_y - 3] = 3;
//		obs[b][size_y - 2] = 0;
//		for (int i = 0; i < size_y - 1; i++)
//		{
//			map[i][size_x - 1] = obs[b][i];
//		}
//	}
//	if (b == 3)
//	{
//		obs[b][size_y - 10] = 3;
//		obs[b][size_y - 9] = 3;
//		obs[b][size_y - 8] = 3;
//		obs[b][size_y - 7] = 3;
//		obs[b][size_y - 6] = 3;
//		obs[b][size_y - 5] = 3;
//		obs[b][size_y - 4] = 3;
//		obs[b][size_y - 3] = 0;
//		obs[b][size_y - 2] = 0;
//		for (int i = 0; i < size_y - 1; i++)
//		{
//			map[i][size_x - 1] = obs[b][i];
//		}
//	}
//}
////��ֹ� ����*****************************************************
//void obstaclemove(int map[size_y][size_x], int* speed, int* score, int* otime)
//{
//	int obstime/*��ֹ� ��ε� �ð�*/, run2 = 1, k, cot = 1, time = 0, ctime = 0;
//	//������ �� �� �� �Ų����� �ϱ����� ���� ������ ������ ��� 0���� �ʱ�ȭ������  
//	obstime = rand() % *otime + *otime - 100; //ù ��ֹ� ���� 
//
//	while (run2)
//	{
//		//����Ű�� ������ ��
//		if (_kbhit())
//		{
//			k = _getch();
//			//p�� ���� ������ Ű(������ ���� �̺�Ʈ �߻� ���� Ȯ���� ���� ����), �̰� �ص� �ӵ��� ���� ���� 
//			if (k == 'p')
//				(*score) += 1000;
//
//			if (k == 'j')
//			{
//				while (cot <= 6)
//				{
//					//�� 
//					if (cot == 1)
//					{
//						system("cls");
//						jump(map, score, cot);
//						++cot;
//						Sleep(30);
//					}
//					if ((time % 25) == 0 && cot > 1)
//					{
//						system("cls");
//						jump(map, score, cot);
//						if (cot == 6)
//							time = 0;
//						++cot;
//					}
//
//					//��ֹ� 
//					if ((time % 22) == 0)
//					{
//						++(*score); //����
//						Score(speed, score, otime);
//						for (int i = 0; i < size_y - 1; i++)
//						{
//							for (int j = 0; j < size_x; j++)
//							{
//								if (j != 0 && map[i][j] != 2 && (map[i][j - 1] != 2 || map[i][j] == 3))
//								{
//									map[i][j - 1] = map[i][j];
//									map[i][j] = 0;
//								}
//							}
//						}
//						system("cls");
//						mapping(map, score);
//						Sleep(*speed);
//					}
//
//					//���� ������ ��
//					run2 = gameover(map, score);
//					if (run2 == 0)
//						break;
//
//					//��ֹ� ���� 
//					if ((ctime % obstime) == 0)
//					{
//						obstaclemaker(map);
//						system("cls");
//						mapping(map[size_y][size_x], score);
//						ctime = 0;
//						obstime = rand() % *otime + *otime - 100;
//					}
//					time++;
//					ctime++;
//				}
//				cot = 1;
//			}
//		}
//
//
//		//���� Ű�� �ȴ����� ��
//
//		//��ֹ� 
//		if ((time % 22) == 0)
//		{
//			++(*score); //����
//			Score(speed, score, otime);
//			for (int i = 0; i < size_y - 1; i++)
//			{
//				for (int j = 0; j < size_x; j++)
//				{
//					if (j != 0 && map[i][j] != 2 && (map[i][j - 1] != 2 || map[i][j] == 3))
//					{
//						map[i][j - 1] = map[i][j];
//						map[i][j] = 0;
//					}
//				}
//			}
//			system("cls");
//			mapping(map, score);
//			Sleep(*speed);
//		}
//
//		//���� ������ �� 
//		run2 = gameover(map, score);
//
//		//��ֹ� ���� 
//		if ((ctime % obstime) == 0)
//		{
//			obstaclemaker(map);
//			system("cls");
//			mapping(map, score);
//			ctime = 0;
//			obstime = rand() % *otime + *otime - 100;
//		}
//		time++;
//		ctime++;
//	}
//	*speed = spd;
//	*otime = oti;
//}
////��ֹ��� �¾��� ��**************************************************
//int gameover(int map[size_y][size_x], int* score)
//{
//	for (int i = 0; i < size_y; i++)
//	{
//		for (int j = 0; j < size_x; j++)
//		{
//			if (map[i][j] == 2)
//				return 1;
//
//			if (i == size_y - 1 && j == size_x - 1 && map[i][j] != 2)
//			{
//				system("cls");
//				mapping(map, score);
//				return 0;
//			}
//		}
//	}
//}
////�� �� �̻� �ö󰡸� ���ǵ� ����**************************************  
//void Score(int* speed, int* score, int* otime)
//{
//	if ((*score % 100) == 0 && *speed > 20)
//	{
//		*speed -= 5;
//		*otime -= 20;
//	}
//	if ((*score % 100) == 0 && *speed <= 10)
//		(*speed)--;
//}
////������ ȭ��**********************************************************
//int endscreen(int map[size_y][size_x], int* speed, int* score, int* otime)
//{
//	int answer;
//
//	system("cls");
//	printf("\n\t\tGame over~~\n\n\t       You score : %d\n\n", *score / 2);
//	printf("\n\t\t re game?\n\n");
//	printf("\n\t\t 1.go\n\n");
//	printf("\n\t\t 2.exit\n");
//	scanf("%d", &answer);
//	if (answer == 1)
//	{
//		system("cls");
//		mapbase(map);
//		mapping(map, score);
//		return 1;
//	}
//	else if (answer == 8282)
//	{
//		*speed = 10;
//		*otime = 181;
//		system("cls");
//		mapbase(map);
//		mapping(map, score);
//		return 1;
//	}
//	else
//	{
//		system("cls");
//		return 0;
//	}
//}
////�̺�Ʈ ȭ��*************************************************************
//int eventscreen()
//{
//
//
//	return 0;
//}