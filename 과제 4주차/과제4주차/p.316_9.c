#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int sum = 0;

	while (1)
	{
		printf("���ڸ� �Է����ּ���.(�� 10000�� ������ �ȵ˴ϴ�.)");
		scanf("%d", &num);

		if (num < 10000)
		{
			for (int i = 1; i <= num; i++)
			{
				sum += i;
			}
			printf("1���� %d���� ���� %d�Դϴ�.\n", num, sum);
			break;
		}
		else
		{
			printf("�ٽ� �Է����ּ���.\n");
		}
	}

	return 0;
}