#pragma once

#include "ast_node.hpp"




class Number
    :public Node
{
private:
    int value;
public:
    Number(int numb)
        : value(numb)
    {}

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override
    {
        if (value < 20480) {
            dst << "li " << destReg << "," << value <<std::endl;
        } else {
            dst << "li " << destReg << "," << "20480" << std::endl;
            int offset = 20480 - value;
            dst << "addi " << destReg <<", " << std::to_string(offset) << std::endl;
        }


    }

    void visualise(std::ostream &dst) const override {
        dst << "Number: " << value;
    }

};




class Identifier
    :public Node
{

    private:
    std::string name;

    public:
    Identifier(std::string _name)
        :name(_name)
    {}

    ~Identifier() override
    {}

    void makeRISC(std::ostream &dst, Context &context, const std::string& destReg) const override {
        //Identifier is like a "name", you can't rlly riscV it
        //you may be looking for variable

        dst << "lw " << destReg << ", " << context.allocateVariable(name) << "(sp)" << std::endl;

        //in assignment is where you load it into memory
    }

    std::string getName() const override {
        return name;
    }

    void visualise(std::ostream& dst) const override {
        dst << "Variable: " << name << std::endl;

    }

};
