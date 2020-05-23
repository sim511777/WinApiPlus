#include "TestForm.h"

TestForm::TestForm() : Form(L"TestForm") {
    edit1 = new Edit(this);
    edit1->SetRect(RECT{ 10, 10, 100, 30 });
    edit1->SetText(L"input name");

    btn1 = new Button(this);
    btn1->SetRect(RECT{ 10, 40, 100, 60 });
    btn1->SetText(L"click me");

    lbl1 = new Label(this);
    lbl1->SetRect(RECT{ 10, 70, 100, 90 });
    lbl1->SetText(L"result");
}
