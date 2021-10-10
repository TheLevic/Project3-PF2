#include "Token.h"
#include "Expression.h"

int main(){
    string one = "a";
    string two = "-";
    string three = "*";
    string four = "/";

    Token j(one);
    j.display();

    Expression object;
    object.display();
}