#ifndef VARIABLE_H
#define VARIABLE_H

using namespace std;

class Variable {
public:
    Variable();
    Variable(string name, int type);
    string name;
    int type;
};

#endif