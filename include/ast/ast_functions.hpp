#pragma once

#include "ast_node.hpp"

class FunctionDefinition
    : public Node
{
private:
    NodePtr functionName;
    NodePtr program;

public:
    FunctionDefinition(NodePtr name, NodePtr program)
        : functionName(name), program(program)
    {}

    ~FunctionDefinition() override {
        delete program;
        delete functionName;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {

        dst << ".globl " << functionName->getName() << std::endl;
        dst << functionName->getName() << ":" << std::endl;

        //storing return name
        std::string returnName = "return_" + functionName->getName();
        context.storeLabel(returnName);

        // Deal with stack + frame
        dst << "addi sp,sp,-1000" << std::endl; // Always allocate 1000 bytes, hopefully that's enough
        dst << "sw s0,996(sp)" << std::endl;
        dst << "sw ra,992(sp)" << std::endl;
        dst << "addi s0,sp,1000" << std::endl;

        //load all variables, starting in a0
        functionName->makeRISC(dst, context, "a0");


        if(program != NULL) {
            program->makeRISC(dst, context, destReg);
        }



        dst << "." << returnName << ":" << std::endl; // change this if supporting multiple functions
        // Deal with stack + frame
        dst << "lw ra,992(sp)" << std::endl;
        dst << "lw s0,996(sp)" << std::endl;
        dst << "addi sp,sp,1000" << std::endl; // Always allocate 1000 bytes, hopefully that's enough


        dst << "ret" << std::endl;
    }

    void visualise(std::ostream& dst) const override {
        dst << "Function Definition (" << functionName->getName() << "):" << std::endl;
        dst << "Parameters: ";
        functionName->visualise(dst);
        program->visualise(dst);
    }

};


class ReturnStatement
    :public Node
{
private:
    NodePtr toReturn;

public:
    ReturnStatement(NodePtr exp)
        : toReturn(exp)
    {}

    ~ReturnStatement() override {
        delete toReturn;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {

        //always put into a0 so hallal
        toReturn->makeRISC(dst, context, "a0");
        std::string label = "return";
        label = context.getRetLab();

        dst << "j ." << context.getRetLab() << std::endl;
    }

    void visualise(std::ostream& dst) const override {
        dst << "Return:" << std::endl;
        toReturn->visualise(dst);
    }
};


class FunctionStart
    :public Node
{
    private:
    NodePtr declarator; //always an identifier
    NodePtr parameters; // always the variables in a function
    std::string name;

    public:
    FunctionStart(NodePtr _declarator, NodePtr _parameters)
        : declarator(_declarator), parameters(_parameters)
    {
        name = declarator->getName();
    }

    ~FunctionStart() {
        delete declarator;
        delete parameters;
    }
    void makeRISC (std::ostream &dst, Context &context, const std::string& destReg) const override {
        //print the start of the function and store all parameters
        //node:destreg should always be a0, but is hard coded in anyway

        //this is just the START of the function, so you need to move the stack pointer first
        //befor incrementing, so all that stuff is dealt with below:

        //load all the parameters into memory, need to load in the first arguments register
        parameters->makeRISC(dst, context, "a0");

    }

    std::string getName() const override {
        return name;
    }
    void visualise(std::ostream& dst) const override{
        dst << "Parameters: " <<std::endl;
        parameters->visualise(dst);
    }
};





class FunctionCall
    :public Node
{
    private:
    NodePtr name;
    NodePtr parameters;

    public:
    FunctionCall(NodePtr _name, NodePtr _parameters)
        : name(_name), parameters(_parameters)
    {}

    void makeRISC (std::ostream &dst, Context &context, const std::string& destReg) const override {
        //need to load the parameters into memory:
        std::cerr <<"calling function" << name->getName() << std::endl;
        parameters->makeRISC(dst, context, "a0");

        //now need to jump to the function:
        dst << "call " << name->getName() << std::endl;

        //we assume a function will always return it's value to a0
        //dst << "mov a0," << destReg <<std::endl;
    }

    void visualise (std::ostream& dst) const override {
        dst << "Calling Function: ";
        name->visualise(dst);
        dst << std::endl << "With Parameters:";
        parameters->visualise(dst);
        dst << std::endl;


    }

};


