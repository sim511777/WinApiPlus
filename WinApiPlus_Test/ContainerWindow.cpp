#include "pch.h"
#include "ContainerWindow.h"
#include "Application.h"

vector<Window*> ContainerWindow::GetChildren() {
    vector<Window*> children;
    HWND childHwnd = ::GetWindow(handle, GW_CHILD);
    while (childHwnd) {
        Window* childWnd = Application::wndMap[childHwnd];
        if (childWnd != nullptr)
            children.push_back(childWnd);
        childHwnd = ::GetNextWindow(childHwnd, GW_HWNDNEXT);
    }
    return children;
}

void ContainerWindow::AddChild(Window * childWindow) {
    ::SetParent(childWindow->handle, handle);
}
