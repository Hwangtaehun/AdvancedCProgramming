#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define ARR_SIZE 5
#define DATA_SIZE (sizeof(RANK))

typedef struct tag_rank {
	char name[10];
	int score;
	int time;
}RANK;

int rankscreen();
void rankinput(int* score, int* otime);
void print(RANK arr[]);
int makefile();

int main()
{
	int score = 20;
	int otime = 70;

	//makefile();
	rankinput(&score, &otime);

	//rankscreen();
	getchar();
	return 0;
}

int rankscreen()
{
	RANK rank[ARR_SIZE];
	FILE* inf;
	if ((fopen_s(&inf, "Rank.txt", "rb")) != 0)
	{
		printf("파일 오픈 실패\n");
		exit(0);
	}
	//printf("aaa\n");

	for (int i = 0; i < ARR_SIZE; i++)
	{
		fscanf(inf, "%s %d %d\n", rank[i].name, &rank[i].score, &rank[i].time);
	}

	fclose(inf);
	//printf("bbb\n");
	print(rank);

	return 0;
}

void rankinput(int* score, int* otime)
{
	RANK user;
	RANK* rank;
	rank = (RANK*)calloc(5, sizeof(DATA_SIZE));
	FILE* inf;

	if ((fopen_s(&inf, "Rank.txt", "rb")) != 0)
	{
		printf("파일 오픈 실패\n");
		exit(0);
	}

	printf("aaa\n");
	for (int i = 0; i < ARR_SIZE; i++)
	{
		fscanf(inf, "%s %d %d\n", rank[i].name, &rank[i].score, &rank[i].time);
	}

	fclose(inf);
	print(rank);
	//system("cls");
	printf("\n\t\t 기록을 달성했습니다.\n\n\t       You score : %d\n\n", *score / 2); //5
	printf("\n\t\t 이름을 입력해주세요.\n\n");
	scanf("%s", user.name);
	user.score = *score;
	user.time = *otime;

	if (rank[ARR_SIZE - 1].score <= user.score)
	{
		if (rank[ARR_SIZE - 1].time > user.time || rank[ARR_SIZE - 1].time == 0)
		{
			rank[4] = user;
		}
	}
	//sort(rank);
}

int makefile()
{
	RANK* rank;
	FILE* outf;
	rank = (RANK*)calloc(5, sizeof(DATA_SIZE));

	if ((fopen_s(&outf, "Rank.txt", "wb")) != 0)
	{
		printf("file open error \n");
		exit(0);
	}

	for (int i = 0; i < ARR_SIZE; i++)
	{
		strcpy(rank[i].name, "없음");
	}

	for (int i = 0; i < ARR_SIZE; i++)
	{
		fprintf(outf, "%s %d %d\n", rank->name, rank->score, rank->time);
	}
	fclose(outf);

	return 0;
}

void print(RANK arr[])
{
	for (int i = 0; i < ARR_SIZE; i++)
	{
		printf("%s, %d, %d\n", arr->name, arr->score, arr->time);
		arr++;
	}
}