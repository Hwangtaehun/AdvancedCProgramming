#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void Win();
void Lose();
void Draw();

int main()
{
	int Ct, Cp; // CT: �����, CP; ��ǻ��
	Cp = srand((unsigned)time) % 3 + 1;

	while (1)
	{
		printf("�����Ͻÿ�(1: ���� 2: ���� 3: ��)");
		scanf("%d", &Ct);
		if (Ct == 1)
		{
			if (Cp == 1)
			{
				Draw();
			}
			else if (Cp == 2)
			{
				Lose();
			}
			else
			{
				Win();
			}
			break;
		}
		else if (Ct == 2)
		{
			if (Cp == 1)
			{
				Win();
			}
			else if (Cp == 2)
			{
				Draw();
			}
			else
			{
				Lose();
			}
			break;
		}
		else if (Ct == 3)
		{
			if (Cp == 1)
			{
				Lose();
			}
			else if (Cp == 2)
			{
				Win();
			}
			else
			{
				Draw();
			}
			break;
		}
		else
		{
			printf("�߸� �Է��߽��ϴ�.");
		}
	}

	return 0;
}

void Win()
{
	printf("����ڰ� �̰���ϴ�.\n");
}

void Lose()
{
	printf("����ڰ� �����ϴ�.\n");
}

void Draw()
{
	printf("���º��Դϴ�.\n");
}