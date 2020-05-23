#pragma once
#include "framework.h"

class Window {
protected:
    HWND handle;
public:
    void SetText(wstring text);
    wstring GetText();
    void SetParent(Window* window);
    Window GetParent();
};
