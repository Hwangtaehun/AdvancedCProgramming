#include <stdio.h>

int main()
{
	double w, h, area, perimeter;
	w = 10, h = 5;
	area = w * h;
	perimeter = 2 * (w + h);

	printf("�簢���� ����: %lf\n", area);
	printf("�簢���� �ѷ�: %lf\n", perimeter);

	return 0;
}