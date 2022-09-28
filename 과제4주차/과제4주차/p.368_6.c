#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
	int num;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num);

	switch (even(num))
	{
	case -1:
		printf("even()�� ���: ����� �ƴմϴ�.\n");
		break;
	case 0:
		printf("even()�� ���: Ȧ��\n");
		break;
	case 1:
		printf("even()�� ���: ¦��\n");
		break;
	}

	/*if (even(num) == 1)
		printf("even()�� ���: ¦��\n");
	else if (even(num) == 0)
		printf("even()�� ���: Ȧ��\n");
	else
		printf("even()�� ���: ����� �ƴմϴ�.\n");*/

	printf("absolute()�� ���: %d\n", absolute(num));

	switch (sign(num))
	{
	case -1:
		printf("sign()�� ���: ����\n");
		break;
	case 0:
		printf("sign()�� ���: 0\n");
		break;
	case 1:
		printf("sign()�� ���: ���\n");
		break;
	}

	/*if (sign(num) == -1)
		printf("sign()�� ���: ����\n");
	else if (sign(num) == 0)
		printf("sign()�� ���: 0\n");
	else if (sign(num) == 1)
		printf("sign()�� ���: ���\n");*/

	return 0;
}

int even(int n)
{
	if (n > 0)
	{
		if (n % 2 == 0)
			return 1;
		else if (n % 2 == 1)
			return 0;
	}
	else
		return -1;
}

int absolute(int n)
{
	if (n >= 0)
		return n;
	else
		return -n;
}

int sign(int n)
{
	if (n > 0)
		return 1;
	else if (n == 0)
		return 0;
	else
		return -1;
}