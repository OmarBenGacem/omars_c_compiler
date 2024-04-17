#pragma once

#include "ast_node.hpp"



class Declaration
    :public Node
{
    private:
    NodePtr declarator;
    NodePtr value;
    //std::string name;

    public:
    Declaration(NodePtr _declarator, NodePtr _value)
        : declarator(_declarator), value(_value)
    {
        //name = _declarator->getName();
        //name = "var"; //debugging step
    }
    ~Declaration()
    {
        delete declarator;
        delete value;
    }
    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //std::cerr << "into make declaration" << std::endl;
        //need to get value in symbol table and add it
        std::string name = declarator->getName();
        //std::string name = "var";

        std::string address = context.allocateVariable(name);

        //get value into temporary register then put in memory
        std::string tempReg = context.getRegN();

        value->makeRISC(dst, context, tempReg);
        dst << "sw " << tempReg << ", " << address << "(sp)" << std::endl;
        //deallocate temporary register
        context.deallocateN(tempReg);
    }

    void visualise(std::ostream& dst) const override {
        std::string name = declarator->getName();
        //std::string name = "var";
        dst <<"Giving [" << name << "] value: [";
        value->visualise(dst);
        dst << "]" << std::endl;
    }


};

