//
// Created by sherco on 2021/5/27.
//
#include "nodes.h"
#include "symtable.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <sstream>
#include <assert.h>

using namespace std;

SymTable *currentSymTable;
stringstream *gloDeclCode = new stringstream;
stringstream *gloStmtCode = new stringstream;
stringstream *funcDeclCode = new stringstream;
stringstream *funcStmtCode = new stringstream;
stringstream *mainDeclCode = new stringstream;
stringstream *mainStmtCode = new stringstream;
stringstream *totCode = new stringstream;
stringstream *declCode;
stringstream *stmtCode;
bool calcOnly;
bool inCond;
bool flag;//whether have && ||
bool nonLval = false; //void func call
bool isLval = false; //left exp
bool inFunc = false;
string lastIdent, tab;
int labelCnt = 0, trueLabel, falseLabel, whileLabel, breakLabel;
int Offset = 0;
vector<string> rparams;

inline string l(int id) {
    return "l" + to_string(id);
}

int newLabel() {
    return labelCnt++;
}

void modOffset(int x) {
    Offset += x;
    tab = "";
    for (int i = 0; i < Offset; i++)
        tab.append("\t");
}

void appandNewTemp(string rstr) {
    Symbol *symbol = currentSymTable->addSymbol("", Symbol::Temp, false);
    *declCode << "var " << symbol->id << endl;
    *stmtCode << tab << symbol->id << " = " << rstr << endl;
//    cerr << tab << symbol->id << " = " << rstr << endl;
    lastIdent = symbol->id;
//    cout << "var " << symbol->id << endl;
//    cout << symbol->id << "=" << rstr << endl;
}

void start(Node *root) {
    currentSymTable = new SymTable();
    currentSymTable->addSymbol("getint", Symbol::IntFunc, false);
    currentSymTable->addSymbol("getch", Symbol::IntFunc, false);
    currentSymTable->addSymbol("getarray", Symbol::IntFunc, false);
    currentSymTable->addSymbol("putint", Symbol::VoidFunc, false);
    currentSymTable->addSymbol("putch", Symbol::VoidFunc, false);
    currentSymTable->addSymbol("putarray", Symbol::VoidFunc, false);
    stmtCode = gloStmtCode;
    declCode = gloDeclCode;
    root->process(nullptr);
    cout << gloDeclCode->str()
         << totCode->str()
         << mainDeclCode->str()
         << gloStmtCode->str()
         << mainStmtCode->str();
}

int CompUnit::process(void *ptr) {
    if (compUnit1 != nullptr)
        compUnit1->process(nullptr);
    content->process(nullptr);
    return 0;
}

int VarDefList::process(void *ptr) {
    if (varDefList1 != nullptr)
        varDefList1->process(nullptr);
    varDef->process(nullptr);
    return 0;
}

struct InitvalInfo {
    Symbol *symbol;
    int offset;
    int dim;

    InitvalInfo(Symbol *s, int o, int d) : symbol(s), offset(o), dim(d) {}
};

int VarDef::process(void *ptr) {
    Symbol *symbol = currentSymTable->addSymbol(
            ident, (expList == nullptr) ? Symbol::Int : Symbol::Array, false);
    if (expList != nullptr) {
        calcOnly = true;
        expList->process(symbol);
        symbol->initialized = true;
        *declCode << "var " << symbol->getSize(0) * 4 << " " << symbol->id << endl;
//        printf("var %d %s\n",symbol->getSize(0)*4,symbol->id.c_str());
        calcOnly = false;
    } else {
        *declCode << "var " << symbol->id << endl;
//        printf("var %s\n",symbol->id.c_str());
    }
    if (initVal != nullptr) {
//        calcOnly = true;
        initVal->process(new InitvalInfo(symbol, 0, 0));
//        printf("fuck\n");
    }
    return 0;
}

int ExpList::process(void *ptr) {
    //ptr stands for the symbol of the array
    Symbol *arrSymbol = (Symbol *) ptr;

    if (calcOnly) {
        int res = 1;
        if (expList1 != nullptr)
            res = expList1->process(ptr);

        int val = exp->process(ptr);
        if (!(arrSymbol->initialized))
            arrSymbol->dimension.push_back(val);

        return res * val;
    } else {
        if (expList1 != nullptr) {
            expList1->process(ptr);
            arrSymbol->currentDim++;
            string str1 = lastIdent;
            exp->process(ptr);
            string str2 = lastIdent;
//            cerr<<arrSymbol->id<<' '<<arrSymbol->currentDim<<' '<<arrSymbol->dimension[arrSymbol->currentDim]<<endl;
            appandNewTemp(str1 + " * " + to_string(arrSymbol->dimension[arrSymbol->currentDim]));
            appandNewTemp(lastIdent + " + " + str2);
        } else {
            exp->process(ptr);
            arrSymbol->currentDim=0;
        }
    }
    return 0;
}


int InitVal::process(void *ptr) {
    InitvalInfo *info = (InitvalInfo *) ptr;
    Symbol *symbol = info->symbol;
    if (symbol->type == Symbol::Int) {
//        if (exp == nullptr || initValList != nullptr)
//            assert(false);
        exp->process(nullptr);
        *stmtCode << tab << symbol->id << " = " << lastIdent << endl;
//        printf("%s=%d\n",symbol->id.c_str(),res);
    } else {
        if (exp != nullptr) {
            exp->process(nullptr);
            *stmtCode << tab << symbol->id << " [ " << info->offset * 4 << " ] = " << lastIdent << endl;
//            printf("%s[%d]=%s\n",symbol->id.c_str(),info->offset*4,lastIdent.c_str());
            info->offset++;
        } else {
            int size = symbol->getSize(info->dim);
            if (info->offset % size != 0)
                info->offset += size - info->offset % size;
            if (initValList == nullptr) {
                info->offset = info->offset + symbol->getSize(info->dim);
            } else {
                info->dim++;
                initValList->process(info);
                info->dim--;
                if (info->offset % size != 0)
                    info->offset += size - info->offset % size;
            }
        }
    }
    return 0;
}

int InitValList::process(void *ptr) {
    if (initValList1 != nullptr)
        initValList1->process(ptr);
    initVal->process(ptr);
    return 0;
}

int Exp::process(void *ptr) {
    if (calcOnly) {
        if (op.empty())
            return exp2->process(ptr);
        else {
            int res1 = exp1->process(ptr),
                    res2 = exp2->process(ptr);
            if (op == "&&") return res1 && res2;
            else if (op == "||") return res1 || res2;
            else if (op == "<=") return res1 <= res2;
            else if (op == ">=") return res1 >= res2;
            else if (op == "==") return res1 == res2;
            else if (op == "!=") return res1 != res2;
            else if (op == "<") return res1 < res2;
            else if (op == ">") return res1 > res2;
            else if (op == "+") return res1 + res2;
            else if (op == "-") return res1 - res2;
            else if (op == "*") return res1 * res2;
            else if (op == "/") return res1 / res2;
            else if (op == "%") return res1 % res2;
//            else
//                assert(false);
        }
    } else if (inCond && (!op.empty() && (op == "&&" || op == "||"))) {
        int t = trueLabel, f = falseLabel;
        flag = false;
        if (op == "&&") {
            trueLabel = newLabel();
            exp1->process(ptr);
            *stmtCode << tab << "if " << lastIdent << " == 0 goto " << l(falseLabel) << endl;
            *stmtCode << tab << l(trueLabel) << ":" << endl;
            trueLabel = t;
            exp2->process(ptr);
            *stmtCode << tab << "if " << lastIdent << " == 0 goto " << l(falseLabel) << endl;
        } else if (op == "||") {
            falseLabel = newLabel();
            exp1->process(ptr);
            *stmtCode << tab << "if " << lastIdent << " != 0 goto " << l(trueLabel) << endl;
            *stmtCode << tab << l(falseLabel) << ":" << endl;
            falseLabel = f;
            exp2->process(ptr);
            *stmtCode << tab << "if " << lastIdent << " != 0 goto " << l(trueLabel) << endl;
        }
    } else {
        if (op.empty())
            exp2->process(ptr);
        else {
            exp1->process(ptr);
            string str1 = lastIdent;
            exp2->process(ptr);
            string str2 = lastIdent;
//            cout << op << endl;
            appandNewTemp(str1 + " " + op + " " + str2);
            return 0;
        }
    }
    return 0;
}

int UnaryExp::process(void *ptr) {
    if (calcOnly) {
        if (ident.empty()) {
            int res = exp->process(ptr);
            if (unaryOp.empty()) return res;
            else if (unaryOp == "+") return res;
            else if (unaryOp == "-") return -res;
            else if (unaryOp == "!") return !res;
//            else
//                assert(false);
        } else {
//            assert(false);
        }
    } else {
        if (ident.empty()) {
            if (inCond && unaryOp == "!") {
                swap(trueLabel, falseLabel);
                exp->process(ptr);
                swap(trueLabel, falseLabel);
                return 0;
            }
            exp->process(ptr);
            if (unaryOp.empty()) return 0;
            else if (unaryOp == "+")return 0;
            else if (unaryOp == "-" || unaryOp == "!") {
                appandNewTemp(unaryOp + lastIdent);
                return 0;
            }
//            else
//                assert(false);
        } else {
            if (funcRParams != nullptr) {
                rparams.clear();
                funcRParams->process(ptr);
                for (string p:rparams)
                    *stmtCode << tab << "param " << p << endl;
            }
            if (nonLval)
                *stmtCode << tab << "call f_" << ident << endl;
            else
                appandNewTemp("call f_" + ident);
        }
    }
    return 0;
}

int PrimaryExp::process(void *ptr) {
    if (exp != nullptr)
        return exp->process(ptr);
    else if (lval != nullptr)
        return lval->process(ptr);
    else {
        if (calcOnly)
            return number;
        else {
            lastIdent = to_string(number);
//            cout<<"fuck"<<lastIdent<<endl;
//            appandNewTemp(to_string(number));
            return 0;
        }
    }
}

int Lval::process(void *ptr) {
    Symbol *iSymbol = currentSymTable->getSymbol(ident);
    if (expList == nullptr)
        lastIdent = iSymbol->id;
    else {
        bool outer = false;
        if (isLval) {
            outer = true;
            isLval = false;
        }
        expList->process(iSymbol);
        bool partialArr = iSymbol->currentDim<(iSymbol->dimension.size()-1);
        while(iSymbol->currentDim<iSymbol->dimension.size()-1){
            appandNewTemp(lastIdent+" * "+ to_string(iSymbol->dimension[++(iSymbol->currentDim)]));
        }
//        cerr<<iSymbol->id<<' '<<iSymbol->currentDim<<' '<<iSymbol->dimension.size()<<endl;
        appandNewTemp(lastIdent + " * 4");
        if(partialArr)
            appandNewTemp(iSymbol->id+" + "+lastIdent);
        else if (outer)
            lastIdent = iSymbol->id + " [ " + lastIdent + " ] ";
        else
            appandNewTemp(iSymbol->id + " [ " + lastIdent + " ] ");
    }
    return 0;
}

int FuncDef::process(void *ptr) {
    currentSymTable->addSymbol(ident,type==0?Symbol::IntFunc:Symbol::VoidFunc, false);
    currentSymTable = new SymTable();

    if (funcFParams != nullptr)
        funcFParams->process(nullptr);

    if (ident == "main") {
        declCode = mainDeclCode;
        stmtCode = mainStmtCode;
    } else {
        funcDeclCode->str("");
        funcStmtCode->str("");
        declCode = funcDeclCode;
        stmtCode = funcStmtCode;
    }

    *declCode << tab << "f_" << ident << " [ " << currentSymTable->paramCnt << " ]\n";
//    printf("f_%s [%d]\n",ident.c_str(),currentSymTable->paramCnt);
    modOffset(1);
//    cerr<<(funcDeclCode->str())<<(funcStmtCode->str());

    block->process(nullptr);
    modOffset(-1);

    if(type==1)
        *stmtCode<<tab<<"return"<<endl;
    *stmtCode << tab << "end f_" << ident << endl;

    if (ident != "main") {
        *totCode << declCode->str() << stmtCode->str();
    }

    declCode = gloDeclCode;
    stmtCode = gloStmtCode;
    currentSymTable = currentSymTable->faSymTable;
    return 0;
}

int FuncFParams::process(void *ptr) {
    if (funcFParams1 != nullptr)
        funcFParams1->process(ptr);
    funcFParam->process(ptr);
    return 0;
}

int FuncFParam::process(void *ptr) {
    if (!isArray)
        currentSymTable->addSymbol(ident, Symbol::Int, true);
    else {
        currentSymTable->addSymbol(ident, Symbol::Array, true);
        Symbol *symbol = currentSymTable->getSymbol(ident);
        symbol->dimension.push_back(0);
        if (expList != nullptr) {
            calcOnly= true;
            expList->process(symbol);
            calcOnly= false;
        }
    }
    return 0;
}


int Block::process(void *ptr) {
//    modOffset(1);
    currentSymTable=new SymTable();
    if (blockItemList != nullptr)
        blockItemList->process(nullptr);
//    modOffset(-1);
    currentSymTable=currentSymTable->faSymTable;
    return 0;
}

int BlockItemList::process(void *ptr) {
    if (blockItemList1 != nullptr)
        blockItemList1->process(nullptr);
    blockItem->process(nullptr);//decl or stmt
    return 0;
}

void condProcess(Node *cond) {
    inCond = true;
    flag = true;
    cond->process(nullptr);
    inCond = false;
    if (flag) {
        *stmtCode << tab << "if " << lastIdent << " == 0 goto " << l(falseLabel) << endl;
        flag = false;
    }
}

int Stmt::process(void *ptr) {
    int t = trueLabel;
    int f = falseLabel;
    int w = whileLabel;
    int b = breakLabel;
    if (lval != nullptr) {
        isLval = true;
        lval->process(nullptr);
        isLval = false;
        string str = lastIdent;
        exp->process(nullptr);
        *stmtCode << tab << str << " = " << lastIdent << endl;
    } else if (type == Stmt::Neither && exp != nullptr) {
        nonLval = true;
        exp->process(nullptr);
        nonLval = false;
    } else if (block != nullptr) {
        block->process(nullptr);
    } else if (type == Stmt::If) {
        trueLabel = newLabel();
        falseLabel = newLabel();
        condProcess(cond);
        *stmtCode << tab << l(trueLabel) << ":" << endl;
        modOffset(1);
        stmt1->process(ptr);
        modOffset(-1);
        *stmtCode << tab << l(falseLabel) << ":" << endl;
    } else if (type == Stmt::IfElse) {
        trueLabel = newLabel();
        falseLabel = newLabel();
        int endLabel = newLabel();
        condProcess(cond);

        *stmtCode << tab << l(trueLabel) << ":" << endl;
        modOffset(1);
        stmt1->process(ptr);
        modOffset(-1);
        *stmtCode << tab << "goto " << l(endLabel) << endl;

        *stmtCode << tab << l(falseLabel) << ":" << endl;
        modOffset(1);
        stmt2->process(ptr);
        modOffset(-1);
        *stmtCode << tab << l(endLabel) << ":" << endl;
    } else if (type == Stmt::While) {
        whileLabel = newLabel();
        trueLabel = newLabel();
        falseLabel = newLabel();
        breakLabel = falseLabel;
        *stmtCode << tab << l(whileLabel) << ":" << endl;
        condProcess(cond);

        modOffset(1);
        *stmtCode << tab << l(trueLabel) << ":" << endl;
        stmt1->process(ptr);
        *stmtCode << tab << "goto " << l(whileLabel) << endl;
        modOffset(-1);

        *stmtCode << tab << l(falseLabel) << ":" << endl;
    } else if (type == Stmt::Break) {
        *stmtCode << tab << "goto " << l(breakLabel) << endl;
    } else if (type == Stmt::Continue) {
        *stmtCode << tab << "goto " << l(whileLabel) << endl;
    } else if (type == Stmt::ReturnVoid) {
        *stmtCode << tab << "return" << endl;
    } else if (type == Stmt::ReturnVal) {
        assert(exp != nullptr);
        exp->process(ptr);
        *stmtCode << tab << "return " << lastIdent << endl;
    }
    trueLabel = t;
    falseLabel = f;
    whileLabel = w;
    breakLabel = b;
    return 0;
}

int FuncRParams::process(void *ptr) {
    if (funcRParams1 != nullptr)
        funcRParams1->process(ptr);
    exp->process(ptr);
    appandNewTemp(lastIdent);
    rparams.push_back(lastIdent);
    return 0;
}