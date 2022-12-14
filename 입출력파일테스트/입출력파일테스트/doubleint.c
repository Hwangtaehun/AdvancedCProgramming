#include <stdio.h>

int main() {
	int i_number;
	double d_number = 13.67;

	printf("%0.lf\n", d_number);

	i_number = (int)(d_number + 0.5);

	printf("%d\n", i_number);

	return 0;
}