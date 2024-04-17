#include "utility.hpp"

#ifndef ast_assign_hpp
#define ast_assign_hpp


class assignment_operator
    :public Node
{
    public:
    assignment_operator() : Node("=")
    //this is the primative case
    {}
};

class assignment_expression
    :public Node
{
    private:
    NodePtr expression;
    std::string name;
    int address;
    public:
    assignment_expression(NodePtr _declaration, NodePtr _expression) 
    : Node("assignment_expression")
    {
        expression = _expression;

        name = _declaration->getName();

        //putting function value into memory
        
    }

    //indirect Assignment
    assignment_expression(std::string* _name, NodePtr _expression) 
    : Node("assignment_expression")
    {
        expression = _expression;
        name = *_name;

        //now need to put this in memory
        address = UpdateMemory(name);
    }
    void makeRISC(std::ostream &dst) {
        //all that needs to happen is to load this into memory
        expression->makeRISC(dst);
        dst <<"sw a0 " << std::to_string(stackOffset) << "(" << std::to_string(address) << ")" <<std::endl; 

    }
    void loadtoazero(std::ostream &dst) {
        
        dst <<"lw a0 " << std::to_string(stackOffset) << "(" << std::to_string(address) << ")" <<std::endl;      

    }

};

class declaration
    :public Node
{
    private:
    std::string name;
    NodePtr thing;
    public:
    declaration(NodePtr declaration_expression) : Node("declaration")
    {
        name = declaration_expression->getName();
        thing = declaration_expression;
    }
    std::string getName()
    {
        return name;
    }
    void makeRISC(std::ostream &dst) {
        thing->makeRISC(dst);
    }
};

class declaration_list
    :public Node
{
    private:
    NodePtr theRest;
    NodePtr newOne;
    //FIX: currently is only the name of the "new one"
    std::string name;
    public:
    declaration_list(NodePtr _theRest, NodePtr _newOne) 
    : Node("declaration_list") 
    {
        theRest = _theRest;
        newOne = _newOne;
        name = newOne->getName();
    }
    std::string getName() 
    {
        return name;
    }
};

class declaration_expression
    :public Node
{
    public:
    NodePtr type;
    std::string name;
    public:
    declaration_expression(NodePtr _type, std::string* _name) 
    : Node("declaration_expression")
    {
        type = _type;
        name = *_name;
    }
    std::string getName() {
        return name;
    }

};

#endif