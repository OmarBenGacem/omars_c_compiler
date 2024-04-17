%code requires{
  #include "ast.hpp"
  //#include "lex.yy.c"
  #include <cassert>


extern Node *g_root; // A way of getting the AST out
//extern FILE *yyin;


//RUNNING THE PARSER:
//https://www.geeksforgeeks.org/introduction-to-yacc/


  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);
}

// Represents the value associated with any kind of
// AST node.
%union{
  NodePtr node;

  //double number;
  std::string *string;
  yytokentype token;
  int number;
  double numberFloat;
}


%token IDENTIFIER NUMBER FLOAT_NUMBER STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%type <node> function_definition compound_statement translation_unit jump_statement type_specifier
%type <node> primary_expression postfix_expression unary_expression cast_expression multiplicative_expression
%type <node> equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression
%type <node> statement_list logical_or_expression conditional_expression assignment_expression expression
%type <node> labeled_statement statement expression_statement selection_statement iteration_statement
%type <node> external_declaration program declarator direct_declarator parameter_declaration parameter_list
%type <node> additive_expression shift_expression relational_expression or_expression
%type <node> direct_abstract_declarator abstract_declarator declaration_specifiers parameter_type_list
%type <node> declaration init_declarator_list init_declarator initializer declaration_list
%type <node> argument_expression_list


%type <string> IDENTIFIER
%type <number> NUMBER
%type <numberFloat> FLOAT_NUMBER

%start program
%%

primary_expression
	: IDENTIFIER				{ $$ = new Identifier( *$1 ); }
	| NUMBER 					{ $$ = new Number($1); }
  	| FLOAT_NUMBER
	| STRING_LITERAL
	| '(' expression ')'
	;

postfix_expression
	: primary_expression { $$ = $1; }
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'						  { $$ = new FunctionCall($1, new DoNothing() ); }
	| postfix_expression '(' argument_expression_list ')' { $$ = new FunctionCall($1, $3); }
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression  { $$ = new ArgumentList($3, $1); 	}

unary_expression
	: postfix_expression { $$ = $1; }
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression { $$ = $1; }
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression { $$ = $1; }
	| multiplicative_expression '*' cast_expression { $$ = new MulExpression($1, $3); }
	| multiplicative_expression '/' cast_expression  { $$ = new DivExpression($1, $3); }
	| multiplicative_expression '%' cast_expression
	;

additive_expression
	: multiplicative_expression { $$ = $1; }
	| additive_expression '+' multiplicative_expression { $$ = new AddExpression($1, $3); }
	| additive_expression '-' multiplicative_expression { $$ = new SubExpression($1, $3); }
	;

shift_expression
	: additive_expression { $$ = $1; }
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression { $$ = $1; }
	| relational_expression '<' shift_expression	{$$ = new LessThan($1, $3); }
	| relational_expression '>' shift_expression	{ $$ = new GreaterThan($1, $3); }
	| relational_expression LE_OP shift_expression  { $$ = new LessThanEQ($1, $3); }
	| relational_expression GE_OP shift_expression  { $$ = new GreaterThanEQ($1, $3); }
	;

equality_expression
	: relational_expression { $$ = $1; }
	| equality_expression EQ_OP relational_expression { $$ = new EqualComp($1, $3); }
	| equality_expression NE_OP relational_expression {$$ = new NEqualComp($1, $3); }
	;

and_expression
	: equality_expression { $$ = $1; }
	| and_expression '&' equality_expression { $$ = new AndExpression($1, $3); }
	;


exclusive_or_expression
	: and_expression { $$ = $1; }
	| exclusive_or_expression '^' and_expression {$$ = new XorExpression($1, $3); }
	;

inclusive_or_expression
	: exclusive_or_expression { $$ = $1; }
	| inclusive_or_expression '|' exclusive_or_expression {$$ = new OrExpression($1, $3); }
	;

logical_and_expression
	: inclusive_or_expression { $$ = $1; }
	| logical_and_expression AND_OP inclusive_or_expression {$$ = new LogicalAndExpression($1, $3); }
	;

logical_or_expression
	: logical_and_expression { $$ = $1; }
	| logical_or_expression OR_OP logical_and_expression {$$ = new LogicalOrExpression($1, $3); }
	;

conditional_expression
	: logical_or_expression { $$ = $1; }
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression { $$ = $1; }
	| unary_expression assignment_operator assignment_expression { $$ = new Assignment($1, $3); }
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression { $$ = $1; }
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;
//MASTER - this is the top of the declaration Node
declaration
	: declaration_specifiers ';' { $$ = $1; }
	| declaration_specifiers init_declarator_list ';' { $$ = $2; }//<- this one
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier { $$ = $1; }
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator { $$ = $1; }
	| init_declarator_list ',' init_declarator
	;
//THESE ARE THE THINGS
init_declarator
	: declarator	{ $$ = new Declaration($1, new Number(0) ); }
	| declarator '=' initializer { $$ = new Declaration($1, $3); }
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

/* Assume everything is int */

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT			{$$ = new Int(); }
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration						//{ $$ = $1; }
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';' //{ $$ = $2; }
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier							//{ $$ = $1; }
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator		//{ $$ = $1; }
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator   //{ $$ = $1; }
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST
	| VOLATILE
	;

declarator
	: direct_declarator { $$ = new Declarator($1); }
	;

direct_declarator
	: IDENTIFIER { $$ = new Identifier( *$1 ); }
	| '(' declarator ')'
	| direct_declarator '(' ')' { $$ = $1; }
	| direct_declarator '(' parameter_type_list ')' { $$ = new FunctionStart($1, $3); }
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list  				{ $$ = $1; }
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration					   { $$ = new ParameterList($1, new DoNothing() ); }
	| parameter_list ',' parameter_declaration { $$ = new ParameterList($3, $1); }
	;

parameter_declaration
	:
	| declaration_specifiers declarator { $$ = $2; }
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator 		{ $$ = $1; }
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')' 		{ $$ = $2; }
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression {$$ = $1; }
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: labeled_statement { $$ = $1; }
	| compound_statement { $$ = $1; }
	| expression_statement { $$ = $1; }
	| selection_statement { $$ = $1; }
	| iteration_statement { $$ = $1; }
	| jump_statement { $$ = $1; }
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}' { $$ = new DoNothing(); }
	| '{' statement_list '}' { $$ = $2; }
	| '{' declaration_list '}' { $$ = $2; }
	| '{' declaration_list statement_list '}' { $$ = new ProgramPair($2, $3); }//create compount statement
	;

declaration_list
	: declaration	{$$ = $1; }
	| declaration_list declaration { $$ = new DeclarationPair($2, $1); }
	;

statement_list
	: statement { $$ = $1; }
	| statement_list statement { $$ = new ProgramPair($1, $2); }
	;

expression_statement
	: ';'
	| expression ';' { $$ = $1; }
	;

selection_statement
	: IF '(' expression ')' statement					{ $$ = new IfStmt($3, $5); }
	| IF '(' expression ')' statement ELSE statement	{ $$ = new IfElse($3, $5, $7); }
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement											{ $$ = new WhileLoop($3, $5); }
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement	{ $$ = new ForLong($3, $4, $5, $7); }
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';' { $$ = new ReturnStatement(new Number(0)); }
	| RETURN expression ';' { $$ = new ReturnStatement($2); }
	;

translation_unit
	: external_declaration { $$ = $1; }
	| translation_unit external_declaration { $$ = new ProgramPair($1, $2); }
	;

external_declaration
	: function_definition { $$ = $1; }
	| declaration { $$ = $1; }
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement						{ $$ = new FunctionDefinition($2, $3); }
	| declarator declaration_list compound_statement
	| declarator compound_statement
//declaration_specifiers = return type
//type_specifier declarator compound_statement { $$ = new FunctionDefinition(*$2, $3); }

program
  : translation_unit { g_root = const_cast<Node*>($1); }

%%

Node* g_root;

const Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
