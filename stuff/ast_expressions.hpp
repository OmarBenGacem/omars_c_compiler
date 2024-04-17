
#include "utility.hpp"

#ifndef ast_expressions_hpp
#define ast_expressions_hpp



class increment_operator
    :public Node
{
    public:
    increment_operator(std::string* character) : Node("character")
    {}
};

class increment_statement
    :public Node
{
    private:
    NodePtr op;
    public:
    
    increment_statement(std::string* _name, NodePtr _op)
    : Node ("_name")
    {
        op = _op;
    }
};


class program
    :public Node
{
    private:
    NodePtr PartUno;
    NodePtr PartDos;
    public:
    program(NodePtr _expr1, NodePtr _expr2)
    :Node("program")
    {
        PartUno = _expr1;
        PartDos = _expr2;
    }
    void makeRISC(std::ostream &dst) {
        PartUno->makeRISC(dst);
        PartDos->makeRISC(dst);
    }
};

class singular_program
    :public Node
{
    private:
    NodePtr program;
    public:
    singular_program(NodePtr _expr) 
    : Node("singular_program")
    {
        program = _expr;
    }
    void makeRISC(std::ostream &dst) {
        program->makeRISC(dst);
    }
};

class binary_expression
    :public Node
{
    private:
    NodePtr declaration;
    NodePtr expression;
    public:
    binary_expression(NodePtr _declaration, NodePtr _expression) 
    : Node("binary_expression")
    {
        declaration = _declaration;
        expression = _expression;
    }
    void makeRISC(std::ostream &dst) {
        declaration->makeRISC(dst);
        expression->makeRISC(dst);
    }
};


#endif