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
void mapping(int map[size_y][size_x], int* score)
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
		}
		printf("��");
		if (i == 1)
			printf(" Score : %d", (*score) / 2);

		if (i == 5)
			printf(" ���� Ű : j Ű");

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