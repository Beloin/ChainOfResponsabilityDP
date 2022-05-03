//
// Created by beloin on 02/05/2022.
//

#ifndef CHAIN_BUTTONHANDLER_H
#define CHAIN_BUTTONHANDLER_H


#include "ResponsibilityInterface.h"
#include "Composite.h"

class ButtonHandler : public Composite  {
    void handle(ResRequest *rq) override;
};


#endif //CHAIN_BUTTONHANDLER_H
