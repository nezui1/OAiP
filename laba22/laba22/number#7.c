#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>
int toUpper(char c) {
	int new_c = c;
	if (c >= 'a' && c <= 'z')
		new_c = 'A' + (c - 'a');
	if (c >= '�' && c <= '�')
		new_c = '�' + (c - '�');
	if (c >= '�' && c <= '�')
		new_c = '�' + (c - '�');
	if (c == '�')
		new_c = '�';
	return new_c;
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
		//s[i] = toupper(s[i]);
		s[i] = toUpper(s[i]);
	}
	printf("\n ������ ����� ��������� - %s", s);
	{
		int x;
		scanf("%d", &x);
	}

}