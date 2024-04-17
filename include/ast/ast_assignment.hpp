#pragma once

#include "ast_node.hpp"

class Assignment
    :public Node
{

    private:
    NodePtr var;
    NodePtr expression;

    public:
    Assignment(NodePtr _var, NodePtr _expression)
        :expression(_expression), var(_var)
    {}

    ~Assignment() override {
        delete expression;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
       //in this basic one, "var" is an Identifier, and "expression" is it's value

        //this register now holds the value to be stored in memory
        std::string valReg = context.getRegN();
        expression->makeRISC(dst, context, valReg);

        //now need to store this in memory
        dst << "sw " << valReg << "," << context.allocateVariable(var->getName()) << "(sp)" << std::endl;

        //free the temporary register
        context.deallocateN(valReg);
    }

     void visualise(std::ostream& dst) const override {
        dst << "Assigning: ";
        var->visualise(dst);
        dst << " to ";
        expression->visualise(dst);
        dst << std::endl;

    }

};


