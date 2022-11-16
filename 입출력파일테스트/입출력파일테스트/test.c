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
void print(RANK arr[]);


int main()
{
	int score = 10;
	int time = 60;

	rankinput(score, time);

	return 0;
}

void makerankfile()
{
	int n = 0;
	int hd;
	RANK rank[5] = { {" "}, {" "}, {" "}, {" "}, {" "} };

	hd = _creat("Rank.dat", S_IREAD | S_IWRITE);
	if (hd == -1)
		printf("Rank.dat를 열지 못했습니다.\n"), exit(0);
	_close(hd);

	hd = _open("Rank.dat", O_WRONLY | O_BINARY);
	if (hd == -1)
		printf("Rank.dat를 열지 못했습니다.\n"), exit(0);
	_write(hd, (void*)&rank, DATA_SIZE*5L);
}

void rankinput(int score, int time)
{
	int hd;
	RANK user;
	RANK rank[5];

	hd = _open("Rank.dat", O_RDWR | O_BINARY);
	if (hd == -1)
		printf("Rank.dat를 열 수 없습니다.\n");

	system("cls");
	printf("\n\t\t 기록을 달성했습니다.\n\n\t       You score : %d\n\n", score / 2); //5
	printf("\n\t\t 이름을 입력해주세요.\n\n");
	scanf("%s", &user.name);
	user.score = score;
	user.time = time;
}

void rankscreen()
{

}

void print(RANK arr[])
{
	for (int i = 0; i < ARR_SIZE; i++)
	{
		printf("%s, %d, %d\n", arr->name, arr->score, arr->time);
		arr++;
	}
}