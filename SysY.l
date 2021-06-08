%{
#include"SysY.tab.hpp"

int line=1;
%}

DecConst [1-9][0-9]*
OctConst [0][0-7]*
HexConst "0"("x"|"X")([0-9a-fA-F]+)

%%

\n {yylineno++;}
[ \t]+ {}
"/*"(([^\*]*(\*[^\/])?)*)"*/" {}
\/\/.* {}

if {
return IF;}
else {
return ELSE;}
while {
return WHILE;}
break {
return BREAK;}
continue {return CONTINUE;}
return { return RETURN;}
int {
return INT;}
void {
return VOID;}
const {}

[-+*/\(\)\[\]{}%,.;!<>=&|] {return yytext[0];}

[1-9][0-9]*                {yylval.iValue=atoi(yytext);  return NUMBER;}
[0][0-7]*                  {yylval.iValue=strtol(yytext,NULL,8); return NUMBER;}
"0"("x"|"X")([0-9a-fA-F]+) {yylval.iValue=strtol(yytext,NULL,16); return NUMBER;}

[A-Za-z_]([0-9A-Za-z_]*)   {yylval.sValue=strdup(yytext); return IDENT;}


<<EOF>> {return END;}

%%

int yywrap()
{
    return 1;
}