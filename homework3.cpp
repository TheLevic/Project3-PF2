#include "Token.h"
#include "Expression.h"

int main(){
    string one = "Hello 0234 Good 0234 Friend!";

    //Token j(one);
    //j.display();

    Expression object(one);
    object.display();
}