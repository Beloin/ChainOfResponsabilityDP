//
// Created by beloin on 02/05/2022.
//

#ifndef CHAIN_COMPOSITE_H
#define CHAIN_COMPOSITE_H


#include "ResponsibilityInterface.h"

// Composite-like abstract class
class Composite : public ResponsibilityInterface {
    ResponsibilityInterface *child;

public:
    void setChild(ResponsibilityInterface *child) {
        this->child = child;
        child->setSuccessor(this);
    }

};


#endif //CHAIN_COMPOSITE_H
