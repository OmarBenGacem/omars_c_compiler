#ifndef ast_maths_hpp
#define ast_maths_hpp


class multiplication_expression
    :public Node
{
    private:
    NodePtr left;
    NodePtr right;
    public:
    multiplication_expression( NodePtr _left, NodePtr _right)
    : Node("multiplication_expression")
        {
            left = _left;
            right = _right;
        }
    void makeRISC(std::ostream &dst) {

        //get the value on the left, and have it's output stored in t0
        left->makeRISC(dst);
        std::string tempRight = nextReg();
        dst << "mov " << tempRight << " a0" << std::endl;

        //get the value on the right and have it's output stored in t2
        left-> makeRISC(dst);
        std::string tempLeft = nextReg();
        dst << "mov " << tempLeft << " a0" << std::endl;  

        
        //now to multiply:
        //std::string thisLoop = ":mul" + uniqueStr();
        dst << ":mul" << uniqueStr() << std::endl;;
        dst << "add a0 a0 " << tempRight << std::endl;  
        dst << "sub " << tempLeft << " #1" << std::endl;
        dst << "bne a0 0 " << ":mul" << uniqueStr() << std::endl;

        removeReg(tempLeft);
        removeReg(tempRight);
    }
};


class division_expression
    :public Node
{
    private:
    NodePtr left;
    NodePtr right;
    public:
    division_expression( NodePtr _left, NodePtr _right)
    : Node("division_expression")
        {
            left = _left;
            right = _right;
        }
    void makeRISC(std::ostream &dst) {
        
        //get the value on the left, and have it's output stored in t0
        left->makeRISC(dst);
        std::string tempRight = nextReg();
        dst << "mov " << tempRight << " a0" << std::endl;

        //get the value on the right and have it's output stored in t2
        left-> makeRISC(dst);
        std::string tempLeft = nextReg();
        dst << "mov " << tempLeft << " a0" << std::endl;  

        dst << "mov a0 #0" << std::endl;

        //std::string thisLoop = ":div" + uniqueStr();
        dst << ":div" << uniqueStr() << std::endl;
        dst << "sub " << tempLeft << " " << tempLeft << " " << tempRight <<std::endl;
        dst << "add a0 #1" << std::endl;
        dst << "ble a0 0 " << ":div" << uniqueStr() << std::endl; 

        removeReg(tempRight);
        removeReg(tempLeft);

    }
};


class modulus_expression
    :public Node
{
    private:
    NodePtr left;
    NodePtr right;
    public:
    modulus_expression( NodePtr _left, NodePtr _right)
    : Node("modulus_expression")
        {
            left = _left;
            right = _right;
        }
};

class add_expression
    :public Node
{
    private:
    NodePtr left;
    NodePtr right;
    public:
    add_expression(NodePtr _left, NodePtr _right)
    : Node("addition")
        {

            left = _left;
            right = _right;
        }
    void makeRISC(std::ostream &dst) {

        //calculates a result and stores it in a0
        left->makeRISC(dst);
        //move the result into t1
        std::string tempLeft = nextReg();
        dst << "mov " << tempLeft << " a0" <<std::endl;

        //new result is already in a0, so keep there and add tempLeft
        right->makeRISC(dst);
        dst << "add a0 a0 " << tempLeft << std::endl;


        removeReg(tempLeft);

    }
};

class sub_expression
    :public Node
{
    private:
    NodePtr left;
    NodePtr right;
    public:
    sub_expression( NodePtr _left, NodePtr _right)
    : Node("subtraction")
        {
            left = _left;
            right = _right;
        }
    void makeRISC(std::ostream &dst) {
        
        //calculates a result and stores it in a0
        right->makeRISC(dst);
        //move the result into t1
        std::string tempRight = nextReg();
        dst << "mov " << tempRight << " a0" <<std::endl;

        //new result is already in a0, so keep there and add tempLeft
        left->makeRISC(dst);
        dst << "sub a0 a0 " << tempRight << std::endl;


        removeReg(tempRight); 
    }
};

#endif