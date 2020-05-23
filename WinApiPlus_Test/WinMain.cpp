#include <Windows.h>
#include "TestForm.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR lpszcmParam, int cmdShow) {
    Application::hInstance = hInstance;
    TestForm form;
    form.Run();
}