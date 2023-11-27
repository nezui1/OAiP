﻿// laba21.cpp : Определяет точку входа для приложения.
//
#define _CRT_SECURE_NO_WARNINGS
#include "framework.h"
#include "laba21.h"
#include <Windows.h>
#include <stdio.h>


#define MAX_LOADSTRING 100
#define WIDTH 30
#define HEIGHT 20
#define N 10
#define M 15

// Глобальные переменные:
HINSTANCE hInst;                                // текущий экземпляр
WCHAR szTitle[MAX_LOADSTRING];                  // Текст строки заголовка
WCHAR szWindowClass[MAX_LOADSTRING];            // имя класса главного окна

// Отправить объявления функций, включенных в этот модуль кода:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);
int map[N][M] = {
	{0, 0, 0, 0, 0,   0, 0, 0, 0, 0,   0, 0, 0, 0, 0},
	{0, 1, 0, 0, 0,   0, 0, 0, 0, 3,   0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0,   0, 0, 0, 0, 3,   0, 0, 0, 0, 0},
	{0, 0, 0, 3, 3,   3, 3, 0, 0, 0,   3, 3, 0, 0, 0},
	{0, 0, 0, 0, 0,   0, 3, 0, 0, 0,   3, 3, 0, 0, 0},

	{0, 0, 0, 0, 0,   0, 3, 3, 3, 0,   0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0,   0, 0, 0, 3, 0,   2, 0, 0, 2, 0},
	{0, 0, 0, 0, 0,   0, 0, 2, 0, 0,   2, 0, 0, 2, 0},
	{0, 0, 0, 0, 0,   0, 2, 2, 2, 2,   2, 2, 2, 2, 0},
	{0, 0, 0, 0, 0,   0, 0, 0, 0, 0,   0, 0, 0, 0, 0}
};
int steps = 0;
int gold = 0;
void drawMap(HDC hdc) {
	// кисть для пустого поля
	HBRUSH hBrushEmptyCell = CreateSolidBrush(RGB(200, 200, 200)); // серый
	// кисть для поля с золотом
	HBRUSH hBrushGold = CreateSolidBrush(RGB(255, 255, 0)); // желтый
	// кисть для стены
	HBRUSH hBrushWall = CreateSolidBrush(RGB(0, 0, 0)); // черный
	// кисть для игрока
	HBRUSH hBrushMan = CreateSolidBrush(RGB(0, 0, 255)); // синий

	// Коды ячеек:
	// 0 - свободна
	// 1 - игрок
	// 2 - препятствие
	// 3 - золото
	HBRUSH brush[4] = { hBrushEmptyCell, hBrushMan, hBrushWall, hBrushGold };
	int i, j;

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {

			int x1 = j * WIDTH;
			int x2 = (j + 1) * WIDTH;
			int y1 = i * HEIGHT;
			int y2 = (i + 1) * HEIGHT;

			RECT r = { x1, y1, x2, y2 };
			FillRect(hdc, &r, brush[map[i][j]]);
		}
	}


	// Все кисти удаляем!!!
	for (i = 0; i < 4; i++)
		DeleteObject(brush[i]);
	char strC[80];
	sprintf(strC, "steps=%d  gold=%d", steps, gold);

	TCHAR  strWin[80];
	OemToChar(strC, strWin);

	HFONT hFont = CreateFont(HEIGHT, 0, 0, 0, 0, 0, 0, 0,
		DEFAULT_CHARSET, 0, 0, 0, 0, L"Courier New");
	SelectObject(hdc, hFont);
	SetTextColor(hdc, RGB(0, 0, 128));

	TextOut(hdc, 10, HEIGHT * N, (LPCWSTR)strWin, _tcslen(strWin));

	DeleteObject(hFont);

}

void PasteWall() {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (map[i][j] == 1) {
				map[i][j - 1] = 2;
			}
		}
	}

}
void PasteGold() {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (map[i][j] == 1) {
				map[i][j + 1] = 3;
			}
		}
	}

}



void Left(){
	int i, j;

	for (i = 0; i < N; i++) {
		for (j = 1; j < M; j++) {
			if (map[i][j] == 1) { 
				if (map[i][j - 1] == 0) { 
					map[i][j - 1] = 1;
					map[i][j] = 0;
					steps++;
				}
				else if (map[i][j - 1] == 3) {
					map[i][j - 1] = 1;
					map[i][j] = 0;
					steps++;
					gold++;
				}
			}
		}
	}
}


void Right() {
	int i, j;

	for (i = 0; i < N; i++) {

		for (j = M - 2; j >= 0; j--) {

			if (map[i][j] == 1) { 
				if (map[i][j + 1] == 0) {
					map[i][j + 1] = 1;
					map[i][j] = 0;
					steps++;
				}
				else if (map[i][j + 1] == 3) {
					map[i][j + 1] = 1;
					map[i][j] = 0;
					steps++;
					gold++;
				}
			}
		}
	}
}


void Up() {
	int i, j;

	for (i = 1; i < N; i++) {

		for (j = 0; j < M; j++) {

			if (map[i][j] == 1) { 
				if (map[i - 1][j] == 0) {
					map[i - 1][j] = 1;
					map[i][j] = 0;
					steps++;
				}
				else if (map[i - 1][j] == 3) {
					map[i - 1][j] = 1;
					map[i][j] = 0;
					steps++;
					gold++;
				}
			}
		}
	}
}
void Down() {
	int i, j;

	for (i = N - 2 ; i >= 0; i--) {

		for (j = 0; j < M; j++) {

			if (map[i][j] == 1) {
				if (map[i + 1][j] == 0) {
					map[i + 1][j] = 1;
					map[i][j] = 0;
					steps++;
				}
				else if (map[i + 1][j] == 3) {
					map[i + 1][j] = 1;
					map[i][j] = 0;
					steps++;
					gold++;
				}
			}
		}
	}
}

void Save() {
	FILE* fout;
	fout = fopen("C:\\Users\\Макс\\source\\repos\\laba21\\Save.txt", "wt");
	fprintf(fout, "%d ", N);
	fprintf(fout, "%d \n", M);

	int i, j;
	for (i = 0; i < N; i++) {
		
		for (j = 0; j < M; j++) {
			fprintf(fout, "%d ", map[i][j]);
		}
		fprintf(fout, "\n");
	}
	fprintf(fout, "%d ", steps);
	fprintf(fout, "%d ", gold);

	fclose(fout);
}

void Load() {
	FILE* fin;
	fin = fopen("C:\\Users\\Макс\\source\\repos\\laba21\\Save.txt", "rt");
	
	int n, m;
	fscanf(fin, "%d", &n);
	fscanf(fin, "%d", &m);
	int i, j;
	
	for (i = 0; i < n; i++) {

		for (j = 0; j < m; j++) {
			fscanf(fin, "%d", &map[i][j]);
		}
		
	}
	fscanf(fin, "%d", &steps);
	fprintf(fin, "%d", &gold);

	fclose(fin);
}
void DoubleHeroes() {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (map[i][j] == 1) {
				map[i - 1][j] = 1;
			}
		}
	}
}
void GoldDown() {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (map[i][j] == 1) {
				map[i + 1][j] = 3;
			}
		}
	}
}


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Разместите код здесь.

    // Инициализация глобальных строк
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_LABA21, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_LABA21));

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

    return (int) msg.wParam;
}



//
//  ФУНКЦИЯ: MyRegisterClass()
//
//  ЦЕЛЬ: Регистрирует класс окна.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_LABA21));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_LABA21);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   ФУНКЦИЯ: InitInstance(HINSTANCE, int)
//
//   ЦЕЛЬ: Сохраняет маркер экземпляра и создает главное окно
//
//   КОММЕНТАРИИ:
//
//        В этой функции маркер экземпляра сохраняется в глобальной переменной, а также
//        создается и выводится главное окно программы.
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
//  ФУНКЦИЯ: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  ЦЕЛЬ: Обрабатывает сообщения в главном окне.
//
//  WM_COMMAND  - обработать меню приложения
//  WM_PAINT    - Отрисовка главного окна
//  WM_DESTROY  - отправить сообщение о выходе и вернуться
//
//

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
	case WM_KEYDOWN:
		switch (wParam)
		{
		case 0x44:
			GoldDown();
			break;
		case 0x55:
			DoubleHeroes();
			break;
		case 0x52:
			PasteGold();
			break;
		case 0x4D:
			Load();
			break;
		case 0x53:
			Save();
			break;
		case 0x4c:
			PasteWall();
			break;
		case VK_DOWN:
			Down();
			InvalidateRect(hWnd, NULL, TRUE);
			break;
		case VK_LEFT:
			Left();
			InvalidateRect(hWnd, NULL, TRUE);
			break;
		case VK_UP:
			Up();
			InvalidateRect(hWnd, NULL, TRUE);
			break;
		case VK_RIGHT:
			Right();
			InvalidateRect(hWnd, NULL, TRUE);
			break;
		}
		break;


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
			drawMap(hdc);
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
