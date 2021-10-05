#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "Token.h"
#include <cstdlib>
#include <ctype.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

enum Exp_type {Assignment, Arithmetic, Bad};

class Expression{

public:
    //Constructors
    Expression();
    Expression(const string &s);
    void set(const string& s);
    void display() const;
    string getoriginal() const;
    vector<Token> gettokenized() const;




private:
    string original;


};

#endif /*EXPRESSION_H*/