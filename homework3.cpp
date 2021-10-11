//#include "Token.h"
#include "Expression.h"

int main(){
    string one = "Hello 0234 Good 0234 Friend!";
    string four = "Hel(lo";
    string two = "a+b+cde+f";
    string three = "a12 = 1?ab + - a 0123 c (a + 12 3 )*(ab - (3 + 4 ))";

    //Token j(one);
    //j.display();

    Expression object;
    object.set(four);
    object.display();
}