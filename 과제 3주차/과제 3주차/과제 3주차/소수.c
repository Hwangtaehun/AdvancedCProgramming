#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int devide = 0;

	printf("���ڸ� �Է����ּ���.");
	scanf("%d", &num);

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			devide++;
	}

	if (devide == 0)
		printf("�Ҽ� �Դϴ�.");
	else
		printf("�Ҽ��� �ƴմϴ�.");
	return 0;
}