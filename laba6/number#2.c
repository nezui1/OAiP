#include <stdio.h>
#include <math.h>
void main() {
	int i = 0;
	int n = 2;
	int step = 1;
	printf("n = 2\n");
	int d;
	do {
		d = pow(n, i);
		printf("2^%d = %d\n", i, d);
		step = step + 1;
		i = i + 1;
	} while (step <= 6);

}