#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime> //c��� Ÿ�԰����� time�Լ�
#include<stdio.h>
#include<time.h>
using namespace std;

int main()
{
	/*clock_t start, finish;
	double duration;
	
	start = clock();

	int sum = 0;
	for (int i = 0; i < 10000; i++)
		for (int j = 0; j < 10000; j++)
			sum += 1;

	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << duration << "��" << endl;*/

	/*time_t t = time(NULL);
	printf("����ð�: %s\n", ctime(&t));*/

	/*time_t current = time(NULL);
	struct tm* t = localtime(&current);
	printf("����ð�: %s\n", asctime(t));*/

	return 0;
}