#include <stdio.h>

#define SIZE 10

void array_print(int a[], int size);
int array_equal(int a[], int b[], int size);

int main()
{
	int array1[SIZE] = { 1,2,3 };
	int array2[SIZE] = { 0 };

	array_print(array1, SIZE);
	array_print(array2, SIZE);

	if (array_equal(array1, array2, SIZE) == 1)
		printf("2개의 배열은 다름\n");
	else
		printf("2개의 배열은 같음\n");

	return 0;
}

void array_print(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int array_equal(int a[], int b[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (a[i] != b[i])
			return 1;
	}
	return 0;
}