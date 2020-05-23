#include "pch.h"
#include "Window.h"

map<HWND, Window*> wndMap;
Window::Window(HWND _handle) {
    handle = handle;
    wndMap[handle] = this;
}

Window::~Window() {
    wndMap.erase(handle);
}

void Window::SetParent(Window* window) {
    ::SetParent(handle, window->handle);
}

Window* Window::GetParent() {
    HWND parentHandle = ::GetParent(handle);
    return wndMap[parentHandle];
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
    ::MoveWindow(handle, rect.left, rect.top, rect.right - rect.left, rect.bottom - rect.top);
}

RECT Window::GetRect() {
    RECT rect;
    ::GetWindowRect(handle, &rect);
    return rect;
}
