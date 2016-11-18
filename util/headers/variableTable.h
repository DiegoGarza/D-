#ifndef VARIABLETABLE_H
#define VARIABLETABLE_H

#include "../variable.cpp"
#include <iostream>

using namespace std;

class VariableTable {
public:
    VariableTable();
    VariableTable(VariableTable* parent);
    void insertVariable(string id, int address);
    bool findVariable(string id);
    bool findVariableInCurrentTable(string id);
    void displayTable();
    void clearVarTable();
    void insertFirstDimension(string id, int dim);
    void insertSecondDimension(string id, int dim);
    int getDimension(string id, int dim);
    int getAddress(string id);

private:
    unordered_map<string, Variable> varTable;
    VariableTable* parent;
};


#endif
