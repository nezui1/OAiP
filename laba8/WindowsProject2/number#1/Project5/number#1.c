#include <stdio.h>

#include <Windows.h>
void aboutMe() {
	printf("Кадышев\n");
	printf("Максим\n");
	printf("Игоревич\n");
	printf("\n");
	printf("Группа: ПИбд-13-2023\n");
	printf("Дата: 04.09.2023 \n");
	printf("Предмет: Основы алгоритмизации и программирования\n");
	printf("Лабораторная работа №1\n");
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	aboutMe();


}

