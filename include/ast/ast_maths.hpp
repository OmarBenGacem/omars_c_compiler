#pragma once

#include "ast_node.hpp"

class AddExpression
    :public Node
{
    private:
    NodePtr left;
    NodePtr right;

    public:
    AddExpression(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~AddExpression() override {
        delete left;
        delete right;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //first put the left value into the destination Register
        left->makeRISC(dst, context, destReg);
        //now put the "right" value into a temporary register
        std::string rightTemp = context.getRegN();
        right->makeRISC(dst, context, rightTemp);

        dst << "add " << destReg << ", " << destReg << ", " << rightTemp << std::endl;

        //now can Free the Temporary Register
        context.deallocateN(rightTemp);
    }

    void visualise(std::ostream& dst) const override {
        dst << "Add left [ ";
        left->visualise(dst);
        dst << " right [ " ;
        right->visualise(dst);
        dst << "]" << std::endl;

    }


};


class SubExpression
    :public Node
{
    private:
    NodePtr left;
    NodePtr right;

    public:
    SubExpression(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~SubExpression() override {
        delete left;
        delete right;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //first put the left value into the destination Register
        left->makeRISC(dst, context, destReg);
        //now put the "right" value into a temporary register
        std::string rightTemp = context.getRegN();
        right->makeRISC(dst, context, rightTemp);

        dst << "sub " << destReg << ", " << rightTemp << ", " << destReg << std::endl;

        //now can Free the Temporary Register
        context.deallocateN(rightTemp);
    }

    void visualise(std::ostream& dst) const override {
        dst << "Sub left [ ";
        left->visualise(dst);
        dst << " right [ ";
        right->visualise(dst);
        dst << "]" << std::endl;

    }


};


class MulExpression
    :public Node
{
    private:
    NodePtr left;
    NodePtr right;

    public:
    MulExpression(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~MulExpression() override {
        delete left;
        delete right;
    }
    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //Multiplication by Repeated Addition:

        //Put the left value into the output register
        left->makeRISC(dst, context, destReg);
        //the Left Value is now in the register (this is multiplying by 1)

        //load the other value "how many times to multiply"
        std::string rightTemp = context.getRegN();
        right->makeRISC(dst, context, rightTemp);

        std::string loop = context.getName("mul");

        dst << "mul " << destReg << ", " << destReg << ", " << rightTemp << std::endl;

        context.deallocateN(rightTemp);




    }
    void visualise(std::ostream& dst) const override {
        dst << "Mul left[" << std::endl;
        left->visualise(dst);
        dst << "right[" << std::endl;
        right->visualise(dst);
        dst << "]" << std::endl;

    }


};

class DivExpression
    :public Node
{
    private:
    NodePtr left;
    NodePtr right;

    public:
    DivExpression(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~DivExpression() override {
        delete left;
        delete right;
    }
    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //Multiplication by Repeated Addition:

        //Put the left value into the output register
        right->makeRISC(dst, context, destReg);
        //the Left Value is now in the register (this is multiplying by 1)

        //load the other value "how many times to multiply"
        std::string rightTemp = context.getRegN();
        left->makeRISC(dst, context, rightTemp);

        std::string loop = context.getName("div");

        dst << "div " << destReg << ", " << destReg << ", " << rightTemp << std::endl;

        context.deallocateN(rightTemp);




    }
    void visualise(std::ostream& dst) const override {
        dst << "Div left[" << std::endl;
        left->visualise(dst);
        dst << "right[" << std::endl;
        right->visualise(dst);
        dst << "]" << std::endl;

    }


};
