//#include "Token.h"
#include "Expression.h"

int main(){
    string one = "a12 = 1?ab + - a 0123 c (a + 12 3 )*(ab - (3 + 4 ))";
    string two = "(*)";

    //Token j(one);
    //j.display();

    Expression object;
    object.set(one);
    object.display();
}