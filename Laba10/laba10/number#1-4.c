#include <stdio.h>
#include <Windows.h>

void print1_10() {
	int a = 1;
	do {
		printf("%d ", a);
		a += 1;
	} while (a <= 10);

}
void print10_1() {
	int a = 10;
	do {
		printf("%d ", a);
		a -= 1;
	} while (a >= 1);
}
void print50dds() {
	int a = 1;
	int i = 1;
	do {
		printf("%d ", a);
		a += 2;
		i += 1;
	} while (i <= 5);

}
void print100_10_while(){
	int a = 100;
	while (a >= 10) {
		printf("%d ", a);
		a -= 10;
	}
}
void print1000_100_while() {
	int a = 1000;
	while (a >= 100) {
		printf("%d ", a);
		a -= 100;
	}
}
void microcredit() {
	int s;
	int r;
	int t = 0;
	printf("Введите сумму счета\n");
	scanf_s("%d", &s);
	
	printf("Введите процент вклада\n");
	scanf_s("%d", &r);
	while (t <= 10) {
		printf("через %d лет : %d\n", t, s);
		t += 1;
		s = s + ((s * r) / 100);
	}
}
void microstepzxc_1000-7_while() {
	int sf;
	int a = 1000
	printf("Введите жесткий шаг = ");
	scanf_s("%d", &sf);
	while (a >= 0) {
		printf("%d",a)
		a = a - sf;
	}
}
void main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	do {
		printf("\n");
		printf("\n");
		printf("Выберите нужную вам операцию\n");
		printf("1: Вывести числа от 1 до 10\n");
		printf("2: Вывести числа от 10 до 1\n");
		printf("3: Вывести первых 5 нечетных чисел начиная с 1\n");
		printf("11: Вывести числа от 100 до 10 с шагом равным 10\n");
		printf("12: Вывести числа от 1000 до 100 с шагом равным 100\n");
		printf("13: Рассчёт состояни счета на 10 лет\n");
		printf("20: 1000 - 7??? От 1000 с шагом N до 0\n");
		printf("\n");
		printf("0: Выйти из программы\n");
		scanf_s("%d", &n);

		switch (n) {
		case 1:
			print1_10();
			break;
		case 2:
			print10_1();
			break;
		case 3:
			print50dds();
			break;
		case 11:
			print100_10_while();
			break;
		case 12:
			print1000_100_while();
			break;
		case 13:
			microcredit();
			break;
		case 20:
			microstepzxc_1000();
			break;
		}
	
	
	} while (n != 0);
}