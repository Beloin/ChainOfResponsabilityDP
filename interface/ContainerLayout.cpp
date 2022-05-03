//
// Created by beloin on 02/05/2022.
//

#include "ContainerLayout.h"

#include <utility>
#include <iostream>

using namespace std;

ContainerLayout::ContainerLayout(string color) : color(std::move(color)) {}

void ContainerLayout::handle(ResRequest *rq) {
    cout << "Received in Container Layout" << endl;
    ResponsibilityInterface::handle(rq);
}

