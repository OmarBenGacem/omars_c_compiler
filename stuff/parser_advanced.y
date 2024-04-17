%code requires{
  #include "ast.hpp"

  #include <cassert>

  extern const Expression *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);
}

// Represents the value associated with any kind of
// AST node.
%union{
  const Expression *expr;
  double number;
  std::string *string;
}

%token T_TIMES T_DIVIDE T_PLUS T_MINUS T_EXPONENT STMNT EXPR
%token T_LBRACKET T_RBRACKET 
%token T_NUMBER T_VARIABLE
%token T_INT T_CHAR T_STRING T_DOUBLE T_FLOAT T_BOOL 
%token T_IF T_WHILE T_ELSE T_FOR


//what do the <...> mean?
%type <expr> FACTOR selection_statement
%type <number> T_NUMBER
%type <string> T_VARIABLE T_LOG T_EXP T_SQRT FUNCTION_NAME
%type <dataTypes> T_INT T_CHAR T_STRING T_DOUBLE T_FLOAT 

%start ROOT

%%



/* 
   This is the C Parser, it will parse the code given a input, and 
   follows the guidlines given in the link below:
   https://www.lysator.liu.se/c/ANSI-C-grammar-y.html
*/

ROOT : EXPR { g_root = $1; }


selection_statement : T_IF '(' EXPR ')' statement                     {}
	                  | T_IF '(' EXPR ')' statement T_ELSE statement    {}
                    ;                   

iteration_statement : T_FOR '(' expression_statement expression_statement expression ')' statement   {}
                    | T_WHILE '(' expression ')' statement                                           {}
                    ;

declaration : declaration_specificers ";"   {}
            | '(' constant_expression ')'   {}
            | '(' identifier_list ')'       {}
            ;

declaration_specifiers : data_type type_name {}
                       |
                       ;

identifier_list : IDENTIFIER                      {}
                | identifier_list ',' identifier  {}
                ;

cast_expression : "(" data_type ")" primary_expression {}


assignment_expression : data_type assignment_operator assignment_expression;
                      | conditional_expression
                      ;

unary_expression :
                 |
                 |
                 |
                 ;

conditional_expression: logic_or_expression                                             {}
                      | logic_or_expression '?' expression ':' conditional_expression   {}
                      ;

logic_or_expression: logical_and_expression
                   | logical_or_expression T_OR logical_and_expression
                   ;

logic_and_expression: inclusive_or

function_definitions : declarator declaration_list compound_statement           {}
                     | declaration_specifiers declarator compound_statement     {}
                     | declaration compound_statement                           {}
                     ;

//text = '"' + word + '"'    <- regex
//constant = number
primary_expression : STRING_LITERAL   {}
                   | CONSTANT         {}
                   | IDENTIFIER       {}
                   |
                   ;

data_type : T_INT       {}
          | T_FLOAT     {}
          | T_DOUBLE    {}
          | T_STRING    {}
          | T_CHAR      {}
          | T_BOOL      {}
          | T_LONG      {}
          ;

compound_statement : '{' '}'                                 {} 
                   | '{' statement_list '}'                  {}
                   | '{' declaration_list '}'                {}
                   ;
                   //| '{' declaration_list statement_list '}' {}
                   

expression : ; {}
           | statement {};
           ;

assignment_operator: '=' {}
                   ;


%%

const Expression *g_root; // Definition of variable (to match declaration earlier)

const Expression *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}