#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include<time.h>

int b_rand();

int main() 
{
	int num;
	char c;

	while (1)
	{
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0):");
		scanf("%d", &num);
		if (num == 0 || num == 1)
		{
			if (num == b_rand())
			{
				printf("�¾ҽ��ϴ�\n");
			}
			else if (num != b_rand())
			{
				printf("Ʋ�Ƚ��ϴ�\n");
			}
			getchar();
			while (1)
			{
				printf("����Ͻðڽ��ϱ�?(y �Ǵ� n):");
				scanf("%c", &c);

				if (c == 'n')
				{
					return 0;
				}
				else if (c == 'y')
				{
					break;
				}
				else
				{
					printf("�ٽ��Է����ּ���.\n");
				}
				getchar();
			}
		}
		else
		{
			printf("�ٽ� �Է����ּ���.\n");
		}
		
	}
}

int b_rand()
{
	int i;

	srand((unsigned)time(NULL));
	i = rand() % 2;

	return i;
}