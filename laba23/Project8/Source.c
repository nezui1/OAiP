#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#define MAX_LEN 80

char s[MAX_LEN];
char str[20];

char filenameIn[] = "C:\\Users\\Макс\\source\\repos\\Project8\\input7.txt";
char filenameOut[] = "C:\\Users\\Макс\\source\\repos\\Project8\\output7.txt";


void main() {
	printf("BEGIN!!!\n");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	FILE* fin = fopen(filenameIn, "rt");
	if (fin == NULL) {

		printf("Нет файла\n", filenameIn);
		return;
	}
	FILE* fout = fopen(filenameOut, "wt");
	if (fout == NULL) {

		fclose(fin);

		printf("Файла нет\n", filenameOut);
		return;
	}

	while (!feof(fin)) {
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			
			for (int i = 0; s[i] != '\0'; i++) {
				int ht = 0;
				if (isdigit(s[i])) {
					ht += 1;
				}
				if (ht == 1) {
					s[i] = 'X';
				}
			}
			fprintf(fout,"%s\n",s);
			printf(">>%s<< \n", s);
		}
		
	}
	fclose(fin);
	fclose(fout);

	printf("END");
}


