#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;
	float a, b;
	char op;
	float sum = 0.0;

	while (1)
	{
		printf("���ڿ� ���������� �Է����ּ���. ����: 10 + 3\n");
		scanf("%d %c %d", &x, &op, &y);

		if (op == '+')
		{
			sum = x + y;
			break;
		}
		else if (op == '-')
		{
			sum = x - y;
			break;
		}
		else if (op == '*')
		{
			sum = x * y;
			break;
		}
		else if (op == '/')
		{
			a = x, b = y;
			sum = a / b;
			break;
		}
		else if (op == '%')
		{
			sum = x % y;
			break;
		}
		else
			printf("�ٽ� �Է����ּ���.\n");
	}

	printf("%d %c %d = %.1f", x, op, y, sum);
	return 0;
}