#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double Celsius;	   //����
	double Fahrenheit; //ȭ��

	printf("���� �µ��� �Է��Ͻÿ�: ");
	scanf("%lf", &Celsius);

	Fahrenheit = Celsius / 5 * 9 + 32;

	printf("ȭ�� �µ�: %lf\n", Fahrenheit);

	return 0;
}