//
// Created by beloin on 02/05/2022.
//

#ifndef CHAIN_BUTTON_H
#define CHAIN_BUTTON_H


#include "ResponsibilityInterface.h"
#include "Composite.h"

class Button : public Composite {

private:
    string label;

public:
    void handle(ResRequest *rq) override;
    explicit Button(string label);
    void pressButton();
};


#endif //CHAIN_BUTTON_H
