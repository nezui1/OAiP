#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>
int IsDigit(char c){
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*printf("������� ������ =");
	int ch = getchar();
	printf("%c (%d)\n", ch, ch);*/

	char s[80];
	printf("������� �������:");
	fgets(s, 79, stdin);

	printf("\n�� ����� ������ s = \"%s\"", s);

	int k = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		//if (isdigit(s[i])) s[i] = '$';
		if (IsDigit(s[i])) s[i] = '$';
	}
	printf("\n ������ ����� ��������� - %s", s);
	{
		int x;
		scanf("%d", &x);
	}

}
