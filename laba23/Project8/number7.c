#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#define MAX_LEN 80

char s[MAX_LEN];
char str[20];

char filenameIn[] = "C:\\Users\\Макс\\source\\repos\\Project8\\input6.txt";
char filenameOut[] = "C:\\Users\\Макс\\source\\repos\\Project8\\output6.txt";


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
			int k = 0;
			for (int i = 0; s[i] != '\0'; i++) {
				if (s[i] == ';') {
					k++;
				}
			}
			sprintf(str, "%d", k);
			fprintf(fout,"%s%s\n",s, str);
			printf(">>%s%s<< \n", s,str);
		}
		
	}
	fclose(fin);
	fclose(fout);

	printf("END");
}


