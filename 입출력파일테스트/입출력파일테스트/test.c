#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <io.h>
#include <fcntl.h>
#include <sys\stat.h>

#define ARR_SIZE 5
#define DATA_SIZE (sizeof(RANK))

typedef struct tag_rank {
	char name[10];
	int score;
	int time;
}RANK;


void makerankfile();
void rankinput(int score, int time);
void rankscreen();
void sort(RANK arr[]);
void print(RANK arr[]);


int main()
{
	int score = 20;
	int time = 70;

	rankinput(score, time);
	rankscreen();

	return 0;
}

void makerankfile()
{
	int n = 0;
	int hd;
	RANK rank[ARR_SIZE] = { {" "}, {" "}, {" "}, {" "}, {" "} };

	hd = _creat("Rank.dat", S_IREAD | S_IWRITE);
	if (hd == -1)
		printf("Rank.dat�� ���� ���߽��ϴ�.\n"), exit(0);
	_close(hd);

	hd = _open("Rank.dat", O_WRONLY | O_BINARY);
	if (hd == -1)
		printf("Rank.dat�� ���� ���߽��ϴ�.\n"), exit(0);
	_write(hd, (void*)&rank, DATA_SIZE*5L);
	_close(hd);
}

void rankinput(int score, int time)
{
	int hd;
	RANK user;
	RANK rank[ARR_SIZE];

	hd = _open("Rank.dat", O_RDWR | O_BINARY);
	if (hd == -1)
		printf("Rank.dat�� �� �� �����ϴ�.\n");
	_read(hd, (void*)&rank, DATA_SIZE * 5L);

	system("cls");
	printf("\n\t\t ����� �޼��߽��ϴ�.\n\n\t       You score : %d\n\n", score / 2); //5
	printf("\n\t\t �̸��� �Է����ּ���.\n\n");
	scanf("%s", &user.name);
	user.score = score;
	user.time = time;

	if (rank[4].score <= user.score)
	{
		if (rank[4].time < user.time)
		{
			rank[4] = user;
		}
	}

	/*printf("\n��ŷ �Է�\n");
	print(rank);*/

	sort(rank);

	printf("\n���� �Ϸ�\n");
	print(rank);

	_write(hd, (void*)&rank, DATA_SIZE * 5L);
	_close(hd);
}

void rankscreen()
{
	int hd;
	RANK rank[ARR_SIZE];

	hd = _open("Rank.dat", O_RDWR | O_BINARY);
	if (hd == -1)
		printf("Rank.dat�� �� �� �����ϴ�.\n");
	_read(hd, (void*)&rank, DATA_SIZE * 5L);
	print(rank);
	_close(hd);
}

void sort(RANK arr[])
{
	RANK temp;

	for (int i = 0; i < ARR_SIZE - 1; i++)
	{
		for (int j = 1; j < ARR_SIZE; j++)
		{
			if (arr[i].time < arr[j].time)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < ARR_SIZE - 1; i++)
	{
		for (int j = 1; j < ARR_SIZE; j++)
		{
			if (arr[i].score < arr[j].score)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	/*printf("sort�� �Լ� �ȿ��� ���\n");
	print(arr);*/
}

void print(RANK arr[])
{
	for (int i = 0; i < ARR_SIZE; i++)
	{
		printf("%s, %d, %d\n", arr->name, arr->score, arr->time);
		arr++;
	}
}