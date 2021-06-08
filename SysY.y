%{
#include <stdio.h>
#include <string.h>
#include <string>
#include "nodes.h"
int yylex(void);
void yyerror(char*);
extern int yydebug;
struct Node* root;
using namespace std;
%}

%union{
int iValue;
const char* sValue;
struct Node* node;
}

%token INT
%token VOID
%token CONST
%token IF
%token ELSE
%token WHILE
%token BREAK
%token CONTINUE
%token RETURN
%token END
%token<sValue>IDENT
%token<iValue> NUMBER

%type<sValue> UnaryOp MulOp AddOp RelOp EqOp

%type<node> CompUnit Decl Stmt Lval Cond
VarDecl VarDefList VarDef
InitVal InitValList
BlockItem_list BlockItem Block
FuncDef FuncFParams FuncFParam FuncRParams
ExpList Exp EqExp AddExp LOrExp LAndExp MulExp PrimaryExp UnaryExp RelExp

%%

CompUnit:
 Decl {$$=new CompUnit(NULL,$1);}
|FuncDef {$$=new CompUnit(NULL,$1);}
|CompUnit Decl {$$=new CompUnit($1,$2);}
|CompUnit FuncDef {$$=new CompUnit($1,$2);}
|CompUnit END {$$=$1; start($$); return 0;};

Decl:
 VarDecl {$$=$1;}
|CONST VarDecl {$$=$2;} ;

VarDecl:
 INT VarDefList ';' {$$=$2;} ;

VarDefList:
 VarDef {$$=new VarDefList(NULL,$1);}
|VarDefList ',' VarDef {$$=new VarDefList($1,$3);} ;

VarDef:
 IDENT {$$=new VarDef($1,NULL,NULL);}
|IDENT '=' InitVal {$$=new VarDef($1,NULL,$3);}
|IDENT ExpList {$$=new VarDef($1,$2,NULL);}
|IDENT ExpList '=' InitVal {$$=new VarDef($1,$2,$4);} ;

InitVal:
 Exp {$$=new InitVal($1,NULL);}
|'{' '}' {$$=new InitVal(NULL,NULL);}
|'{' InitValList '}' {$$=new InitVal(NULL,$2);};

InitValList:
 InitVal {$$=new InitValList(NULL,$1);}
|InitValList ',' InitVal {$$=new InitValList($1,$3);} ;

FuncDef:
 INT IDENT '(' ')' Block {$$=new FuncDef(0,$2,NULL,$5);}
|INT IDENT '(' FuncFParams ')' Block {$$=new FuncDef(0,$2,$4,$6);}
|VOID IDENT '(' ')' Block {$$=new FuncDef(1,$2,NULL,$5);}
|VOID IDENT '(' FuncFParams ')' Block {$$=new FuncDef(1,$2,$4,$6);} ;


FuncFParams:
 FuncFParam {$$=new FuncFParams(NULL,$1);}
|FuncFParams ',' FuncFParam {$$=new FuncFParams($1,$3);};

FuncFParam:
 INT IDENT {$$=new FuncFParam($2,false,NULL);}
|INT IDENT '[' ']' {$$=new FuncFParam($2,true,NULL);}
|INT IDENT '[' ']' ExpList {$$=new FuncFParam($2,true,$5);} ;

Block:
 '{' '}' {$$=new Block(NULL);}
|'{' BlockItem_list '}'{$$=new Block($2);};

BlockItem_list:
 BlockItem {$$=new BlockItemList(NULL,$1);}
|BlockItem_list BlockItem {$$=new BlockItemList($1,$2);};

BlockItem:
 Decl {$$=$1;}
|Stmt {$$=$1;};

Stmt:
 Lval '=' Exp ';' {$$=new Stmt(0,$1,$3,NULL,NULL,NULL,NULL);}
|';' {$$=new Stmt(0,NULL,NULL,NULL,NULL,NULL,NULL);}
|Exp ';' {$$=new Stmt(0,NULL,$1,NULL,NULL,NULL,NULL);}
|Block {$$=new Stmt(0,NULL,NULL,$1,NULL,NULL,NULL);}
|IF '(' Cond ')' Stmt {$$=new Stmt(1,NULL,NULL,NULL,$3,$5,NULL);}
|IF '(' Cond ')' Stmt ELSE Stmt {$$=new Stmt(2,NULL,NULL,NULL,$3,$5,$7);}
|WHILE '(' Cond ')' Stmt {$$=new Stmt(3,NULL,NULL,NULL,$3,$5,NULL);}
|BREAK ';' {$$=new Stmt(4,NULL,NULL,NULL,NULL,NULL,NULL);}
|CONTINUE ';' {$$=new Stmt(5,NULL,NULL,NULL,NULL,NULL,NULL);}
|RETURN ';' {$$=new Stmt(6,NULL,NULL,NULL,NULL,NULL,NULL);}
|RETURN Exp ';' {$$=new Stmt(7,NULL,$2,NULL,NULL,NULL,NULL);};

Exp:
 AddExp {$$=$1;};

Cond:
 LOrExp {$$=$1;};

Lval:
 IDENT {$$=new Lval($1,NULL);}
|IDENT ExpList {$$=new Lval($1,$2);} ;

ExpList:
 '[' Exp ']' {$$=new ExpList(NULL,$2);}
|ExpList '[' Exp ']' {$$=new ExpList($1,$3);};

PrimaryExp:
 '(' Exp ')' {$$=new PrimaryExp($2,NULL,0);}
| Lval {$$=new PrimaryExp(NULL,$1,0);}
| NUMBER {$$=new PrimaryExp(NULL,NULL,$1);};

UnaryOp:
 '+' {$$="+";}
|'-' {$$="-";}
|'!' {$$="!";};

UnaryExp:
 PrimaryExp {$$=new UnaryExp($1,"",NULL,"");}
|IDENT '(' ')' {$$=new UnaryExp(NULL,$1,NULL,"");}
|IDENT '(' FuncRParams ')'{$$=new UnaryExp(NULL,$1,$3,"");}
|UnaryOp UnaryExp {$$=new UnaryExp($2,"",NULL,$1);} ;

FuncRParams:
 Exp {$$=new FuncRParams(NULL,$1);}
|FuncRParams ',' Exp {$$=new FuncRParams($1,$3);} ;

MulOp:
 '*' {$$="*";}
|'/' {$$="/";}
|'%' {$$="%";};

MulExp:
 UnaryExp {$$=new Exp("",NULL,$1);}
|MulExp MulOp UnaryExp {$$=new Exp($2,$1,$3);} ;

AddOp:
 '+' {$$="+";}
|'-' {$$="-";};

AddExp:
 MulExp {$$=new Exp("",NULL,$1);}
|AddExp AddOp MulExp {$$=new Exp($2,$1,$3);};

RelOp:
 '<' '=' {$$="<=";}
|'>' '=' {$$=">=";}
|'<' {$$="<";}
|'>' {$$=">";};

RelExp:
 AddExp {$$=new Exp("",NULL,$1);}
|RelExp RelOp AddExp {$$=new Exp($2,$1,$3);};

EqOp:
 '=' '=' {$$="==";}
|'!' '=' {$$="!=";};

EqExp:
 RelExp {$$=new Exp("",NULL,$1);}
|EqExp EqOp RelExp {$$=new Exp($2,$1,$3);} ;

LAndExp:
 EqExp {$$=new Exp("",NULL,$1);}
|LAndExp '&' '&' EqExp {$$=new Exp("&&",$1,$4);};

LOrExp:
 LAndExp {$$=new Exp("",NULL,$1);}
|LOrExp '|' '|' LAndExp {$$=new Exp("||",$1,$4);} ;

%%
void yyerror(char *s)
{
	//fprintf(stderr,"error:%s\nline:%d\nyytext:%s",yytext,yylineno,yytext);
}
int main(int argc, char* argv[])
{
        freopen(argv[3], "r", stdin);
        freopen(argv[5], "w", stdout);
        //yydebug=1;
        yyparse();
        printf("\n");
	return 0;
}
