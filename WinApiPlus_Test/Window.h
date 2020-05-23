#pragma once

#include "framework.h"

class Window {
    friend class ContainerWindow;
    friend class Button;
    friend class Edit;
    friend class Label;

protected:
    HWND handle;
public:
//    Window(HWND _handle);
    virtual ~Window();
    Window* GetParent();
    void SetText(wstring text);
    wstring GetText();
    void SetRect(RECT rect);
    RECT GetRect();
    void Show();
};
