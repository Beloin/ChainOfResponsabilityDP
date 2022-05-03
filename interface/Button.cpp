//
// Created by beloin on 02/05/2022.
//

#include "Button.h"
#include "iostream"

using namespace std;

void Button::handle(ResRequest *rq) {
    cout << "Received in Button" << endl;
    if (successor != nullptr)
        this->successor->handle(rq);
}

Button::Button(string label) : label(label) {}

void Button::pressButton() {
    this->handle(new ResRequest(BUTTON_CTX));
}

