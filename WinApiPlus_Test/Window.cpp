#include "pch.h"
#include "Window.h"
#include "Application.h"

//Window::Window(HWND _handle) {
//    handle = _handle;
//    Application::wndMap[handle] = this;
//}

Window::~Window() {
    Application::wndMap.erase(handle);
}

Window* Window::GetParent() {
    HWND parentHandle = ::GetParent(handle);
    return Application::wndMap[parentHandle];
}

void Window::SetText(wstring text) {
    ::SetWindowText(handle, text.c_str());
}

wstring Window::GetText() {
    wstring text;
    text.reserve(::GetWindowTextLength(handle) + 1);
    ::GetWindowText(handle, const_cast<wchar_t *>(text.c_str()), text.capacity());
    return text;
}

void Window::SetRect(RECT rect) {
    ::MoveWindow(handle, rect.left, rect.top, rect.right - rect.left, rect.bottom - rect.top, true);
}

RECT Window::GetRect() {
    RECT rect;
    ::GetWindowRect(handle, &rect);
    return rect;
}

void Window::Show() {
    ::ShowWindow(handle, SW_SHOWDEFAULT);
}
