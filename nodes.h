//
// Created by sherco on 2021/5/26.
//

#ifndef COMPILER_MASTER_NODES_H
#define COMPILER_MASTER_NODES_H
#include <string>
#include <utility>
using namespace std;


class Node{
public:
    virtual int process(void* ptr){}
    void* ptr;
};

void start(Node* root);

class CompUnit;
class VarDefList;
class VarDef;
class FuncDef;
class ExpList;
class InitVal;
class FuncFParams;
class Block;
class InitValList;
class FuncFParam;
class Exp;
class BlockItemList;
class BlockItem;
class Stmt;
class Lval;
class UnaryExp;
class PrimaryExp;
class FuncRParams;


class CompUnit : public Node
{
    Node* compUnit1;
    Node* content;
public:
    CompUnit(Node* cu,Node* c):compUnit1(cu), content(c){}
    int process(void* ptr);
};


class VarDefList : public Node{
    Node* varDefList1;
    Node* varDef;
public:
    VarDefList(Node* vdl,Node* vd):varDefList1(vdl),varDef(vd){}
    int process(void* ptr);
};

class VarDef : public Node{
    string ident;
    Node* expList;
    Node* initVal;
public:
    VarDef(const char * i,Node* el,Node* iv):ident(i),expList(el),initVal(iv){}
    int process(void* ptr);
};

class FuncDef : public Node{
    int type;
    string ident;
    Node* funcFParams;
    Node* block;
public:
    FuncDef(int t,const char * i,Node* ffp,Node* b):type(t),ident(i),funcFParams(ffp),block(b){}
    int process(void* ptr);
};

class ExpList : public Node{
    Node* expList1;
    Node* exp;
public:
    ExpList(Node* el,Node* e):expList1(el),exp(e){}
    int process(void* ptr);
};

class InitVal : public Node{
    Node* exp;
    Node* initValList;
public:
    InitVal(Node* e,Node* ivl):exp(e),initValList(ivl){}
    int process(void* ptr);
};

class InitValList : public Node{
    Node* initValList1;
    Node* initVal;
public:
    InitValList(Node* ivl,Node* iv):initValList1(ivl),initVal(iv){}
    int process(void* ptr);
};

class FuncFParams : public Node{
    Node* funcFParams1;
    Node* funcFParam;
public:
    FuncFParams(Node* ffps,Node* ffp):funcFParams1(ffps),funcFParam(ffp){}
    int process(void* ptr);
};

class FuncFParam : public Node{
    string ident;
    bool isArray;
    Node* expList;
public:
    FuncFParam(string i,bool ia,Node* el):ident(i),isArray(ia),expList(el){}
    int process(void* ptr);
};

class Block : public Node{
    Node* blockItemList;
public:
    explicit Block(Node* bil):blockItemList(bil){}
    int process(void* ptr);
};

class BlockItemList : public Node{
    Node* blockItemList1;
    Node* blockItem;
public:
    BlockItemList(Node* bil,Node* bi):blockItemList1(bil),blockItem(bi){}
    int process(void* ptr);
};

class BlockItem : public Node{
    Node* varDefList;
    Node* stmt;
public:
    BlockItem(Node* vdl,Node* s):varDefList(vdl),stmt(s){}
    int process(void* ptr);
};

class Stmt : public Node{
    enum
    {
        Neither,
        If,
        IfElse,
        While,
        Break,
        Continue,
        ReturnVoid,
        ReturnVal
    };
    int type;
    Node* lval;
    Node* exp;
    Node* block;
    Node* cond;
    Node* stmt1;
    Node* stmt2;
public:
    Stmt(int t,Node* l,Node* e,Node* b,Node* c,Node* s1,Node* s2):
    type(t),lval(l),exp(e),block(b),cond(c),stmt1(s1),stmt2(s2){}
    int process(void* ptr);
};

class Lval : public Node{
    string ident;
    Node* expList;
public:
    Lval(const char * i,Node* el):ident(i),expList(el){}
    int process(void* ptr);
};

class Exp : public Node{
    string op;
    Node* exp1;
    Node* exp2;
public:
    Exp(const char * o,Node* e1,Node* e2):op(o),exp1(e1),exp2(e2){}
    int process(void* ptr);
};

class UnaryExp : public Node{
    Node* exp;
    string ident;
    Node* funcRParams;
    string unaryOp;
public:
    UnaryExp(Node* e,const char *i,Node* frp,const char *op):
    exp(e),ident(i),funcRParams(frp),unaryOp(op){}
    int process(void* ptr);
};

class PrimaryExp : public Node{
    Node* exp;
    Node* lval;
    int number;
public:
    PrimaryExp(Node* e,Node* l,int n):exp(e),lval(l),number(n){}
    int process(void* ptr);
};

class FuncRParams : public Node{
    Node* funcRParams1;
    Node* exp;
public:
    FuncRParams(Node* frp,Node* e):funcRParams1(frp),exp(e){}
    int process(void* ptr);
};
#endif //COMPILER_MASTER_NODES_H
