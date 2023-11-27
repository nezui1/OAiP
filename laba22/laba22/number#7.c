#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>
int toUpper(char c) {
	int new_c = c;
	if (c >= 'a' && c <= 'z')
		new_c = 'A' + (c - 'a');
	if (c >= 'а' && c <= 'п')
		new_c = 'А' + (c - 'а');
	if (c >= 'р' && c <= 'я')
		new_c = 'Р' + (c - 'р');
	if (c == 'ё')
		new_c = 'Ё';
	return new_c;
}
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*printf("Введите символ =");
	int ch = getchar();
	printf("%c (%d)\n", ch, ch);*/

	char s[80];
	printf("Введите строчку:");
	fgets(s, 79, stdin);

	printf("\nВы ввели строку s = \"%s\"", s);

	int k = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		//s[i] = toupper(s[i]);
		s[i] = toUpper(s[i]);
	}
	printf("\n строка после обработки - %s", s);
	{
		int x;
		scanf("%d", &x);
	}

}