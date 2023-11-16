#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include <stdio.h>

void main() {
	int n;
	int i;
	int a[1000];
	int s = 0;
	
	
	FILE *fin;
	fin = fopen("C:\\Users\\Макс\\source\\repos\\laba19\\input.txt", "rt");
	if (fin == NULL) {
		printf("File in1.txt is not found");
		return;
	}
	fscanf(fin, "%d", &n);
	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);

	printf("%d\n", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	
	for (i = 0; i < n; i++) {
		s += a[i];
	}
	printf("\n");
	printf("%d", s);

	float sa = (float)s / n;
	printf("\n");
	printf("%f", sa);

	int k = 0;
	int b[1000];
	int e = 0;
	for (i = 0; i < n; i++) {
		if (a[i] > sa) {
			k += 1;
			b[e] = a[i];
			e += 1;
		}
		
	}

	FILE *fout;
	fout = fopen("C:\\Users\\Макс\\source\\repos\\laba19\\output.txt", "wt");
	if (fout == NULL) {
		printf("File out1.txt cannot be created");
		return;
	}
	fprintf(fout, "%d\n", k);

	for (int i = 0; i < k; i++) {
		fprintf(fout, "%d ", b[i]);
	}
	fclose(fout);

}
