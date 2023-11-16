#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>


int *pa; //��������� �� ������. 
int n; // �������� ���������� ��������� � �������
void Load() {
	// �������� �������� �����
	FILE * fin;
	fin = fopen("C:\\Users\\����\\source\\repos\\laba19\\input3.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������\n");
		return;
	}
	// �������� ������� �� �������� �����
	fscanf(fin, "%d", &n);
	// ��������� ������ ��� ������������ ������
	pa = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &pa[i]);
	}
	// �������� �������� �����
	fclose(fin);
}
void SaveResult() {
	// ���������� �������� ���������������
	int ma = 0;
	for (int i = 0; i < n; i++) {
		if (pa[i] > ma) {
			ma = pa[i];
		}
	}

	
	int m = 0;
	for (int i = 0; i < n; i++) {
		if (pa[i] >= (ma*2)/3){
			m++;
		}
	}
	// �������� ��������� �����
	FILE* fout = fopen("C:\\Users\\����\\source\\repos\\laba19\\output3.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ������\n");
		return;
	}

	// ���������� ��������� ������� �� ���������������
	fprintf(fout, "%d\n", m);
	for (int i = 0; i < n; i++) {
		if (pa[i] >= (ma * 2) / 3){
			fprintf(fout, "%d ", pa[i]);
		}
	}
	// �������� �����
	fclose(fout);
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Hello! It is Task1!\n");

	Load();
	SaveResult();

	free(pa);
}
