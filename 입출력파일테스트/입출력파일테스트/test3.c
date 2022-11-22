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

void print(RANK arr[]);

int main()
{
	RANK temp;
	RANK arr[5] = { {"실험1", 20000, 6000}, {"실험4", 3000, 10000}, {"abcdefk", 5000, 5000}, {"실험3", 3000, 6000}, {"실험2", 40000, 90000} };
	
	printf("\n\t\tRanking\n\n");

	printf("\t등수 이름        점수  시간\n");

	for (int i = 0; i < ARR_SIZE; i++)
	{
		printf("\n\t%2d등 %-10s %5d %5d\n", i + 1, arr[i].name, arr[i].score, arr[i].time);
	}

	printf("\n");
	printf("\n    뒤로 돌아갈려면 enter을 눌러주세요.\n");


	//for (int i = 0; i < ARR_SIZE - 1; i++)
	//{
	//	for (int j = 0; j < ARR_SIZE - 1 - i; j++)
	//	{
	//		if (arr[j].time > arr[j + 1].time)
	//		{
	//			temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = temp;
	//		}
	//		/*printf("%d번째 시간정렬\n", i);
	//		print(arr);
	//		printf("\n");*/
	//	}
	//}

	//for (int i = 0; i < ARR_SIZE - 1; i++)
	//{
	//	for (int j = 0; j < ARR_SIZE - 1 - i; j++)
	//	{
	//		if (arr[j].score < arr[j + 1].score)
	//		{
	//			temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = temp;
	//		}
	//		/*printf("%d번째 점수정렬\n", i);
	//		print(arr);
	//		printf("\n");*/
	//	}
	//}

	//print(arr);

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