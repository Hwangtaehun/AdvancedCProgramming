#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Sum(int n);

int main() 
{
	int num;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	
	printf("1���� %d������ ��=%d\n", num, Sum(num));

	return 0;
}

int Sum(int n)
{
	if (n <= 1)
		return 1;
	else
		return n + Sum(n - 1);
}