#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Plus(double x, double y);
double Minus(double x, double y);
double Multiply(double x, double y);
double Divide(double x, double y);
int Rest(double x, double y);
void Is_result(double n);


int main() 
{
	int choice;
	char c;
	double x, y;
	double result = 0;
	printf("==================================\n");
	printf("MENU\n");
	printf("==================================\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. ������\n");
	while (1)
	{
		printf("���ϴ� �޴� �����Ͻÿ�(1-5):");
		scanf("%d", &choice);
		printf("���� 2�� �Է��Ͻÿ�:");
		scanf("%lf %lf", &x, &y);

		switch (choice)
		{
		case 1:
			result = Plus(x, y);
			break;
		case 2:
			result = Minus(x, y);
			break;
		case 3:
			result = Multiply(x, y);
			break;
		case 4:
			result = Divide(x, y);
			break;
		case 5:
			result = (double)Rest(x, y);
			break;
		default:
			printf("�ٽ��Է��ϼ���.");
			break;
		}
		getchar();

		Is_result(result);

		printf("����Ϸ��� y�� �����ÿ�.");
		scanf("%c", &c);

		if (c != 'y')
			return 0;
	}
}

double Plus(double x, double y)
{
	double result;
	result = x + y;
	return result;
}

double Minus(double x, double y)
{
	double result;
	result = x - y;
	return result;
}

double Multiply(double x, double y)
{
	double result;
	result = x * y;
	return result;
}

double Divide(double x, double y)
{
	double result;
	result = x / y;
	return result;
}

int Rest(double x, double y)
{
	int result;
	result = (int)x % (int)y;
	return result;
}

void Is_result(double n)
{
	printf("������ :%.1lf\n", n);
}