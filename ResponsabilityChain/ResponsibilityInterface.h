//
// Created by beloin on 01/05/2022.
//

#ifndef CHAIN_RESPONSIBILITYINTERFACE_H
#define CHAIN_RESPONSIBILITYINTERFACE_H


#include "ResRequest.h"

class ResponsibilityInterface {

protected:
    ResponsibilityInterface *successor = nullptr;
    explicit ResponsibilityInterface(ResponsibilityInterface *successor) : successor(successor) {}
    ResponsibilityInterface() = default;

public:
    virtual void handle(ResRequest *rq) {
        if (successor != nullptr)
            this->successor->handle(rq);
    }

    void setSuccessor(ResponsibilityInterface *setSuccessor) {
        this->successor = setSuccessor;
    }

    ResponsibilityInterface &getSuccessor() {
        return *this->successor;
    }
};


#endif //CHAIN_RESPONSIBILITYINTERFACE_H
