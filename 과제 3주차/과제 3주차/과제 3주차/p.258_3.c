#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z, small = 0;

	printf("3���� ������ �Է��Ͻÿ�:");
	scanf("%d %d %d", &x, &y, &z);

	small = x;
	if (y < small)
	{
		if (z < small)
			small = z;
		else
			small = y;
	}
	printf("���� ���� ������ %d�Դϴ�.\n", small);
	return 0;
}