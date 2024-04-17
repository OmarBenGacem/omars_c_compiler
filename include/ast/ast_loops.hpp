#pragma once

#include "ast_node.hpp"


class WhileLoop
    :public Node
{

    private:
    NodePtr condition;
    NodePtr code;

    public:
    WhileLoop(NodePtr _condition, NodePtr _code)
        : condition(_condition), code(_code)
    {}

    ~WhileLoop()
    {
        delete condition;
        delete code;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
/*
        std::cerr << "in while loop" << std::endl;
        //need to create a new subroutine with the code,
        std::string conditionReg = context.getRegN();
        std::string endLoop = context.getName("exit");
        std::string conditionLoop = context.getName("conditionLoop");
        //go into the loop:
        //dst << "j ." << conditionLoop <<std::endl;

        //create the CONDITION loop
        dst << "." << conditionLoop << ":" << std::endl;
        //need to evaluate the condition now

        condition->makeRISC(dst, context, conditionReg);
        dst << "beq " << conditionReg << ", zero" << ", ." << endLoop << std::endl;
        condition->makeRISC(dst, context, conditionReg);
        dst << "j ." << conditionLoop << std::endl;
        //making the code loop
        dst << "." << endLoop << ":" << std::endl;




        context.deallocateN(conditionReg);
*/
    }

    void visualise(std::ostream& dst) const override {
        dst << "While: ";
        //condition->visualise(dst);
        dst << "[" << std::endl;
        //code->visualise(dst);
        dst << "]" << std::endl << std::endl;

    }

};


class ForLong
    :public Node
{

    private:
    NodePtr variable;
    NodePtr stopCon;
    NodePtr incCond;
    NodePtr code;

    public:
    ForLong(NodePtr _variable, NodePtr _stopCon, NodePtr _incCond, NodePtr _code)
        : variable(_variable), stopCon(_stopCon), incCond(_incCond), code(_code)
    {}
    ~ForLong()
    {
        delete variable;
        delete stopCon;
        delete incCond;
        delete code;
    }
    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //get a register to hold the variable and the condition
        std::string counterReg = context.getRegN();
        std::string condReg = context.getRegN();
        std::string tempReg = context.getRegN();

        //assign the initial variable value
        variable->makeRISC(dst, context, counterReg);

        //create the loops:
        std::string loopName = context.getName("CheckLoop");
        std::string DoName = context.getName("DoLoop");
        //jump to "check Loop"
        dst << "j ." << loopName << std::endl;

        //define Do loop
        dst << "." << DoName << ":" << std::endl;
        code->makeRISC(dst, context, destReg);
        //increment the loop
        incCond->makeRISC(dst, context, counterReg);

        //define condition loop
        dst << "." << loopName << ":" << std::endl;
        stopCon->makeRISC(dst, context, condReg);
        dst << "addi " << tempReg << ", " << condReg << ", -1" << std::endl;
        dst << "bne " << tempReg << ", zero, ." << DoName << std::endl;


        dst << "ret" << std::endl;


        context.deallocateN(counterReg);
        context.deallocateN(condReg);
        context.deallocateN(tempReg);
    }
    void visualise(std::ostream &dst) const override {
        dst << "for Loop" << std::endl;
    }



};
