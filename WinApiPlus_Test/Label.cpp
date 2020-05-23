#include "Label.h"
#include "Application.h"

Label::Label(Window* parent) {
    handle = CreateWindow(WC_STATIC, L"", WS_CHILD | WS_VISIBLE,
        0, 0, 0, 0, parent->handle, NULL, Application::hInstance, NULL);
}
