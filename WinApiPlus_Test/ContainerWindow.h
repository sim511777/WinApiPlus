#pragma once

#include "framework.h"
#include "Window.h"

class ContainerWindow : public Window {
public:
    vector<Window*> GetChildren();
    void AddChild(Window* childWindow);
};

