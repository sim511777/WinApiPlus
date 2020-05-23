#include "Form.h"
#include "Application.h"

LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam) {
    switch (iMessage) {
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return(DefWindowProc(hWnd, iMessage, wParam, lParam));
}

Form::Form(wstring className) {
    HWND hWnd;
    MSG Message;
    WNDCLASS WndClass;

    WndClass.cbClsExtra = 0;
    WndClass.cbWndExtra = 0;
    WndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    WndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
    WndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    WndClass.hInstance = Application::hInstance;
    WndClass.lpfnWndProc = WndProc;
    WndClass.lpszClassName = className.c_str();
    WndClass.lpszMenuName = NULL;
    WndClass.style = CS_HREDRAW | CS_VREDRAW;
    RegisterClass(&WndClass);

    handle = CreateWindow(className.c_str(), className.c_str(), WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
        NULL, (HMENU)NULL, Application::hInstance, NULL);
}

void Form::Run() {
    ::ShowWindow(handle, SW_SHOWDEFAULT);
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}
