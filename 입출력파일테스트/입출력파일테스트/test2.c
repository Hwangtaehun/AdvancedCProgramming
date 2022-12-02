#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define ARR_SIZE 5
#define DATA_SIZE (sizeof(RANK))

typedef struct tag_rank {
	char name[10];
	int rscore;
	int time;
}RANK;

int rankscreen();
void rankinput(int *score, int *otime);
void sort(RANK arr[]);
void print(RANK arr[]);
int makefile();

int main()
{
	int score = 20;
	int otime = 70;

	//rankinput(&score, &otime);

	rankscreen();

	return 0;
}

int rankscreen()
{
	RANK* rank;
	FILE* inf;
	if (rank = (RANK*)malloc(sizeof(RANK)*ARR_SIZE) == NULL)
	{
		printf("memory가 모자라네요. \n");
		exit(-1);
	}

	if ((fopen_s(&inf, "Rank.txt", "rb")) != 0)
	{
		printf("파일 오픈 실패\n");
		exit(0);
	}


	for (int i = 0; i < ARR_SIZE; i++)
	{
		fscanf(inf, "%s %d %d\n", ((rank + i)->name), &((rank + i)->rscore), &((rank + i)->time));
	}

	fclose(inf);

	print(rank);

	free(rank);

	return 0;
}

void rankinput(int *score, int *otime)
{
	RANK user;
	RANK rank[ARR_SIZE];
	FILE* inf;

	if ((fopen_s(&inf, "Rank.txt", "rb")) != 0)
	{
		printf("파일 오픈 실패\n");
		exit(0);
	}


	for (int i = 0; i < ARR_SIZE; i++)
	{
		fscanf(inf, "%s %d %d\n", rank[i].name, &rank[i].rscore, &rank[i].time);
	}

	fclose(inf);

	system("cls");
	printf("\n\t\t 기록을 달성했습니다.\n\n\t       You score : %d\n\n", *score / 2); //5
	printf("\n\t\t 이름을 입력해주세요.\n\n");
	scanf("%s", &user.name);
	user.rscore = *score;
	user.time = *otime;

	if (rank[ARR_SIZE - 1].time > user.time || rank[ARR_SIZE - 1].time == 0)
	{
		if (rank[ARR_SIZE - 1].rscore <= user.rscore)
		{
			rank[ARR_SIZE - 1] = user;
		}
	}
	sort(rank);
}

void sort(RANK arr[])
{
	FILE* outf;
	RANK temp;

	for (int i = 0; i < ARR_SIZE - 1; i++)
	{
		for (int j = 0; j < ARR_SIZE - 1 - i; j++)
		{
			if (arr[j].time > arr[j + 1].time)
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < ARR_SIZE - 1; i++)
	{
		for (int j = 0; j < ARR_SIZE - 1 - i; j++)
		{
			if (arr[j].rscore < arr[j + 1].rscore)
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	if ((fopen_s(&outf, "Rank.txt", "wb")) != 0)
	{
		printf("file open error \n");
		exit(0);
	}

	for (int i = 0; i < ARR_SIZE; i++)
	{
		fprintf(outf, "%s %d %d\n", arr[i].name, arr[i].rscore, arr[i].time);
	}
	fclose(outf);

}

void print(RANK arr[])
{
	for (int i = 0; i < ARR_SIZE; i++)
	{
		printf("%s, %d, %d\n", arr->name, arr->rscore, arr->time);
		arr++;
	}
}

int makefile()
{
	FILE* outf;
	RANK rank[ARR_SIZE] = { {"없음"}, {"없음"}, {"없음"}, {"없음"}, {"없음"} };

	if ((fopen_s(&outf, "Rank.txt", "wb")) != 0)
	{
		printf("file open error \n");
		exit(0);
	}

	for (int i = 0; i < ARR_SIZE; i++)
	{
		fprintf(outf, "%s %d %d\n", rank[i].name, rank[i].rscore, rank[i].time);
	}
	fclose(outf);
	return 0;
}