#pragma once

#include "ast_Node.hpp"


class IfStmt
    :public Node
{

    private:
    NodePtr condition;
    NodePtr code;

    public:
    IfStmt(NodePtr _condition, NodePtr _code)
        : condition(_condition), code(_code)
    {}

    ~IfStmt(){
        delete condition;
        delete code;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {

        //assign a temporary register to the conditional value
        std::string temp = context.getRegN();
        //get the value (1 or 0) of the condition
        condition->makeRISC(dst, context, temp);

        //need a register to see if the condition was passed, so  this will hold "1"
        std::string one = context.getRegN();
        dst << "li " << one << ", 1" << std::endl;

        //need the name of the branch for equals and notequals
        std::string equals = context.getName("equals");
        dst << "beq " << temp << ", " << one << ",  ." << equals << std::endl;

        //print the header for the equals branch
        dst << "." << equals << ":" << std::endl;
        code->makeRISC(dst, context, destReg);


        //free all used registers
        context.deallocateN(temp);
        context.deallocateN(one);


    }

    void visualise(std::ostream &dst) const override {
        dst << "if: ";
        condition->visualise(dst);
        dst << "run: ";
        code->visualise(dst);
        dst << std::endl;

    }
};




class IfElse
    :public Node
{

private:
    NodePtr condition;
    NodePtr code1;
    NodePtr code0;

public:
    IfElse(NodePtr _condition, NodePtr _code1, NodePtr _code0)
        : condition(_condition), code1(_code1), code0(_code0)
    {}

    ~IfElse(){
        delete condition;
        delete code1;
        delete code0;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //assign a temporary register to the conditional value
        std::string temp = context.getRegN();
        //get the value (1 or 0) of the condition
        condition->makeRISC(dst, context, temp);

        //need a register to see if the condition was passed, so  this will hold "1"
        std::string one = context.getRegN();
        dst << "li " << one << ", 1" << std::endl;

        //need the name of the branch for equals and notequals
        std::string equals = context.getName("equals");
        std::string notEquals = context.getName("notEquals");

        //bit of a lazy way of doing it, but it woll go to one of the two branches
        dst << "beq " << temp << ", " << one << ",  ." << equals << std::endl;
        dst << "bne " << temp << ", " << one << ",  ." << notEquals << std::endl;

        //print the header for the equals branch
        dst << "." << equals << ":" << std::endl;
        code1->makeRISC(dst, context, destReg);

        //print the not equal branch
        dst << "." << notEquals << ":" <<std::endl;
        code0->makeRISC(dst, context, destReg);


        //free all used registers
        context.deallocateN(temp);
        context.deallocateN(one);
    }

    void visualise(std::ostream &dst) const override {
        dst << "if: ";
        condition->visualise(dst);
        dst << "run: ";
        code1->visualise(dst);
        dst << std::endl << "else: " << std::endl;
        code0->visualise(dst);
        dst << std::endl;
    }
};
