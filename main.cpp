//
// Created by beloin on 01/05/2022.
//

#include <iostream>
#include "interface/ContainerLayout.h"
#include "interface/ButtonHandler.h"
#include "interface/Button.h"

using namespace std;

int main() {
    cout << "Creating Interface..." << endl;
    auto layout1 = new ContainerLayout("Blue");
    auto buttonHandler = new ButtonHandler();

    auto button = new Button("Click Me!");
    auto layout2 = new ContainerLayout("Cyan");

    // App Tree
    // Inside App Tree successors are set in child function
    layout1->setChild(buttonHandler);
    buttonHandler->setChild(layout2);
    layout2->setChild(button);

    cout << "Pressing Button" << endl;
    button->pressButton();

    return 0;
}