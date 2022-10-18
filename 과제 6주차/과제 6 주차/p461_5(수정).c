#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define SIZE 10

void Compare(int a[], int size);

int main()
{
	int result = 0;
	int cnt[SIZE] = { 0 };
	srand((unsigned)time(NULL));

	for (int i = 0; i < 100; i++)
	{
		++cnt[rand() % 10];
	}

	Compare(cnt, SIZE);

	return 0;
}

void Compare(int a[], int size)
{
	int max = 0;

	for (int i = 1; i < size; i++)
	{
		if (a[i] > a[max])
		{
			max = i;
		}
	}

	printf("가장 많이 나온수=%d\n", max);
}