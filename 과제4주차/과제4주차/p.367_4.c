#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap(int year);

int main() 
{
	int year;
	printf("������ �Է����ּ���: ");
	scanf("%d", &year);

	if (is_leap(year) == 1)
		printf("%d���� 366���Դϴ�.\n", year);
	else
		printf("%d���� 365���Դϴ�.\n", year);

	return 0;
}

int is_leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else
		return 0;
}