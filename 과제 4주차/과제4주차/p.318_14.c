#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int rest = 0;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	while (1)
	{
		rest = num % 10;
		printf("%d", rest);
		num /= 10;

		if (num < 1)
			break;
	}

	return 0;
}