#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int r;
	printf("summa = ");
	scanf_s("%d", &r);

	float n;
	printf("procent = ");
	scanf_s("%f", &n);

	int t = 0;


	do {
		printf("%d RUB in %d year\n", r, t);
		r = r * ((100 + n) / 100);
		t = t + 1;
	} while (t <= 10);

}
