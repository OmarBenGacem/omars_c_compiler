#pragma once

#include "ast_node.hpp"

class AndExpression
    :public Node
{
    private:
    NodePtr left;
    NodePtr right;

    public:
    AndExpression(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~AndExpression() override {
        delete left;
        delete right;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //first put the left value into the destination Register
        left->makeRISC(dst, context, destReg);
        //now put the "right" value into a temporary register
        std::string rightTemp = context.getRegN();
        right->makeRISC(dst, context, rightTemp);

        dst << "and " << destReg << ", " << destReg << ", " << rightTemp << std::endl;

        //now can Free the Temporary Register
        context.deallocateN(rightTemp);
    }

    void visualise(std::ostream& dst) const override {
        dst << "and left[" << std::endl;
        left->visualise(dst);
        dst << "]" << std::endl;
        dst << "right[" << std::endl;
        right->visualise(dst);
        dst << "]" << std::endl;

    }


};

class OrExpression
    :public Node
{
    private:
    NodePtr left;
    NodePtr right;

    public:
    OrExpression(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~OrExpression() override {
        delete left;
        delete right;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //first put the left value into the destination Register
        left->makeRISC(dst, context, destReg);
        //now put the "right" value into a temporary register
        std::string rightTemp = context.getRegN();
        right->makeRISC(dst, context, rightTemp);

        dst << "or " << destReg << ", " << destReg << ", " << rightTemp << std::endl;

        //now can Free the Temporary Register
        context.deallocateN(rightTemp);
    }

    void visualise(std::ostream& dst) const override {
        dst << "or left[" << std::endl;
        left->visualise(dst);
        dst << "]" << std::endl;
        dst << "right[" << std::endl;
        right->visualise(dst);
        dst << "]" << std::endl;

    }


};

class XorExpression
    :public Node
{
    private:
    NodePtr left;
    NodePtr right;

    public:
    XorExpression(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~XorExpression() override {
        delete left;
        delete right;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //first put the left value into the destination Register
        left->makeRISC(dst, context, destReg);
        //now put the "right" value into a temporary register
        std::string rightTemp = context.getRegN();
        right->makeRISC(dst, context, rightTemp);

        dst << "xor " << destReg << ", " << destReg << ", " << rightTemp << std::endl;

        //now can Free the Temporary Register
        context.deallocateN(rightTemp);
    }

    void visualise(std::ostream& dst) const override {
        dst << "xor left[" << std::endl;
        left->visualise(dst);
        dst << "]" << std::endl;
        dst << "right[" << std::endl;
        right->visualise(dst);
        dst << "]" << std::endl;

    }


};


class LogicalAndExpression
    :public Node
{
    private:
    NodePtr left;
    NodePtr right;

    public:
    LogicalAndExpression(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~LogicalAndExpression() override {
        delete left;
        delete right;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //first put the left value into the destination Register
        left->makeRISC(dst, context, destReg);
        //now put the "right" value into a temporary register
        std::string rightTemp = context.getRegN();
        right->makeRISC(dst, context, rightTemp);

        dst << "and " << destReg << ", " << destReg << ", " << rightTemp << std::endl;

        //now can Free the Temporary Register
        context.deallocateN(rightTemp);
    }

    void visualise(std::ostream& dst) const override {
        dst << "andi left[" << std::endl;
        left->visualise(dst);
        dst << "]" << std::endl;
        dst << "right[" << std::endl;
        right->visualise(dst);
        dst << "]" << std::endl;

    }


};


class LogicalOrExpression
    :public Node
{
    private:
    NodePtr left;
    NodePtr right;

    public:
    LogicalOrExpression(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~LogicalOrExpression() override {
        delete left;
        delete right;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //first put the left value into the destination Register
        left->makeRISC(dst, context, destReg);
        //now put the "right" value into a temporary register
        std::string rightTemp = context.getRegN();
        right->makeRISC(dst, context, rightTemp);

        dst << "or " << destReg << ", " << destReg << ", " << rightTemp << std::endl;

        //now can Free the Temporary Register
        context.deallocateN(rightTemp);
    }

    void visualise(std::ostream& dst) const override {
        dst << "ori left[" << std::endl;
        left->visualise(dst);
        dst << "]" << std::endl;
        dst << "right[" << std::endl;
        right->visualise(dst);
        dst << "]" << std::endl;

    }


};
