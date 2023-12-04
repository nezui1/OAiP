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
	fin = fopen("c:\\Users\\Макс\\source\\repos\\Project8\\input3.txt", "rt");
	if (fin == NULL) {
		printf("Нет файла");
		return;
	}

	FILE* fout;
	fout = fopen("c:\\Users\\Макс\\source\\repos\\Project8\\output3.txt", "wt");
	if (fout == NULL) {
		printf("Нет файла");
		return;
	}
	int u = 0;
	while (!feof(fin)) {
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			int l = 0;
			for (int k = 0; s[k] != '\0'; k++) {
				l++;
			}
			int ht = 0;
			for (int i = 0; s[i] != '\0'; i++) {
				if (isalpha((unsigned char)s[i])){
					ht = 1;
				}
				if (ht == 1) {
					s[l-1] = '#';
				}
				else {
					printf("\n");
					u++;
				}
				}
			fprintf(fout, "%s\n", s);
			printf(">>%s<<\n", s);

		}
	}

	fclose(fin);
	fclose(fout);

	printf("ЛР23 Задача 2 FINISH\n");
}

