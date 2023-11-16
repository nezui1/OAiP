#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>
void main() {


	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Кадышев Максим\n");
	printf("Задача 3\n");

	int a, b, d, c, e;
	int s;

	scanf("%d%d%d%d%d",&a, &b, &d, &c, &e);
	printf("ввели: %d %d %d %d %d\n", a, b, d, c,e);
	s = a + b + d + c + e;
	printf("s = %d", s);


	
	

}