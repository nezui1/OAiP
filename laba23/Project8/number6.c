#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>

char filenameIn[] = "C:\\Users\\Макс\\source\\repos\\Project8\\input5.txt";
char filenameHTML[] = "C:\\Users\\Макс\\source\\repos\\Project8\\input_out.html";

void main() {
	printf("BEGIN!!!\n");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	FILE* fin = fopen(filenameIn, "rt");
	if (fin == NULL) {
		
		printf("Нет файла\n", filenameIn);
		return;
	}
	FILE* fout = fopen(filenameHTML, "wt");
	if (fout == NULL) {
		 
		fclose(fin);
		
		printf("File %s doesn't opened!\n", filenameHTML);
		return;
	}


	
	fprintf(fout, "<!DOCTYPE html>");
	fprintf(fout, "<html>");
	fprintf(fout, "<head>");
	fprintf(fout, "<meta http - equiv = \"Content-Type\" content = 	\"text/html; charset=utf-8\" />");
	fprintf(fout, "<title>HTML Document</title>");
	fprintf(fout, "</head>");
	fprintf(fout, "<body>");
	int ch;
	while ((ch = getc(fin)) != EOF) {
		
		fprintf(fout, "%c", ch);

		
		if (ch == '\n') {
			fprintf(fout, "<br>");
		}
	}


	fprintf(fout, "</body>");
		fprintf(fout, "</html>");
		
		fclose(fin);
		fclose(fout);
	
		printf("END!!!\n");

}




