#ifndef VARIABLE_CPP
#define VARIABLE_CPP

#include "headers/variable.h"

using namespace std;

Variable::Variable() {
}

Variable::Variable(string name, int address) {
    this->name = name;
    this->address = address;
}

#endif
