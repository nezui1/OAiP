#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>
void main() {


	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Кадышев Максим\n");
	printf("Задача 4\n");

	int a, b, d, c, e;
	int s;

	FILE *fin;
	fin = fopen("C:\\Users\\Макс\\source\\repos\\Project7\\input4.txt", "rt");
	if (fin == NULL) {
		printf("File in1.txt is not found");
		return;
	}
	fscanf(fin, "%d%d%d%d%d", &a, &b, &d, &c, &e);
	fclose(fin);


	printf("ввели: %d %d %d %d %d\n", a, b, d, c,e);
	s = a + b + d + c + e;
	printf("s = %d", s);


	FILE *fout;
	fout = fopen("C:\\Users\\Макс\\source\\repos\\Project7\\output4.txt", "wt");
	if (fout == NULL) {
		printf("File out1.txt cannot be created");
		return;
	}
	fprintf(fout, "s = %d", s);
	fclose(fout);

}