#include <stdio.h>

int main()
{
	int x, y;
	float a, b;
	char op;
	float sum = 0.0;

	while (1)
	{
		printf("���ڿ� ��Ģ���� ��ȣ�� ������ ��ȣ�� �Է����ּ���. ����: 10 + 3\n");
		scanf("%d %c %d", &x, &op, &y);

		switch (op)
		{
		case '+':
			sum = x + y;
			break;
		case '-':
			sum = x - y;
			break;
		case '*':
			sum = x * y;
			break;
		case '/':
			a = x, b = y;
			sum = a / b;
			break;
		case '%':
			sum = x % y;
			break;
		default:
			printf("����� �� ���� ��ȣ�Դϴ�. �ٽ� �Է����ּ���.\n");
			break;
		}
		if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
		{
			printf("%d %c %d = %.1f\n", x, op, y, sum);
			break;
		}
	}
	return 0;
}