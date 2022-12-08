#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 5
#define DATA_SIZE (sizeof(RANK))

typedef struct tag_rank {
	char name[10];
	int score;
	int time;
}RANK;

int rankscreen();
void rankinput(int* score, double* timer);
void print(RANK arr[]);
void sort(RANK arr[]);
int makefile();

int main()
{
	int score = 90;
	double timer = 60;

	//makefile();
	rankinput(&score, &timer);
	getchar();
	rankscreen();
	getchar();
	return 0;
}

int rankscreen()
{
	RANK* rank;
	rank = (RANK*)calloc(5, sizeof(DATA_SIZE));
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
	printf("\n\t\tRanking\n\n");
	printf("\t등수 이름        점수  시간\n");

	for (int i = 0; i < ARR_SIZE; i++)
	{
		printf("\n\t%2d등 %-10s %5d %5d\n", i + 1, rank[i].name, rank[i].score, rank[i].time);
	}
	free(rank);
	return 0;
}

void rankinput(int* score, double* timer)
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

	//printf("aaa\n");
	for (int i = 0; i < ARR_SIZE; i++)
	{
		fscanf(inf, "%s %d %d\n", rank[i].name, &rank[i].score, &rank[i].time);
	}

	fclose(inf);
	//system("cls");
	printf("\n\t\t 기록을 달성했습니다.\n\n\t       You score : %d\n\n", *score / 2); //5
	printf("\n\t\t 이름을 입력해주세요.\n\n");
	scanf("%s", user.name);
	user.score = *score;
	user.time = *timer;

	if (rank[ARR_SIZE - 1].score <= user.score)
	{
		if (rank[ARR_SIZE - 1].time > user.time || rank[ARR_SIZE - 1].time == 0)
		{
			rank[ARR_SIZE - 1] = user;
		}
	}

	//printf("5등 이름: %s, 점수: %d, 시간: %d\n", rank[ARR_SIZE - 1].name, rank[ARR_SIZE - 1].score, rank[ARR_SIZE - 1].time);
	sort(rank);
	getchar();
	free(rank);
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
			if (arr[j].score < arr[j + 1].score)
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
		fprintf(outf, "%s %d %d\n", arr[i].name, arr[i].score, arr[i].time);
	}
	fclose(outf);
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
	free(rank);

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