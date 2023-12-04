#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#define MAX_LEN 80
char s[MAX_LEN];

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Кадышев Максим\n");
	printf("ЛР23 Задача 2\n");

	FILE* fin;
	fin = fopen("c:\\Users\\Макс\\source\\repos\\Project8\\input2.txt","rt");
	if (fin == NULL) {
		printf("Нет файла");
		return;
	}

	FILE* fout;
	fout = fopen("c:\\Users\\Макс\\source\\repos\\Project8\\output2.txt", "wt");
	if (fout == NULL) {
		printf("Нет файла");
		return;
	}
	while (!feof(fin)) {
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			for (int i = 0; s[i] != '\0'; i++) {
				s[i] = toupper(s[i]);
				}
			fprintf(fout, "%s", s);
			printf(">>%s<<\n", s);

		}
	}
	
	fclose(fin);
	fclose(fout);

	printf("ЛР23 Задача 2 FINISH\n");
}

