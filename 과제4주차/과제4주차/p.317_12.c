#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int a = 0, b = 1, c = 0;

	printf("���° �ױ��� ���ұ��?");
	scanf("%d", &num);

	for (int i = 0; i <= num; i++)
	{
		if (i == 0)
			printf("%d, ", a);
		else
		{
			c = a + b;
			a = b;
			b = c;
			printf("%d, ", a);
		}
	}

}