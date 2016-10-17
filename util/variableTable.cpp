#ifndef VARIABLETABLE_CPP
#define VARIABLETABLE_CPP

#include "headers/variableTable.h"

using namespace std;

VariableTable::VariableTable() {
    parent = NULL;
}

VariableTable::VariableTable(VariableTable* parent) {
    this->parent = parent;
}

void VariableTable::insertVariable(string id, int address) {
    Variable newVar(id, address);
    this->varTable[id] = newVar;
}

bool VariableTable::findVariable(string id) {
    if(this->varTable.find(id) != this->varTable.end()) {
        return true;
    }
    if(!parent) return false;
    auto parentTable = (*this->parent).varTable;
    if(parentTable.find(id) != parentTable.end()) {
        return true;
    }
    return false;
}

void VariableTable::displayTable() {
	for(unordered_map<string, Variable>::iterator it = this->varTable.begin(); 
            it != this->varTable.end(); it++) {
		cout<<it->first<<" "<<it->second.address<<endl;
	}
}

void VariableTable::clearVarTable() {
    this->varTable.clear();
}

int VariableTable::getAddress(string id) {
    Variable var = this->varTable[id];
    return var.address;
}

#endif
