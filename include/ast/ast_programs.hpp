#pragma once

#include "ast_node.hpp"

class ProgramPair
    :public Node
{
    private:
    NodePtr left;
    NodePtr right;

    public:
    ProgramPair(NodePtr _left, NodePtr _right)
        : left(_left), right(_right)
    {}

    ~ProgramPair() override
    {
        delete left;
        delete right;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //do the first program in the sequence
        left->makeRISC(dst, context, destReg);
        //do the second program in the sequence
        right->makeRISC(dst, context, destReg);
    }

    void visualise(std::ostream& dst) const override {
        dst << "Excuting: " << std::endl;
        left->visualise(dst);
        dst << std::endl;
        dst << "Excuting: " << std::endl;
        right->visualise(dst);
        dst << std::endl;


    }


};


class DeclarationPair
    :public Node
{
    private:
    NodePtr newStuff;
    NodePtr oldStuff;

    public:
    DeclarationPair(NodePtr _newStuff, NodePtr _oldStuff)
        :newStuff(_newStuff), oldStuff(_oldStuff)
    {}
    ~DeclarationPair(){
        delete newStuff;
        delete oldStuff;
    }

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //newStuff is always a declaration, so can do that

        //they are in the opposite order just so the code goes top->bottom

        //initialise the rest of the list
        oldStuff->makeRISC(dst, context, destReg);

         //initialise current Declaration
        newStuff->makeRISC(dst, context, destReg);
    }
    void visualise(std::ostream &dst) const override {
        oldStuff->visualise(dst);
        dst << std::endl;
        dst << "Defining: [" << std::endl;
        newStuff->visualise(dst);
        //dst << "]" << std::endl;
        dst << std::endl;

    }

};

class DoNothing
    :public Node
{
    private:


    public:
    DoNothing() {}


    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override
    {}
    void visualise(std::ostream &dst) const override {
        dst << "Doing Nothing" << std::endl;
    }

};



class StatementPair
    :public Node
{

};
