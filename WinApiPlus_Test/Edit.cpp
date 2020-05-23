#include "Edit.h"
#include "Application.h"

Edit::Edit(Window* parent) {
    handle = CreateWindow(WC_EDIT, L"", WS_CHILD | WS_VISIBLE | WS_BORDER,
        10, 10, 100, 30, parent->handle, NULL, Application::hInstance, NULL);
}
