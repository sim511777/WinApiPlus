#include "pch.h"
#include "Window.h"

void Window::SetText(wstring text) {
    ::SetWindowText(handle, text.c_str());
}

wstring Window::GetText() {
    wstring text;
    text.reserve(::GetWindowTextLength(handle) + 1);
    ::GetWindowText(handle, const_cast<wchar_t *>(text.c_str()), text.capacity());
    return text;
}

void Window::SetParent(Window* window) {
    ::SetParent(handle, window->handle);
}

Window Window::GetParent() {
    HWND parentHandle = ::GetParent(handle);
    Window window;
    window.handle = parentHandle;
    return window;
}
