#include "EndScreen.h"

int endscreen(int map[size_y][size_x], int* speed, int* score, int* otime, double* timer)
{
	int answer;

	if (*score >= 3000) //������ 3000�̻��̸� ��ũ ��� ȭ������ �̵� 
	{
		rankinput(score, timer);
	}

	system("cls");
	printf("\n\t\tGame over~~\n\n\t       You score : %d\n\n\t       You time : %0.lf\n\n", *score / 2, *timer);
	printf("\n\t\t re game?\n\n");
	printf("\n\t\t 1.go\n\n");
	printf("\n\t\t 2.ranking\n\n");
	printf("\n\t\t 3.exit\n");
	scanf("%d", &answer);
	if (answer == 1)
	{
		system("cls");
		mapbase(map);
		mapping(map, score, timer);
		return 1;
	}
	else if (answer == 2)
	{
		system("cls");
		rankscreen(map, score, timer);
	}
	/*else if (answer == 8282)
	{
		*speed = 10;
		*otime = 181;
		system("cls");
		mapbase(map);
		mapping(map, score);
		return 1;
	}*/
	else
	{
		system("cls");
		return 0;
	}

}
//�̺�Ʈ ȭ��*************************************************************
int eventscreen()
{


	return 0;
}

//��ũ �Է�
void rankinput(int *score, double* timer)
{
	double itimer;
	RANK user;
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
	//���� ����
	fclose(inf);

	system("cls");
	printf("\n\t\t ����� �޼��߽��ϴ�.\n\n\t       You score : %d\n\n\t       You time : %0.lf\n\n", *score / 2, *timer);
	printf("\n\t\t �̸��� �Է����ּ���.\n\n");
	// �̸� �Է�
	scanf("%s", user.name); 
	user.score = *score;
	itimer = *timer;
	user.time = (int)itimer;
	// 5��� ����� ������ �ð��� �� ������ ������ �ð��� ª���� 5�� ������ ��������� ���
	if (rank[ARR_SIZE - 1].time > user.time || rank[ARR_SIZE - 1].time == 0)
	{
		if (rank[ARR_SIZE - 1].score <= user.score) 
		{
			rank[ARR_SIZE - 1] = user;
		}
	}
	sort(rank);
}

//��ũ ����
void sort(RANK arr[]) // ���ĵ��� ���� ���¿��� ���� Ű���� ���� ������ ������ ���� �Ŀ��� �����ϱ����ؼ� �������� ���
{
	FILE* outf;
	RANK temp;
	// ��ŷ�� ������ �߿��ؼ� ������ ���߿� �����ϰ� �ð� ���� ���� ����
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
	// ��ŷ ���� ����
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
	//"test.txt"������ ���� ���� ���� ����� ���н� "���� ���� ����"��� �� ���
	if ((fopen_s(&outf, "Rank.txt", "wb")) != 0) 
	{
		printf("file open error \n");
		exit(0);
	}
	//rank����ü �迭�� ������ ���� �������� �����ϱ�
	for (int i = 0; i < ARR_SIZE; i++)
	{
		fprintf(outf, "%s %d %d\n", arr[i].name, arr[i].score, arr[i].time);
	}
	//���� ����
	fclose(outf); 
}

