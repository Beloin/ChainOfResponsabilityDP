//
// Created by beloin on 01/05/2022.
//

#include "ResRequest.h"

ResRequest::ResRequest(string context) : context(context) {}

string &ResRequest::getContext() const {
    return context;
}
