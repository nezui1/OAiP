#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char s[80];
	printf("������� �������:");
	fgets(s, 79, stdin);

	printf("\n�� ����� ������ s = \"%s\"", s);

	int k =  0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') {
			s[i] = '#';
		}
	}
	printf("\������ ����� ��������� - %s", s);
	{
		int x;
		scanf("%d", &x);
	}

}
