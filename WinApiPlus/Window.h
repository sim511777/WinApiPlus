#pragma once
#include "framework.h"

class Window {
protected:
    static map<HWND, Window*> wndMap;
    HWND handle;
public:
    Window(HWND _handle);
    ~Window();
    void SetParent(Window* window);
    Window* GetParent();
    void SetText(wstring text);
    wstring GetText();
    void SetRect(RECT rect);
    RECT GetRect();
};
