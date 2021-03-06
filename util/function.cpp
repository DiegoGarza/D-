#ifndef FUNCTION_CPP
#define FUNCTION_CPP

#include "headers/function.h"

using namespace std;

Function::Function() {
}

Function::Function(string name, int type, int quadruple, int returnAddress) {
	this->name = name;
	this->type = type;
	this->quadruple = quadruple;
	this->returnAddress = returnAddress;
}

vector<int> Function::getParameters() {
    return this->parameters;
}

void Function::addParameter(int type) {
    parameters.push_back(type);
}

#endif
