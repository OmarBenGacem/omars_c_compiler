#include "utility.hpp"

#ifdef ast_types_hpp
#define ast_types_hpp

class type_int
    :public Node
{
    public:
    type_int() : Node("int")
    {}
};

class type_float
    :public Node
{
    public:
    type_float() : Node("float")
    {}
};

class type_double
    :public Node
{
    public:
    type_double() : Node("double")
    {}
};

class type_string
    :public Node
{
    public:
    type_string() : Node("string")
    {}
};

class type_char
    :public Node
{
    public:
    type_char() : Node("char")
    {}
};

class type_bool
    :public Node
{
    public:
    type_bool() : Node("bool")
    {}
};

class type_long

    :public Node
{
    public:
    type_long() : Node("long")
    {}
};
class type_void
    :public Node
{
    public:
    type_void() : Node("void")
    {}
};

#endif 