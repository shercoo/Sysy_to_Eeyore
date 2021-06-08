//
// Created by sherco on 2021/5/27.
//

#ifndef COMPILER_MASTER_SYMTABLE_H
#define COMPILER_MASTER_SYMTABLE_H
#include <string>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <vector>
using namespace std;
class Symbol;
class SymTable;
extern SymTable* currentSymTable;

class Symbol{
public:
    static int tempCnt,permCnt;
    string id;
    int type;
    int val;
    enum{Temp,Int,Array,VoidFunc,IntFunc};
    bool initialized;
    int currentDim;
    vector<int> dimension;
    vector<int> arrayVal;
    int getSize(int st){
        int res=1;
        for(int i=st;i<dimension.size();i++)
            res*=dimension[i];
        return res;
    }
    explicit Symbol(int tp){
        type=tp;
        switch (type) {
            case Temp:
                id="t"+ to_string(tempCnt++);
                break;
            case Int:
            case Array:
                id="T"+ to_string(permCnt++);
                break;
        }
        initialized= false;
        dimension.clear();
    }
};
int Symbol::tempCnt=0,Symbol::permCnt=0;

class SymTable{
public:
    int paramCnt;
    SymTable* faSymTable;
    map<string,Symbol* > table;
    SymTable(){
        paramCnt=0;
        faSymTable=currentSymTable;
    }
    Symbol* addSymbol(string name,int type,bool isParam){
        Symbol* symbol=new Symbol(type);
        if(isParam){
            symbol->id="p"+to_string(paramCnt++);
        }
        if(type!=Symbol::Temp)
            table[name]=symbol;
        else
            table[symbol->id]=symbol;
        return symbol;
    }
    Symbol* getSymbol(string name){
        SymTable* symTable= this;
        while(symTable->table.find(name)==symTable->table.end())
            symTable=symTable->faSymTable;
        return symTable->table[name];
    }
};

#endif //COMPILER_MASTER_SYMTABLE_H
