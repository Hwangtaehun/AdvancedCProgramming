#include <stdio.h>

#define SIZE 10

void array_copy(int a[], int b[], int size);
void array_print(int a[], int size);

int main()
{
	int array1[10] = { 1, 2, 3 };
	int array2[10]; //초기화 의무 없음

	array_copy(array1, array2, SIZE);
	array_print(array1, SIZE);
	array_print(array2, SIZE);

	return 0;
}

void array_copy(int a[], int b[], int size)
{
	for (int i = 0; i < size; i++)
	{
		b[i] = a[i];
	}
}

void array_print(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}