#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("���ڸ� �Է��ϼ���\n");
	scanf("%d", &n);
	if (n >= 100)
		printf("large\n");
	else
		printf("small\n");

	return 0;
}