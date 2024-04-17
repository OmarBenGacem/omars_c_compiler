%option noyywrap

%{
// Avoid error "error: `fileno' was not declared in this scope"
//extern "C" int fileno(FILE *stream);

//below is a debugging step, getting error with line above
int fileno(FILE *stream);

#include <stdio.h>


%}

D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			("f"|"F"|"l"|L)
IS			("u"|"U"|"l"|L)*

%{
// #include <stdio.h>
// #include "y.tab.h"
 
%}

/*
"auto"			{ printf("AUTO"); return(AUTO); }
"break"			{  printf("BREAK"); return(BREAK); }
"case"			{  printf("CASE"); return(CASE); }
"char"			{  printf("CHAR"); return(CHAR); }
"const"			{  printf("CONST"); return(CONST); }
"continue"		{  printf("CONTINUE"); return(CONTINUE); }
"default"		{  printf("DEFAULT"); return(DEFAULT); }
"do"		    {  printf("DO"); return(DO); }
"double"		{  printf("DOUBLE"); return(DOUBLE); }
"if"			{  printf("IF"); return(IF); }
"int"			{  printf("INT"); return(INT); }
"long"			{  printf("LONG"); return(LONG); }
*/


%%






"else"			{  printf("ELSE"); }
"enum"			{  printf("ENUM"); }
"extern"		{  printf("EXTERN"); }
"float"			{  printf("FLOAT"); }
"for"		  	{  printf("FOR"); }


"register"		{  printf("REGISTER"); }
"printf"		{  printf("printf"); }
"short"			{  printf("SHORT"); }
"signed"		{  printf("SIGNED"); }
"sizeof"		{  printf("SIZEOF"); }
"static"		{  printf("STATIC"); }
"struct"		{  printf("STRUCT"); }
"switch"		{  printf("SWITCH"); }
"typedef"		{  printf("TYPEDEF"); }
"union"			{  printf("UNION"); }
"unsigned"		{  printf("UNSIGNED"); }
"void"			{  printf("VOID"); }
"volatile"		{  printf("VOLATILE"); }
"while"			{  printf("WHILE"); }


L?\"(\\.|[^\\"])*\"	{  printf("STRING_LITERAL"); } 

"..."			{  printf("ELLIPSIS"); }
">>="			{  printf("RIGHT_ASSIGN"); }
"<<="			{  printf("LEFT_ASSIGN"); }
"+="			{  printf("ADD_ASSIGN"); }
"-="			{  printf("SUB_ASSIGN"); }
"*="			{  printf("MUL_ASSIGN"); }
"/="			{  printf("DIV_ASSIGN"); }
"%="			{  printf("MOD_ASSIGN"); }
"&="			{  printf("AND_ASSIGN"); }
"^="			{  printf("XOR_ASSIGN"); }
"|="			{  printf("OR_ASSIGN"); }
">>"			{  printf("RIGHT_OP"); }
"<<"			{  printf("LEFT_OP"); }
"++"			{  printf("INC_OP"); }
"--"			{  printf("DEC_OP"); }
"->"			{  printf("PTR_OP"); }
"&&"			{  printf("AND_OP"); }
"||"			{  printf("OR_OP"); }
"<="			{  printf("LE_OP"); }
">="			{  printf("GE_OP"); }
"=="			{  printf("EQ_OP"); }
"!="			{  printf("NE_OP"); }
";"			  {  printf(";"); }
("{"|"<%")		{  printf("{"); }
("}"|"%>")		{  printf("}"); }
","			{  printf(","); }
":"			{  printf(":"); }
"="			{  printf("="); }
"("			{  printf("("); }
")"			{  printf(")"); }
("["|"<:")		{  printf("["); }
("]"|":>")		{  printf("]"); }
"."			{  printf("."); }
"&"			{  printf("&"); }
"!"			{  printf("!"); }
"~"			{  printf("~"); }
"-"			{  printf("-"); }
"+"			{  printf("+"); }
"*"			{  printf("*"); }
"/"			{  printf("/"); }
"%"			{  printf("\%"); }
"<"			{  printf("<"); }
">"			{  printf(">"); }
"^"			{  printf("^"); }
"|"			{  printf("|"); }
"?"			{  printf("?"); }
"return"	{  printf("RETURN"); }

[ \t\v\n\f]		{ printf(" ");  }


({D})*				{ printf("value"); }
({H})+("."({H})+)?	{ printf("value_hex"); }
({L}|{D})*	       { printf("constant_name"); }


.				   { printf("invalid token"); }
%%


//({H})+("."({H})+)?				{ printf("value_hex"); }
// DELETED: {L}({L}|{D})*		{  printf("checktype"); }
//0{D}+{IS}?		{  printf("CONSTANT"); }
//{D}+{IS}?		{  printf("CONSTANT"); }
//L?'(\\.|[^\\'])+'	{  printf("CONSTANT"); }
//
//{D}+{E}{FS}?		{  printf("CONSTANT"); }
//{D}*"."{D}+({E})?{FS}?	{  printf("CONSTANT"); }
//{D}+"."{D}*({E})?{FS}?	{  printf("CONSTANT"); }

// yywrap()
// {
// 	printf(1);
// }




/*comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0)
		putchar(c1);
}


int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}
*/
/*
int check_type()
{


* pseudo code --- this is what it should check
*
*	if (yytext == type_name)
*		printf(TYPE_NAME);
*
*	printf("IDENTIFIER");
*/

/*
*	it actually will only printf IDENTIFIER
*/

//	printf(IDENTIFIER);
//}
//*/

void yyerror (char const *s)
{
  fprintf (stderr, "Parse error : %s\n", s);
  exit(1);
}

int main(){
	yylex();

	return 0;
}

