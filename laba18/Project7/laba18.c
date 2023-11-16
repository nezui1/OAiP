#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>
void main() {


	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Кадышев Максим\n");
	printf("Задача 5\n");

	int a[10];
	int n;
	

	FILE *fin;
	fin = fopen("C:\\Users\\Макс\\source\\repos\\Project7\\input6.txt", "rt");
	if (fin == NULL) {
		printf("File in1.txt is not found");
		return;
	}
	fscanf(fin, "%d", &n);
	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);


	printf("ввели массив a[%d] = ", n);
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += a[i];
	}
	
	printf("\n");
	printf("sum = %d", s);
	float sa = (float)s / n;
	printf("\n");
	printf("sa = %f", sa);
	
	for (int i = 0; i < n; i++) {
		if ((a[i] < sa) && (a[i] % 2 == 0)) {
			a[i] /= 2;
		}
	}
	printf("a[%d] = ", n);
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	FILE *fout;
	fout = fopen("C:\\Users\\Макс\\source\\repos\\Project7\\output6.txt", "wt");
	if (fout == NULL) {
		printf("File out1.txt cannot be created");
		return;
	}
	fprintf(fout, "%d\n", n);
	
	for (int i = 0; i < n; i++) {
		fprintf(fout, "%d ", a[i]);
	}
	fclose(fout);

}