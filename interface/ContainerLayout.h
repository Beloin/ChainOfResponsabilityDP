//
// Created by beloin on 02/05/2022.


#ifndef CHAIN_CONTAINERLAYOUT_H
#define CHAIN_CONTAINERLAYOUT_H


#include "ResponsibilityInterface.h"
#include "Composite.h"

class ContainerLayout : public Composite {

private:
    string color;

public:
    explicit ContainerLayout(string color);

    void handle(ResRequest *rq) override;
};


#endif //CHAIN_CONTAINERLAYOUT_H
