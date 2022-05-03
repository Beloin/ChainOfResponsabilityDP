//
// Created by beloin on 02/05/2022.
//

#include "ButtonHandler.h"
#include "iostream"

using namespace std;

void ButtonHandler::handle(ResRequest *rq) {
    if (rq->getContext() == BUTTON_CTX)
        cout << "Received request in ButtonHandler: Handling here " << rq->getContext() << endl;
    else {
        cout << "Received in ButtonHandler." << endl;
        ResponsibilityInterface::handle(rq);
    }
}
