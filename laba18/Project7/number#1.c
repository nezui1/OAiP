#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void main(){


	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Кадышев Максим\n");
	printf("Задача 1\n");
	
	FILE *fin;
	int a, b, d, s;
	fin = fopen("C:\\Users\\Макс\\source\\repos\\Project7\\input1.txt", "rt");
		if (fin == NULL) {
			printf("File in1.txt is not found");
			return;
		}
	fscanf(fin, "%d%d%d", &a, &b);
	fclose(fin);

	s = a + b;

	FILE *fout;
	fout = fopen("C:\\Users\\Макс\\source\\repos\\Project7\\output1.txt", "wt");
		if (fout == NULL) {
			printf("File out1.txt cannot be created");
			return;
		}
	fprintf(fout, "s = %d", s);
	fclose(fout);

}