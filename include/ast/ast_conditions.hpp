#pragma once

#include "ast_Node.hpp"


//takes two nodes, and puts in the destination register if they are equal
class EqualComp
    :public Node
{

private:
    NodePtr left;
    NodePtr right;

public:
    EqualComp(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~EqualComp(){
        delete left;
        delete right;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {

        //these are the two registers to put the got values into
        //std::string tempUno = context.getRegN(); <-- not needed
        std::string tempDos = context.getRegN();

        //load the values in
        left->makeRISC(dst, context, destReg);
        right->makeRISC(dst, context, tempDos);

        dst << "sub " << destReg << ", " << destReg << ", " << tempDos << std::endl;


        //seqz = "set if equal to zero"
        dst << "seqz " << destReg << ", " << destReg << std::endl;
        dst << "andi " << destReg << ", " << destReg << ", 0xff" << std::endl;

        //deallocate used registers
        context.deallocateN(tempDos);

    }

    void visualise(std::ostream &dst) const override {
        dst << "Comparing: [" << std::endl;
        left->visualise(dst);
        dst << "==" << std::endl;
        right->visualise(dst);
        dst << "]" << std::endl;
    }

};



class NEqualComp
    :public Node
{

private:
    NodePtr left;
    NodePtr right;

public:
    NEqualComp(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~NEqualComp(){
        delete left;
        delete right;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {

        //these are the two registers to put the got values into
        //std::string tempUno = context.getRegN(); <-- not needed
        std::string tempDos = context.getRegN();

        //load the values in
        left->makeRISC(dst, context, destReg);
        right->makeRISC(dst, context, tempDos);

        dst << "sub " << destReg << ", " << destReg << ", " << tempDos << std::endl;


        //seqz = "set if not equal to zero"
        dst << "snez " << destReg << ", " << destReg << std::endl;
        dst << "andi " << destReg << ", " << destReg << ", 0xff" << std::endl;

        //deallocate used registers
        context.deallocateN(tempDos);
        //comment because I need to commit
    }

    void visualise(std::ostream &dst) const override {
        dst << "Comparing: [" << std::endl;
        left->visualise(dst);
        dst << "==" << std::endl;
        right->visualise(dst);
        dst << "]" << std::endl;
    }

};


class GreaterThan
    :public Node
{

private:
    NodePtr left;
    NodePtr right;

public:
    GreaterThan(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~GreaterThan(){
        delete left;
        delete right;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {

        //these are the two registers to put the got values into
        //std::string tempUno = context.getRegN(); <-- not needed
        std::string tempDos = context.getRegN();

        //load the values in
        left->makeRISC(dst, context, destReg);
        right->makeRISC(dst, context, tempDos);

       dst << "sgt " << destReg << ", " << tempDos << ", "<< destReg << std::endl;
        //deallocate used registers
        context.deallocateN(tempDos);

    }

    void visualise(std::ostream &dst) const override {
        dst << "Comparing: [" << std::endl;
        left->visualise(dst);
        dst << ">" << std::endl;
        right->visualise(dst);
        dst << "]" << std::endl;
    }

};

class GreaterThanEQ
    :public Node
{

private:
    NodePtr left;
    NodePtr right;

public:
    GreaterThanEQ(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~GreaterThanEQ(){
        delete left;
        delete right;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {

        //these are the two registers to put the got values into
        //std::string tempUno = context.getRegN(); <-- not needed
        std::string tempDos = context.getRegN();

        //load the values in
        left->makeRISC(dst, context, destReg);
        right->makeRISC(dst, context, tempDos);

        dst << "slt " << destReg << ", " << tempDos << ", " << destReg << std::endl;
        dst << "xori " << destReg << ", " << destReg << ", 1" << std::endl;
        dst << "andi " << destReg << ", " << destReg << ", 0xff" << std::endl;

        //deallocate used registers
        context.deallocateN(tempDos);

    }

    void visualise(std::ostream &dst) const override {
        dst << "Comparing: [" << std::endl;
        left->visualise(dst);
        dst << ">" << std::endl;
        right->visualise(dst);
        dst << "]" << std::endl;
    }

};



class LessThan
    :public Node
{

private:
    NodePtr left;
    NodePtr right;

public:
    LessThan(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~LessThan(){
        delete left;
        delete right;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {

        //these are the two registers to put the got values into
        //std::string tempUno = context.getRegN(); <-- not needed
        std::string tempDos = context.getRegN();

        //load the values in
        left->makeRISC(dst, context, destReg);
        right->makeRISC(dst, context, tempDos);

       dst << "slt " << destReg << ", " << tempDos << ", "<< destReg << std::endl;
       dst << "andi " << destReg << ", " << destReg << ", 0xff" << std::endl;
        //deallocate used registers
        context.deallocateN(tempDos);

    }

    void visualise(std::ostream &dst) const override {
        dst << "Comparing: [" << std::endl;
        left->visualise(dst);
        dst << "<" << std::endl;
        right->visualise(dst);
        dst << "]" << std::endl;
    }

};

class LessThanEQ
    :public Node
{

private:
    NodePtr left;
    NodePtr right;

public:
    LessThanEQ(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~LessThanEQ(){
        delete left;
        delete right;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {

        //these are the two registers to put the got values into
        //std::string tempUno = context.getRegN(); <-- not needed
        std::string tempDos = context.getRegN();

        //load the values in
        left->makeRISC(dst, context, destReg);
        right->makeRISC(dst, context, tempDos);

       dst << "sgt " << destReg << ", " << tempDos << ", "<< destReg << std::endl;
       dst << "xori " << destReg << ", " << destReg << ", 1" << std::endl;
       dst << "andi " << destReg << ", " << destReg << ", 0xff" << std::endl;
        //deallocate used registers
        context.deallocateN(tempDos);

    }

    void visualise(std::ostream &dst) const override {
        dst << "Comparing: [" << std::endl;
        left->visualise(dst);
        dst << "<=" << std::endl;
        right->visualise(dst);
        dst << "]" << std::endl;
    }

};
