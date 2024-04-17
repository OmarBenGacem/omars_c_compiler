#pragma once

#include "ast_node.hpp"


class Int
    :public Node
{
    private:
    //std::string type;

    public:
    Int()
        //: type(_type)
    {}

    ~Int() override
    {}

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override
    {} //ignoring variable declarations for now, just do nothing

    void visualise(std::ostream& dst) const override {
        dst << "Declared an int (do nothing)" << std::endl;

    }
};
