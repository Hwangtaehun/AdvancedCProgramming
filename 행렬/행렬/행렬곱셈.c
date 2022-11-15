#include <stdio.h>
#define ROWS 3
#define COLS 3

void multifly(int a[ROWS][COLS], int b[ROWS][COLS]);

int main()
{
	int a[ROWS][COLS] = { {1, 1, 1}, {1, 1, 1}, {1, 1, 1} };
	int b[ROWS][COLS] = { {1, 1, 1}, {1, 1, 1}, {1, 1, 1} };

	multifly(a, b);

	return 0;
}

void multifly(int a[ROWS][COLS], int b[ROWS][COLS])
{
	int result[ROWS][COLS] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				result[i][j] += a[i][k] * b[k][j];
			}
		}

	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%3d", result[i][j]);
		}
		printf("\n");
	}
}