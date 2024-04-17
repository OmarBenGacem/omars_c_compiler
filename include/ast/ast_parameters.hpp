#pragma once

#include "ast_node.hpp"

class ParameterList
    :public Node
{

    private:
    NodePtr newEntry;
    NodePtr theRest;

    public:
    ParameterList(NodePtr _newEntry, NodePtr _theRest)
        :newEntry(_newEntry), theRest(_theRest)
    {}

    ~ParameterList() override {
        delete newEntry;
        delete theRest;
    }
    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //when this is called in a function definition, all the variables are in the registers, so
        //need to take all the values in the argument registers and store in mapped memory, thus
        //here destReg will act as the register to be stored in memory, and the name of it will be
        //in newEntry->getName(), as it is always a identifier

        std::string location = context.allocateVariable(newEntry->getName());

        dst << "sw " << destReg << ", " << location << "(sp)" << std::endl;
        //at this point, we assume all parameters are in memory, so we free all argument registers
        context.deallocateN(destReg);
        theRest->makeRISC(dst, context, context.incArgReg(destReg));

    }

    void visualise(std::ostream& dst) const override {
        dst << "Parameters: " << std::endl;
        newEntry->visualise(dst);
        dst << std::endl;
        theRest->visualise(dst);
        dst << std::endl;

    }

};


class Declarator
    :public Node
{
    private:
    NodePtr directDeclarator;
    public:
    Declarator(NodePtr _directDeclarator)
        :directDeclarator(_directDeclarator)
    {}
    ~Declarator()
    {
        delete directDeclarator;
    }
    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //the Direct Declarator for this is either an initaliser, or a initialiser + param list
        //this block just stops functionStart from taking the function name as a function parameter
        directDeclarator->makeRISC(dst, context, destReg);
    }
    void visualise(std::ostream &dst) const override {
        dst << "Call for: " << directDeclarator->getName() << std::endl;
        //dst << "With Parameters: " << std::endl;
        directDeclarator->visualise(dst);
    }
    std::string getName() const override {
        return directDeclarator->getName();
    }

};


class ArgumentList
    :public Node
{
    private:
    NodePtr prevArg;
    NodePtr newArg;

    public:
    ArgumentList(NodePtr _newArg, NodePtr _prevArg)
        :prevArg(_prevArg), newArg(_newArg)
    {}
    ~ArgumentList()
    {
        delete prevArg;
        delete newArg;
    }
    void makeRISC (std::ostream &dst, Context &context, const std::string& destReg) const override {
        //need to make the new argument, then do all the other arguments

        //as this is the arguments list, we do the same thing where we start with register a0, and
        //then load all the values sequentially into each register

        //load the current Argument into destReg
        newArg->makeRISC(dst, context, destReg);

        prevArg->makeRISC(dst, context, context.incArgReg(destReg));
    }
    void visualise(std::ostream& dst) const override {
        dst << "Argument: ";
        newArg->visualise(dst);
        dst << std::endl;
        prevArg->visualise(dst);

    }

};
