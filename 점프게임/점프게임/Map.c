#include "Map.h"

//�ʺ��̽�**************************************************
void mapbase(int map[size_y][size_x])
{
	for (int i = 0; i < size_y; i++)
	{
		for (int j = 0; j < size_x; j++)
		{
			if (i == (size_y - 1))
				map[i][j] = 1;

			else
				map[i][j] = 0;
		}
	}

	map[c_y][c_x] = 2;
}

//����******************************************************
void mapping(int map[size_y][size_x], int* score, double* timer)
{
	

	printf("����������������������������\n");
	for (int i = 0; i < size_y; i++)
	{
		printf("��");
		for (int j = 0; j < size_x - 5; j++)
		{
			if (map[i][j] == 0)
				printf("  ");

			if (map[i][j] == 1)
				printf("��");

			if (map[i][j] == 2)
				printf("��");

			if (map[i][j] == 3)
				printf("��");
			
			if (map[i][j] == 4) //������ 4��, $���
				printf("$");

		}
		
		printf("��");
		if (i == 1)
			printf(" Score : %d", (*score) / 2);

		if (i == 3)
			printf(" Time : %0.3lf", *timer);


		if (i == 5)
			printf(" ���� Ű : Space bar ");

		printf("\n");
	}

	if (*score >= 1000)
	{
		printf("������������������\n");
		printf("��  ����              ����  ��\n");
		printf("�� ��    ��            ��    �� ��\n");
		printf("���      ��          ��      ���\n");
		printf("��         ��        ��         ��\n");
		printf("��      ����      ����      ��\n");
	}
	if (*score >= 2000)
	{
		printf("��     ��    ��    ��    ��     ��\n");
		printf("��     ��     ����     ��     ��\n");
		printf("��      ��    ��  ��    ��      ��\n");
		printf("��        ���      ���        ��\n");
		printf("��                              ��\n");
		printf("��  ����              ����  ��\n");
	}
	if (*score >= 3000)
	{
		printf("�� ��    ���������    �� ��\n");
		printf("�� ��                        �� ��\n");
		printf("�� ��                        �� ��\n");
		printf("�� ��    ���������    �� ��\n");
		printf("��  ����              ����  ��\n");
		printf("������������������\n");
	}
	/*����� ��
	printf("\n\n\n");
	for(int i=0;i<size_y;i++)
	{
		for(int j=0;j<size_x;j++)
		{
			if(map[i][j]==0)
			printf("%d",map[i][j]);

			if(map[i][j]==1)
			printf("%d",map[i][j]);

			if(map[i][j]==2)
			printf("%d",map[i][j]);

			if(map[i][j]==3)
			printf("%d",map[i][j]);
		}
		printf("\n");
	}*/
}

int rankscreen(int map[size_y][size_x], int* score, double* timer)
{
	int key;
	RANK rank[ARR_SIZE];
	FILE* inf;
	// "test.txt"������ �б� ���� ���� ����� ���н� "���� ���� ����"��� �� ���
	if ((fopen_s(&inf, "Rank.txt", "rb")) != 0) 
	{
		printf("���� ���� ����\n");
		exit(0);
	}
	//rank����ü �迭�� �о�� ���� ������ �� ����
	for (int i = 0; i < ARR_SIZE; i++) 
	{
		fscanf(inf, "%s %d %d\n", rank[i].name, &rank[i].score, &rank[i].time);
	}

	fclose(inf);

	system("cls");
	printf("\n\t\tRanking\n\n");
	printf("\t��� �̸�        ����  �ð�\n");

	for (int i = 0; i < ARR_SIZE; i++)
	{
		printf("\n\t%2d�� %-10s %5d %5d\n", i + 1, rank[i].name, rank[i].score, rank[i].time);
	}

	printf("\n");
	printf("\n    Space bar�� ������ ���� �ٽ� ����\n");
	printf("    Enter�� ������ ������ ����˴ϴ�.\n");
	//Ŀ�� ���� Ű�Է��� ǥ���ϱ����ؼ� _getch()���
	while (1)
	{
		if (_kbhit())
		{
			key = _getch();
			//enterŰ �Է½� ���� ����
			if (key == 32) 
				break;
			// spacebarŰ �Է½� ���� ����
			else if (key == 13) 
			{
				system("cls");
				return 0;
			}
				
		}
	}
	system("cls");
	mapbase(map);
	mapping(map, score, timer);
	return 1;
}

void print(RANK arr[])/*����*/
{
	for (int i = 0; i < ARR_SIZE; i++)
	{
		printf("%s, %d, %d\n", arr->name, arr->score, arr->time);
		arr++;
	}
}