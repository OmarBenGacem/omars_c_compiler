/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/parser.y"

  #include "susAST.hpp"
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

#line 69 "parser.tab.h"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ADD_ASSIGN = 258,
    SUB_ASSIGN = 259,
    MUL_ASSIGN = 260,
    DIV_ASSIGN = 261,
    T_INT = 262,
    T_CHAR = 263,
    T_STRING = 264,
    T_DOUBLE = 265,
    T_FLOAT = 266,
    T_BOOL = 267,
    T_VOID = 268,
    T_LONG = 269,
    T_IF = 270,
    T_WHILE = 271,
    T_ELSE = 272,
    T_FOR = 273,
    name = 274,
    T_EQUALS = 275,
    STRING_LITERAL = 276,
    CONSTANT = 277,
    T_RETURN = 278,
    NUMBER = 279,
    DEFAULT = 280,
    CONTINUE = 281,
    CONST = 282,
    CHAR = 283,
    CASE = 284,
    BREAK = 285,
    AUTO = 286,
    DO = 287,
    DOUBLE = 288,
    IF = 289,
    INT = 290,
    LONG = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "src/parser.y"

  NodePtr expr;

  //double number;
  std::string *string;
  yytokentype token;
  int number;

#line 126 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
