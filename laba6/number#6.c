#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	printf("¬ведите чисело n = ");
	scanf_s("%d", &n);
	int step = 1;

	int a;
	printf("¬ведите колличество чисел степеней которые вы хотите получить = ");
	scanf_s("%d", &a);

	int i = 0;
	int d;
	do {
		d = pow(n, i);
		printf("%d ^ %d = %d\n", n, i, d);
		i += 1;
		step += 1;
	} while (step <= a+1);

}
