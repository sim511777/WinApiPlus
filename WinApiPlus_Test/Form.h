#pragma once
#include "ContainerWindow.h"
#include "framework.h"

class Form : public ContainerWindow {
public:
    Form(wstring className);
    void Run();
};

