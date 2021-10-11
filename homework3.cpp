//#include "Token.h"
#include "Expression.h"

int main(){
    string one = "Hello 0234 Good 0234 Friend!";
    string two = "(*)";

    //Token j(one);
    //j.display();

    Expression object;
    object.set(two);
    object.display();
}