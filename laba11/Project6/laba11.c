#include <stdio.h>
#include <Windows.h>

void Task1() {
	printf("Task1() START\n");
	
	int n;
	int m;

	printf("n= ");
	scanf_s("%d", &n);
	
	printf("m= ");
	scanf_s("%d", &m);
	
	int i = 1;
	do {
		int j = 1;
		do {
			printf("%d ", (i * 10 + j));
			j = j + 1;
		} while (j <= m);
		printf("\n");
		i += 1;
		} while (i <= n);
		
	printf("Task1() FINISH\n");
}
void Task2() {
	printf("Task2() START\n");
	
	int n;
	int m;
	
	printf("n= ");
	scanf_s("%d", &n);

	printf("m= ");
	scanf_s("%d", &m);

	int i = 1;
	int j = 1;
	int chislo = 0;
	int h = 0;
	do {
		h += 1;
		do {
			printf("%d\t", chislo += h);
			j = j + 1;
		} while (j <= m);
		printf("\n");
		j = 1;
		chislo = 0;
		i += 1;
	} while (i <= n);

	printf("Task2() FINISH\n");
}
void Task3() {
	printf("Task3() START\n");
	int n;

	printf("n= ");
	scanf_s("%d", &n);

	int i = 5;
	do {
		int j = 0;
		do {
			printf("%d ", n);
			j += 1;
		} while (j < i);
		printf("\n");
		i = i - 1;
		} while (i != 0);

	printf("Task3() FINISH\n");
}
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = -1;
	do {

		printf("\n");
		printf("\n");
		printf("1: Задача 1 (i * 10 + j)\n");
		printf("2: Задача 2 (Таблица Пифагора)\n");
		printf("3: Задача 3 (Рисунок по варианту)\n");
		printf("\n");
		printf("0: Выйти из программы\n");
		
		scanf_s("%d", &n);

		switch(n) {
		case 1:
			Task1();
			break;
		case 2:
			Task2();
			break;
		case 3:
			Task3();
			break;
		}
	} while (n != 0);
}