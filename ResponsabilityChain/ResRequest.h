//
// Created by beloin on 01/05/2022.
//

#ifndef CHAIN_RESREQUEST_H
#define CHAIN_RESREQUEST_H

#include "string"

using namespace std;

const string BUTTON_CTX = "button_context";

class ResRequest {
public:
    explicit ResRequest(string context);

private:
    string &context;

public:
    string &getContext() const;
};


#endif //CHAIN_RESREQUEST_H

