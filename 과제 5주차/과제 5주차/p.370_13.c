#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_multiple(int n, int m);

int main()
{
	int first_num, second_num;

	printf("ù��° ������ �Է��Ͻÿ�:");
	scanf("%d", &first_num);
	printf("�ι�° ������ �Է��Ͻÿ�:");
	scanf("%d", &second_num);

	switch (is_multiple(first_num, second_num))
	{
	case 0:
		printf("����� �ƴմϴ�.\n");
		break;
	case 1:
		printf("%d�� %d�� ����Դϴ�.\n", first_num, second_num);
		break;
	}

	return 0;
}

int is_multiple(int n, int m)
{
	int result = 0;

	result = n % m;

	if (result == 0)
		return 1;

	return 0;
}