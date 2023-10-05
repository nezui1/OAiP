// WindowsProject2.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "WindowsProject2.h"
void drawHz(HDC hdc) {
	HPEN hPen3;
	hPen3 = CreatePen(PS_SOLID, 3, RGB(124, 252, 0));
	SelectObject(hdc, hPen3);
	SelectObject(hdc, hPen3);
	int x1 = 650, y1 = 175;
	int x2 = 650, y2 = 200;
	do {
		MoveToEx(hdc, x2, y2, NULL);
		LineTo(hdc, x1, y1);
		x1 += 15;
		x2 += 15;

	} while (x1 <= 850);
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
	SelectObject(hdc, hPen3);
	MoveToEx(hdc, 700, 140, NULL);
	Ellipse(hdc, 700, 140, 680, 110);
	MoveToEx(hdc, 700, 140, NULL);
	Ellipse(hdc, 810, 140, 790, 110);
	MoveToEx(hdc, 700, 140, NULL);
	Ellipse(hdc, 860, 240, 840, 210);
	MoveToEx(hdc, 700, 140, NULL);
	Ellipse(hdc, 660, 240, 640, 210);
}
void drawFence(HDC hdc) {
	HPEN hPen3;
	int x1 = 650, y1 = 350;
	int x2 = 650, y2 = 550;
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
}
void drawPPC(HDC hdc) {

	HPEN hPen1 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	HBRUSH hBrush1 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, hBrush1);
	SelectObject(hdc, hPen1);
	MoveToEx(hdc, 50, 350, NULL);
	LineTo(hdc, 50, 350);
	LineTo(hdc, 350, 350);
	LineTo(hdc, 350, 350);
	LineTo(hdc, 350, 500);

	hPen1 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	hBrush1 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, hBrush1);
	SelectObject(hdc, hPen1);
	MoveToEx(hdc, 350, 500, NULL);
	LineTo(hdc, 350, 500);
	LineTo(hdc, 50, 500);
	LineTo(hdc, 50, 350);
	Ellipse(hdc, 70, 470, 130, 530);
	Ellipse(hdc, 310, 470, 370, 530);

	hPen1 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	hBrush1 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, hBrush1);
	SelectObject(hdc, hPen1);
	MoveToEx(hdc, 349, 500, NULL);
	LineTo(hdc, 349, 500);
	LineTo(hdc, 490, 500);
	LineTo(hdc, 490, 430);
	LineTo(hdc, 349, 430);

	HPEN hPen2 = CreatePen(PS_SOLID, 6, RGB(0, 0, 156));
	SelectObject(hdc, hPen2);
	MoveToEx(hdc, 125, 350, NULL);
	LineTo(hdc, 125, 350);
	LineTo(hdc, 125, 320);
	LineTo(hdc, 185, 320);
	LineTo(hdc, 185, 350);


	hPen2 = CreatePen(PS_SOLID, 6, RGB(0, 0, 156));
	SelectObject(hdc, hPen2);
	MoveToEx(hdc, 125, 400, NULL);
	LineTo(hdc, 125, 400);
	LineTo(hdc, 125, 430);
	LineTo(hdc, 125, 400);
	LineTo(hdc, 145, 400);
	LineTo(hdc, 145, 430);

	hPen2 = CreatePen(PS_SOLID, 6, RGB(0, 0, 156));
	SelectObject(hdc, hPen2);
	MoveToEx(hdc, 175, 400, NULL);
	LineTo(hdc, 175, 400);
	LineTo(hdc, 175, 430);
	LineTo(hdc, 175, 400);
	LineTo(hdc, 195, 400);
	LineTo(hdc, 195, 430);

	hPen2 = CreatePen(PS_SOLID, 6, RGB(0, 0, 156));
	SelectObject(hdc, hPen2);
	MoveToEx(hdc, 215, 400, NULL);
	LineTo(hdc, 215, 400);
	LineTo(hdc, 235, 400);
	LineTo(hdc, 215, 400);
	LineTo(hdc, 215, 430);
	LineTo(hdc, 235, 430);

	hPen1 = CreatePen(PS_SOLID, 6, RGB(0, 0, 156));
	SelectObject(hdc, hPen2);
	MoveToEx(hdc, 490, 430, NULL);
	LineTo(hdc, 490, 430);
	LineTo(hdc, 350, 350);


}
void drawSnowMen(HDC hdc) {
	HBRUSH hBrush;
	HPEN hPen;
	hPen = CreatePen(PS_SOLID, 3, RGB(128, 0, 0));
	hBrush = CreateHatchBrush(HS_FDIAGONAL, RGB(255, 0, 0));
	SelectObject(hdc, hBrush);
	Ellipse(hdc, 400, 100, 450, 150);
	Ellipse(hdc, 380, 150, 470, 225);
	Ellipse(hdc, 360, 225, 490, 320);
	SelectObject(hdc, hPen);
	hPen = CreatePen(PS_SOLID, 3, RGB(100, 100, 100));
	MoveToEx(hdc, 470, 175, NULL);
	LineTo(hdc, 470, 175);
	LineTo(hdc, 525, 225);
	hPen = CreatePen(PS_SOLID, 3, RGB(100, 100, 100));
	MoveToEx(hdc, 380, 175, NULL);
	LineTo(hdc, 380, 175);
	LineTo(hdc, 325, 225);
}
void drawTreeTwo(HDC hdc) {
	HPEN hPen;
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

	hPen = CreatePen(PS_SOLID, 5, RGB(0, 204, 0));
	SelectObject(hdc, hPen);
	MoveToEx(hdc, 75, 350, NULL);
	LineTo(hdc, 75, 350);
	LineTo(hdc, 75, 525);

	hPen = CreatePen(PS_SOLID, 5, RGB(0, 204, 0));
	SelectObject(hdc, hPen);
	MoveToEx(hdc, 103, 475, NULL);
	LineTo(hdc, 103, 475);
	LineTo(hdc, 75, 515);

	hPen = CreatePen(PS_SOLID, 5, RGB(0, 204, 0));
	SelectObject(hdc, hPen);
	MoveToEx(hdc, 25, 450, NULL);
	LineTo(hdc, 25, 450);
	LineTo(hdc, 75, 495);

	hPen = CreatePen(PS_SOLID, 5, RGB(0, 204, 0));
	SelectObject(hdc, hPen);
	MoveToEx(hdc, 125, 425, NULL);
	LineTo(hdc, 125, 425);
	LineTo(hdc, 75, 475);

	hPen = CreatePen(PS_SOLID, 5, RGB(0, 204, 0));
	SelectObject(hdc, hPen);
	MoveToEx(hdc, 125, 400, NULL);
	LineTo(hdc, 125, 400);
	LineTo(hdc, 75, 455);

	hPen = CreatePen(PS_SOLID, 5, RGB(0, 204, 0));
	SelectObject(hdc, hPen);
	MoveToEx(hdc, 25, 425, NULL);
	LineTo(hdc, 25, 425);
	LineTo(hdc, 75, 460);

	hPen = CreatePen(PS_SOLID, 5, RGB(0, 204, 0));
	SelectObject(hdc, hPen);
	MoveToEx(hdc, 40, 375, NULL);
	LineTo(hdc, 40, 375);
	LineTo(hdc, 75, 425);

	hPen = CreatePen(PS_SOLID, 5, RGB(0, 204, 0));
	SelectObject(hdc, hPen);
	MoveToEx(hdc, 100, 365, NULL);
	LineTo(hdc, 100, 365);
	LineTo(hdc, 75, 400);

	hPen = CreatePen(PS_SOLID, 5, RGB(0, 204, 0));
	SelectObject(hdc, hPen);
	MoveToEx(hdc, 60, 360, NULL);
	LineTo(hdc, 60, 360);
	LineTo(hdc, 75, 375);
}
void drawTriangle(HDC hdc) {
	MoveToEx(hdc, 10, 30, NULL);
	LineTo(hdc, 10, 100);
	LineTo(hdc, 150, 100);
	LineTo(hdc, 10, 30);
}
void drawBush(HDC hdc) {
	HPEN hPen1;
	hPen1 = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
	SelectObject(hdc, hPen1);
	int x1 = 400, y1 = 150;
	int x2 = 500, y2 = 250;
	do {
		MoveToEx(hdc, x1, y1, NULL);
		LineTo(hdc, x2, y2);
		x1 += 25;
	} while (x1 <= 600);
}

void drawChristmasFree(HDC hdc) {
	HPEN hPen;
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
}
void drawTree(HDC hdc) {
	HPEN hPen2;
	hPen2 = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
	SelectObject(hdc, hPen2);
	int x1 = 0, y1 = 250;
	int x2 = 100, y2 = 250;
	do {
		MoveToEx(hdc, x1, y1, NULL);
		LineTo(hdc, x2, y2);
		x1 += 5;
		y1 -= 10;
	} while (x1 <= 100);

	x1 = 100;
	y1 = 50;
	do {
		MoveToEx(hdc, x1, y1, NULL);
		LineTo(hdc, x2, y2);
		x1 += 5;
		y1 += 10;
	} while (x1 <= 200);
}

void drawCar(HDC hdc) {
	HPEN hPen = CreatePen(PS_SOLID, 3, RGB(128, 0, 0));
	SelectObject(hdc, hPen);

	HBRUSH hBrush;
	hBrush = CreateSolidBrush(RGB(255, 128, 67));
	SelectObject(hdc, hBrush);
	
	Rectangle(hdc, 50, 200, 300, 250);

	MoveToEx(hdc, 100, 200, NULL);
	LineTo(hdc, 150, 150);
	LineTo(hdc, 250, 150);
	LineTo(hdc, 300, 200);

	hPen = CreatePen(PS_SOLID, 7, RGB(0, 0, 128));
	SelectObject(hdc, hPen);

	hBrush = CreateHatchBrush(HS_FDIAGONAL, RGB(255, 0, 0));
	SelectObject(hdc, hBrush);
	Ellipse(hdc, 75, 225, 125, 275);


	hPen = CreatePen(PS_SOLID, 7, RGB(0,128, 0));
	SelectObject(hdc, hPen);

	hBrush = CreateHatchBrush(HS_BDIAGONAL, RGB(0, 128, 0));
	SelectObject(hdc, hBrush);
	Ellipse(hdc, 225, 225, 275, 275);

}


void drawHome(HDC hdc) {
	HPEN hPen = CreatePen(PS_SOLID, 3, RGB(421, 405, 255));
	SelectObject(hdc, hPen);
	MoveToEx(hdc, 150, 350, NULL);
	LineTo(hdc, 275, 250);
	LineTo(hdc, 400, 350);

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
}
#define MAX_LOADSTRING 100

// Глобальные переменные:
HINSTANCE hInst;                                // текущий экземпляр
WCHAR szTitle[MAX_LOADSTRING];                  // Текст строки заголовка
WCHAR szWindowClass[MAX_LOADSTRING];            // имя класса главного окна

// Отправить объявления функций, включенных в этот модуль кода:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

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
    LoadStringW(hInstance, IDC_WINDOWSPROJECT2, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WINDOWSPROJECT2));

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
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WINDOWSPROJECT2));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_WINDOWSPROJECT2);
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
			
			drawCar(hdc);
			drawHome(hdc);
			drawTree(hdc);
			drawBush(hdc);
			drawChristmasFree(hdc);
			drawTriangle(hdc);
			drawTreeTwo(hdc);
			drawSnowMen(hdc);
			drawPPC(hdc);
			drawFence(hdc);
			drawHz(hdc);
            // TODO: Добавьте сюда любой код прорисовки, использующий HDC...
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
