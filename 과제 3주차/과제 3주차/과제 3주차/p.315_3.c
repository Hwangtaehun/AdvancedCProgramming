#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	printf("���:");
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%3d", i);
		}
	}

	return 0;
}