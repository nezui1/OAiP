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
	printf("������� ����� �����\n");
	scanf_s("%d", &s);
	
	printf("������� ������� ������\n");
	scanf_s("%d", &r);
	while (t <= 10) {
		printf("����� %d ��� : %d\n", t, s);
		t += 1;
		s = s + ((s * r) / 100);
	}
}
void microstepzxc_1000-7_while() {
	int sf;
	int a = 1000
	printf("������� ������� ��� = ");
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
		printf("�������� ������ ��� ��������\n");
		printf("1: ������� ����� �� 1 �� 10\n");
		printf("2: ������� ����� �� 10 �� 1\n");
		printf("3: ������� ������ 5 �������� ����� ������� � 1\n");
		printf("11: ������� ����� �� 100 �� 10 � ����� ������ 10\n");
		printf("12: ������� ����� �� 1000 �� 100 � ����� ������ 100\n");
		printf("13: ������� �������� ����� �� 10 ���\n");
		printf("20: 1000 - 7??? �� 1000 � ����� N �� 0\n");
		printf("\n");
		printf("0: ����� �� ���������\n");
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