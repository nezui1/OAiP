#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	printf("¬ведите колличество чисел n = ");
	scanf_s("%d", &n);
	int step = 1;
	int  i = 1;
	do {
		if ((i % 2) == 0)
			printf("%d ", i);
		if ((i % 2) == 0)
			step += 1;
		i+=1
	} while (step <= n);

}
