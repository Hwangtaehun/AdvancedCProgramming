#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double radius, area;

	printf("�������� �Է��Ͻÿ�: ");
	scanf("%lf", &radius);

	area = radius * radius * 3.14;
	printf("���� ����: %lf", area);
}