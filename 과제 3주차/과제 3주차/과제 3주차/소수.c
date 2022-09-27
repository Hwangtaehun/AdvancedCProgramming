#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int devide = 0;

	printf("숫자를 입력해주세요.");
	scanf("%d", &num);

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			devide++;
	}

	if (devide == 0)
		printf("소수 입니다.");
	else
		printf("소수가 아닙니다.");
	return 0;
}