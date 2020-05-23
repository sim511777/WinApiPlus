#include "Button.h"
#include "Application.h"
Button::Button(Window* parent) {
    handle = ::CreateWindow(WC_BUTTON, L"", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
        50, 50, 200, 100, parent->handle, (HMENU)0, Application::hInstance, NULL);
}
