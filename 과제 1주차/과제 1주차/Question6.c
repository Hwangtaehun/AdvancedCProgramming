#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double Celsius, Fahrenheit;

	printf("ȭ�� �µ��� �Է��Ͻÿ�: ");
	scanf("%lf", &Fahrenheit);

	Celsius = (Fahrenheit - 32) / 9 * 5;

	printf("���� �µ�: %lf\n", Celsius);

	return 0;
}