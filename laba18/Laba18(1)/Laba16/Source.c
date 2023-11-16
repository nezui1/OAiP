#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>

#define NUM_ELEMENTS 10

int arr[NUM_ELEMENTS];
int n = 0;

void printElements() {
	int i = 0;
	while (i < n) {
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}
void printElementsfile() {
	int i = 0;
	FILE *fin;
	fin = fopen("C:\\Users\\����\\source\\repos\\Laba18(1)\\input.txt", "rt");
	if (fin == NULL) {
		printf("File in1.txt is not found");
		return;
	}
	fscanf(fin, "%d", &n);
	for (i = 0; i < n; i++) {
		fscanf(fin, "%d", &arr[i]);
	}
	printElements();
	fclose(fin);
	}

void saveArrInFail(){
	int i = 0;
	FILE *fout;
	fout = fopen("C:\\Users\\����\\source\\repos\\Laba18(1)\\output.txt", "wt");
	if (fout == NULL) {
		printf("File out1.txt cannot be created");
		return;
	}
	
	for (i = 0; i < n; i++) {
		fprintf(fout, "%d ", arr[i]);
	}
	fclose(fout);

}
void keyboardInput() {
	printf("n = ");
	scanf_s("%d", &n);

	printf("input %d values: ", n);
	for (int i = 0; i < n;  i++) {
		scanf_s("%d", &arr[i]);
	}
}
void oddsX10() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 1) {
			arr[i] = arr[i] * 10;
		}
	}
}
int findMin() {
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}
void bolshe10() {
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] >= 10) {
			c++;
		}
	}
	printf("����� ����� > 10 - %d", c);
}int x2() {
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			c = i;
		}
	}
	return c;
}
int findIndexMin() {
	int min = arr[0];
	int d = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
			d = i;
		}
	}
	return d;
}
void deleteMinElement() {
	int min = findIndexMin();
	for (int i = min; i < n; i++) {
		arr[i] = arr[i + 1];
	}
	n = n - 1;
}

int findIndexMax() {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > min) {
			min = i;
		}
	}
	return min;
}
int x1() {
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] = arr[i] * (-1);
		}
	}
	return c;
}
int x4() {
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] <= 4) {
			arr[i] = 4;
		}
	}
	return c;
}
void deleteElement() {
	printf("������ ���������� �������� =");
	int index;
	scanf_s("%d", &index);
	for (int i = index; i < n; i++) {
		arr[i] = arr[i + 1];
		}
	n = n - 1;
}
void pasteElement() {
	n = n + 1;
	printf("�� ����� ����� �������� �������� =");
	int index;
	scanf_s("%d", &index);
	printf("��� �������� =");
	int d;
	scanf_s("%d", &d);
	for (int i = n - 1; i > index; i--) {
		arr[i] = arr[i - 1];
		
	
	}
	arr[index] = d;
}

void pastePeredMinElement() {
	int x = findIndexMin();
	n = n + 1;
	for (int i = n - 1; i > x; i--) {
		arr[i] = arr[i - 1];
	}
	arr[x] = 0;
}
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int item;
	do {
		printf("\n");
		printf("------------------------------\n");
		printf("���������� �������:");
		printElements();
		printf("�������� ������ ��� ��������:\n");
		printf("1: ������ � ���������� ������\n");
		printf("16: ������ ������ ��� ������ �����\n");
		printf("2: x10 ��� ���� �������� ���������\n");
		printf("3: ����� ����������� �������\n");
		printf("4: ���������� ����� > 10\n");
		printf("5: x2\n");
		printf("6: ����� ������, �� �� �������?\n");
		printf("7: ������ ������, ���� ��������!!!!\n");
		printf("8: swap min and max\n");
		printf("9: ��� ������ -1\n");
		printf("11: ���� �� ������ 4, �� �� 4\n");
		printf("12: ������� �������\n");
		printf("13: ��������� �������\n");
		printf("14: ������� ������������ �������\n");
		printf("15: ����� ����������� ���� 0\n");
		printf("17: ��������� ������ � �����\n");
		printf("\n");
		printf("0: ����� �� ���������\n");
		printf("��������� �������� >>>>>> ");

		scanf_s("%d", &item);
		switch (item) {
		case 9:
			x1();
			break;
		case 11:
			x4();
			break;
		case 1:
			keyboardInput();
			break;
		case 16:
			printElementsfile();
			break;
		case 17:
			saveArrInFail();
			printf("������ ��������!");
			break;
		case 12:
			deleteElement();
			break;
		case 13:
			pasteElement();
			break;
		case 14:
			deleteMinElement();
			break;
		case 15:
			pastePeredMinElement();
			break;
		case 2:
			oddsX10();
			break;

		case 3:
		{
			int min = findMin();
			printf("min = %d\n", min);
		}
		case 4:
			bolshe10();
			break;
		case 5: {
			int index = x2();
			if (index >= 0) {
				arr[index] *= 2;
			}
			break;
		}
		case 6: {
			int index = findIndexMin();
			printf("������ ������������ �������� = %d\n", index);
			int cnt = 0;
			for (int i = 0; i < index; i++) {
				if (arr[i] % 2 == 0) {
					cnt++;
				}
			}
			printf("����� ������������ %d ������ ���������\n", cnt);
			break;
		}
		case 7: {
			int index = findIndexMin();
			printf("������ ������������ �������� = %d\n", index);
			int cnt = 0;
			int d = 0;
			for (int i = index; i < n; i++) {
				if (arr[i] % 2 != 0) {
					arr[i] = arr[i] * 10;
				}
			
				
			}
			break;
		}
		case 8: {
			int index = findIndexMin();
			int index1 = findIndexMax();
			printf("������ ������������ �������� = %d\n", index);
			printf("������ �ax �������� = %d\n", index1);
			int c = arr[index];
			int d = arr[index1];
			arr[index] = arr[index1];
			arr[index1] = c;


			}
			break;

		}
		
		} while (item != 0);
}

