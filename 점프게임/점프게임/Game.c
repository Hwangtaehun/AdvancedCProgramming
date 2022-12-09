#include "Game.h"

//����*******************************************************
void jump(int map[size_y][size_x], int* score, int cot, double* timer)
{
	int cx, cy;

	for (int i = 0; i < size_y; i++)
	{
		for (int j = 0; j < size_x; j++)
		{
			if (map[i][j] == 2)
			{
				cx = j;
				cy = i;
			}
		}
	}

	if (cot < 4)
	{
		if (map[cy - 1][cx] == 3)
			map[cy][cx] = 0;
		else
		{
			map[cy - 1][cx] = 2; map[cy][cx] = 0;
			mapping(map, score, timer);
		}
	}
	if (cot >= 4)
	{
		if (map[cy + 1][cx] == 3)
			map[cy][cx] = 0;
		else
		{
			map[cy][cx] = 0; map[cy + 1][cx] = 2;
			mapping(map, score, timer);
		}
	}
}

//������**********************************************************
void itemmaker(int map[size_y][size_x])
{
	int b;
	int itm[5][size_y - 1];

	b = rand() % 2;

	if (b == 0)
	{
		itm[b][size_y - 10] = 0;
		itm[b][size_y - 9] = 0;
		itm[b][size_y - 8] = 0;
		itm[b][size_y - 7] = 0;
		itm[b][size_y - 6] = 0;
		itm[b][size_y - 5] = 0;
		itm[b][size_y - 4] = 0;
		itm[b][size_y - 3] = 0;
		itm[b][size_y - 2] = 4;
		for (int i = 0; i < size_y - 1; i++)
		{
			map[i][size_x - 1] = itm[b][i];
		}
	}
	if (b == 1)
	{
		itm[b][size_y - 10] = 0;
		itm[b][size_y - 9] = 0;
		itm[b][size_y - 8] = 0;
		itm[b][size_y - 7] = 0;
		itm[b][size_y - 6] = 0;
		itm[b][size_y - 5] = 0;
		itm[b][size_y - 4] = 0;
		itm[b][size_y - 3] = 4;
		itm[b][size_y - 2] = 0;
		for (int i = 0; i < size_y - 1; i++)
		{
			map[i][size_x - 1] = itm[b][i];
		}
	}
}

//��ֹ�**********************************************************
void obstaclemaker(int map[size_y][size_x])
{
	int b;
	int obs[5][size_y - 1];

	b = rand() % 4;

	if (b == 0)
	{
		obs[b][size_y - 10] = 0;
		obs[b][size_y - 9] = 0;
		obs[b][size_y - 8] = 0;
		obs[b][size_y - 7] = 0;
		obs[b][size_y - 6] = 0;
		obs[b][size_y - 5] = 0;
		obs[b][size_y - 4] = 0;
		obs[b][size_y - 3] = 0;
		obs[b][size_y - 2] = 3;
		for (int i = 0; i < size_y - 1; i++)
		{
			map[i][size_x - 1] = obs[b][i];
		}
	}
	if (b == 1)
	{
		obs[b][size_y - 10] = 0;
		obs[b][size_y - 9] = 0;
		obs[b][size_y - 8] = 0;
		obs[b][size_y - 7] = 0;
		obs[b][size_y - 6] = 0;
		obs[b][size_y - 5] = 0;
		obs[b][size_y - 4] = 0;
		obs[b][size_y - 3] = 3;
		obs[b][size_y - 2] = 3;
		for (int i = 0; i < size_y - 1; i++)
		{
			map[i][size_x - 1] = obs[b][i];
		}
	}
	if (b == 2)
	{
		obs[b][size_y - 10] = 0;
		obs[b][size_y - 9] = 0;
		obs[b][size_y - 8] = 0;
		obs[b][size_y - 7] = 0;
		obs[b][size_y - 6] = 0;
		obs[b][size_y - 5] = 0;
		obs[b][size_y - 4] = 0;
		obs[b][size_y - 3] = 3;
		obs[b][size_y - 2] = 0;
		for (int i = 0; i < size_y - 1; i++)
		{
			map[i][size_x - 1] = obs[b][i];
		}
	}
	if (b == 3)
	{
		obs[b][size_y - 10] = 3;
		obs[b][size_y - 9] = 3;
		obs[b][size_y - 8] = 3;
		obs[b][size_y - 7] = 3;
		obs[b][size_y - 6] = 3;
		obs[b][size_y - 5] = 3;
		obs[b][size_y - 4] = 3;
		obs[b][size_y - 3] = 0;
		obs[b][size_y - 2] = 0;
		for (int i = 0; i < size_y - 1; i++)
		{
			map[i][size_x - 1] = obs[b][i];
		}
	}
}

//��ֹ� ����*****************************************************
void obstaclemove(int map[size_y][size_x], int* speed, int* score, int* otime, double* timer)
{
	int cccc = 0;
	int obstime/*��ֹ� ��ε� �ð�*/, run2 = 1, k, cot = 1, time = 0, ctime = 0;
	//������ �� �� �� �Ų����� �ϱ����� ���� ������ ������ ��� 0���� �ʱ�ȭ������  
	obstime = rand() % *otime + *otime - 100; //ù ��ֹ� ���� 
	clock_t start = clock();

	while (run2)
	{
		*timer = StopWatch(start);
		//����Ű�� ������ ��
		if (_kbhit())
		{
			k = _getch();
			//p�� ���� ������ Ű(������ ���� �̺�Ʈ �߻� ���� Ȯ���� ���� ����), �̰� �ص� �ӵ��� ���� ���� 
			if (k == 'p')
				(*score) += 1000;

			if (k == 32)
			{
				while (cot <= 6)
				{
					//�� 
					if (cot == 1)
					{
						system("cls");
						jump(map, score, cot, timer);
						++cot;
						Sleep(30);
					}
					if ((time % 25) == 0 && cot > 1)
					{
						system("cls");
						jump(map, score, cot, timer);
						if (cot == 6)
							time = 0;
						++cot;
					}

					//��ֹ� 
					if ((time % 22) == 0)
					{
						++(*score); //����
						Score(speed, score, otime);
						for (int i = 0; i < size_y - 1; i++)
						{
							for (int j = 0; j < size_x; j++)
							{
								if (j != 0 && map[i][j] != 2 && (map[i][j - 1] != 2 || map[i][j] == 3))
								{
									map[i][j - 1] = map[i][j];
									map[i][j] = 0;
								}
							}
						}
						system("cls");
						mapping(map, score, timer);
						Sleep(*speed);
					}

					//���� ������ ��
					run2 = gameover(map, score, timer);
					if (run2 == 2) { //����������
						*score += 100;
						run2 = 1;
						cccc++;
					}

					if (run2 == 0)
						break;

					//��ֹ� ���� 
					if ((ctime % obstime) == 0)
					{
						if (rand() % 2 == 0) { //0�̸� ��ֹ�����
							obstaclemaker(map);
						}
						else { //�ٴ��̳� �ٴڿ��� ��ĭ �� �� �� �ϳ��� �������� ������ ����
							itemmaker(map);
						}

						system("cls");
						mapping(map, score, timer);
						ctime = 0;
						obstime = rand() % *otime + *otime - 100;
					}
					time++;
					ctime++;
				}
				cot = 1;
			}
		}


		//���� Ű�� �ȴ����� ��

		//��ֹ� 
		if ((time % 22) == 0)
		{
			++(*score); //����
			Score(speed, score, otime);
			for (int i = 0; i < size_y - 1; i++)
			{
				for (int j = 0; j < size_x; j++)
				{
					if (j != 0 && map[i][j] != 2 && (map[i][j - 1] != 2 || map[i][j] == 3))
					{
						map[i][j - 1] = map[i][j];
						map[i][j] = 0;
					}

					if (map[i][j] == 4 && map[i][j - 1] == 2) 
					{
						*score += 100;
					}
				}
			}
			system("cls");
			mapping(map, score, timer);
			Sleep(*speed);
		}

		//���� ������ �� 
		run2 = gameover(map, score, timer);
		if (run2 == 2) { //����������
			*score += 100;
			run2 = 1;
			cccc++;
			break;
		}

		//��ֹ� ���� 
		if ((ctime % obstime) == 0)
		{
			if (rand() % 2 == 0) {
				obstaclemaker(map);
			}
			else {
				itemmaker(map);
			}
			system("cls");
			mapping(map, score, timer);
			ctime = 0;
			obstime = rand() % *otime + *otime - 100;
		}
		time++;
		ctime++;
	}
	*speed = spd;
	*otime = oti;
}

//��ֹ��� �¾��� ��**************************************************
int gameover(int map[size_y][size_x], int* score, double* timer)
{
	for (int i = 0; i < size_y; i++)
	{
		for (int j = 0; j < size_x; j++)
		{
			if (map[i][j] == 2)
				return 1;

			if (i == size_y - 1 && j == size_x - 1 && map[i][j] != 2)
			{
				system("cls");
				mapping(map, score, timer);

				if (map[i][j] == 4) { 
					return 2; 
				}
				else if (map[i][j] != 2) { 
					return 0; 
				} 
			}
		}
	}
}

//�� �� �̻� �ö󰡸� ���ǵ� ����**************************************  
void Score(int* speed, int* score, int* otime)
{
	if ((*score % 100) == 0 && *speed > 20)
	{
		*speed -= 5;
		*otime -= 20;
	}
	if ((*score % 100) == 0 && *speed <= 10)
		(*speed)--;
}

double StopWatch(time_t start)
{
	double result = 0;
	time_t end = clock();
	
	result = (double)(end - start) / CLOCKS_PER_SEC;

	return result;
}