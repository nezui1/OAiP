// WindowsProject1.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "WindowsProject1.h"

#define MAX_LOADSTRING 100

// Глобальные переменные:
HINSTANCE hInst; // текущий экземпляр
WCHAR szTitle[MAX_LOADSTRING]; // Текст строки заголовка
WCHAR szWindowClass[MAX_LOADSTRING]; // имя класса главного окна

// Отправить объявления функций, включенных в этот модуль кода:
ATOM MyRegisterClass(HINSTANCE hInstance);
BOOL InitInstance(HINSTANCE, int);
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR lpCmdLine,
	_In_ int nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	// TODO: Разместите код здесь.

	// Инициализация глобальных строк
	LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	LoadStringW(hInstance, IDC_WINDOWSPROJECT1, szWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);

	// Выполнить инициализацию приложения:
	if (!InitInstance(hInstance, nCmdShow))
	{
		return FALSE;
	}

	HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WINDOWSPROJECT1));

	MSG msg;

	// Цикл основного сообщения:
	while (GetMessage(&msg, nullptr, 0, 0))
	{
		if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}

	return (int)msg.wParam;
}



//
// ФУНКЦИЯ: MyRegisterClass()
//
// ЦЕЛЬ: Регистрирует класс окна.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEXW wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WINDOWSPROJECT1));
	wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wcex.lpszMenuName = MAKEINTRESOURCEW(IDC_WINDOWSPROJECT1);
	wcex.lpszClassName = szWindowClass;
	wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

	return RegisterClassExW(&wcex);
}

//
// ФУНКЦИЯ: InitInstance(HINSTANCE, int)
//
// ЦЕЛЬ: Сохраняет маркер экземпляра и создает главное окно
//
// КОММЕНТАРИИ:
//
// В этой функции маркер экземпляра сохраняется в глобальной переменной, а также
// создается и выводится главное окно программы.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
	hInst = hInstance; // Сохранить маркер экземпляра в глобальной переменной

	HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

	if (!hWnd)
	{
		return FALSE;
	}

	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	return TRUE;
}

//
// ФУНКЦИЯ: WndProc(HWND, UINT, WPARAM, LPARAM)
//
// ЦЕЛЬ: Обрабатывает сообщения в главном окне.
//
// WM_COMMAND - обработать меню приложения
// WM_PAINT - Отрисовка главного окна
// WM_DESTROY - отправить сообщение о выходе и вернуться
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_COMMAND:
	{
		int wmId = LOWORD(wParam);
		// Разобрать выбор в меню:
		switch (wmId)
		{
		case IDM_ABOUT:
			DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
			break;
		case IDM_EXIT:
			DestroyWindow(hWnd);
			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
	}
	break;
	case WM_PAINT:
	{
		PAINTSTRUCT ps;
		HDC hdc = BeginPaint(hWnd, &ps);
		HPEN hPen;
		HPEN hPen1;
		HPEN hPen2;
		HPEN hPen3;

		hPen = CreatePen(PS_SOLID, 3, RGB(102, 0, 0));
		SelectObject(hdc, hPen);

		MoveToEx(hdc, 150, 350, NULL);
		LineTo(hdc, 275, 250);
		LineTo(hdc, 400, 350);

		hPen = CreatePen(PS_SOLID, 3, RGB(102, 0, 0));
		SelectObject(hdc, hPen);
		MoveToEx(hdc, 150, 350, NULL);
		LineTo(hdc, 275, 250);
		LineTo(hdc, 400, 350);
		LineTo(hdc, 400, 525);
		LineTo(hdc, 150, 525);
		LineTo(hdc, 150, 350);
		LineTo(hdc, 400, 350);

		MoveToEx(hdc, 225, 400, NULL);
		LineTo(hdc, 225, 475);
		LineTo(hdc, 325, 475);
		LineTo(hdc, 325, 400);
		LineTo(hdc, 225, 400);
		//окно
		MoveToEx(hdc, 275, 400, NULL);
		LineTo(hdc, 275, 475);
		MoveToEx(hdc, 275, 425, NULL);
		LineTo(hdc, 325, 425);

		hPen = CreatePen(PS_SOLID, 5, RGB(0, 204, 0));
		SelectObject(hdc, hPen);
		MoveToEx(hdc, 525, 375, NULL);
		LineTo(hdc, 500, 400);
		LineTo(hdc, 550, 400);
		LineTo(hdc, 525, 375);

		MoveToEx(hdc, 525, 400, NULL);
		LineTo(hdc, 525, 400);
		LineTo(hdc, 475, 450);
		LineTo(hdc, 575, 450);
		LineTo(hdc, 525, 400);

		MoveToEx(hdc, 450, 525, NULL);
		LineTo(hdc, 525, 450);
		LineTo(hdc, 600, 525);
		LineTo(hdc, 450, 525);
		hPen1 = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
		SelectObject(hdc, hPen1);
		int x1 = 400, y1 = 150;
		int x2 = 500, y2 = 250;
		do {
			MoveToEx(hdc, x1, y1, NULL);
			LineTo(hdc, x2, y2);
			x1 += 10;
		} while (x1 <= 600); {

			hPen2 = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
			SelectObject(hdc, hPen2);
			int x1 = 0, y1 = 250;
			int x2 = 100, y2 = 250;
			do {
				MoveToEx(hdc, x1, y1, NULL);
				LineTo(hdc, x2, y2);
				x1 += 10;
				y1 -= 20;
			} while (x1 <= 100);

			x1 = 100;
			y1 = 50;
			do {
				MoveToEx(hdc, x1, y1, NULL);
				LineTo(hdc, x2, y2);
				x1 += 10;
				y1 += 20;
			} while (x1 <= 200);
			x1 = 150, y1 = 0;
			x2 = 150, y2 = 100;
			do {
				MoveToEx(hdc, x1, y1, NULL);
				LineTo(hdc, x2, y2);
				x1 += 5;
				x2 += 5;
			} while (x1 <= 450);
			x1 = 650, y1 = 350;
			x2 = 650, y2 = 550;
			do {
				MoveToEx(hdc, x1, y1, NULL);
				LineTo(hdc, x2, y2);
				x1 += 50;
				x2 += 50;
			} while (x1 <= 850);
			x1 = 650, y1 = 350;
			x2 = 675, y2 = 300;
			do {
				MoveToEx(hdc, x2, y2, NULL);
				LineTo(hdc, x1, y1);
				x1 += 50;
				x2 += 50;

			} while (x1 <= 800);
			x1 = 675, y1 = 300;
			x2 = 700, y2 = 350;
			do {
				MoveToEx(hdc, x2, y2, NULL);
				LineTo(hdc, x1, y1);
				x1 += 50;
				x2 += 50;

			} while (x1 <= 850);
			MoveToEx(hdc, 650, 550, NULL);
			LineTo(hdc, 650, 550);
			LineTo(hdc, 850, 550);
			hPen3 = CreatePen(PS_SOLID, 3, RGB(124, 252, 0));
			SelectObject(hdc, hPen3);
			x1 = 650, y1 = 175;
			x2 = 650, y2 = 200;
			do {
				MoveToEx(hdc, x2, y2, NULL);
				LineTo(hdc, x1, y1);
				x1 += 15;
				x2 += 15;

			} while (x1 <= 850);
			SelectObject(hdc, hPen3);
			x1 = 680, y1 = 140;
			x2 = 680, y2 = 160;
			do {
				MoveToEx(hdc, x2, y2, NULL);
				LineTo(hdc, x1, y1);
				x1 += 15;
				x2 += 15;

			} while (x1 <= 820);
			SelectObject(hdc, hPen3);
			x1 = 710, y1 = 110;
			x2 = 710, y2 = 130;
			do {
				MoveToEx(hdc, x2, y2, NULL);
				LineTo(hdc, x1, y1);
				x1 += 15;
				x2 += 15;

			} while (x1 <= 790);
			SelectObject(hdc, hPen3);
			x1 = 740, y1 = 80;
			x2 = 740, y2 = 100;
			do {
				MoveToEx(hdc, x2, y2, NULL);
				LineTo(hdc, x1, y1);
				x1 += 15;
				x2 += 15;

			} while (x1 <= 760);
			HBRUSH hBrush1;
			hBrush1 = CreateSolidBrush(RGB(222, 222, 222));
			SelectObject(hdc, hBrush1);
			SelectObject(hdc, hPen2);
			MoveToEx(hdc, 700, 140, NULL);
			Ellipse(hdc, 700, 140, 680, 110);
			MoveToEx(hdc, 700, 140, NULL);
			Ellipse(hdc, 810, 140, 790, 110);
			MoveToEx(hdc, 700, 140, NULL);
			Ellipse(hdc, 860, 240, 840, 210);
			MoveToEx(hdc, 700, 140, NULL);
			Ellipse(hdc, 660, 240, 640, 210);
			/*SelectObject(hdc, hPen3);
			x1 = 650, y1 = 210;
			x2 = 670, y2 = 185;
			do {
			MoveToEx(hdc, x2, y2, NULL);
			LineTo(hdc, x1, y1);
			x1 += 15;
			x2 += 15;

			} while (x1 <= 850);*/




		}

		EndPaint(hWnd, &ps);
	}
	break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

// Обработчик сообщений для окна "О программе".
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	UNREFERENCED_PARAMETER(lParam);
	switch (message)
	{
	case WM_INITDIALOG:
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
		{
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		break;
	}
	return (INT_PTR)FALSE;
}