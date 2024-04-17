#pragma once

#include <iostream>
#include <string>
#include "context.hpp"

class Node;

typedef const Node* NodePtr;

class Node
{
public:
    virtual void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const =0;
    virtual void visualise(std::ostream& dst) const =0;
    virtual std::string getName() const {
        std::cerr << "getName not implemented" <<std::endl;
    }
    virtual ~Node() {}

};
