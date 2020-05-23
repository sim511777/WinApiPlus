#pragma once

#include "framework.h"
#include "Window.h"

class Application {
public:
    static map<HWND, Window*> wndMap;
    static HINSTANCE hInstance;
};

