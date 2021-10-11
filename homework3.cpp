//#include "Token.h"
#include "Expression.h"

int main(){
    string one = "a12 = 1?ab + - a 0123 c (a + 12 3 )*(ab - (3 + 4 ))";
    string two = "Hello Good Friend!";
    string three = "Yo/u don't know how i*t feels! - Tom Petty!";

    //Token j(one);
    //j.display();

    Expression object;
    object.set(three);
    object.display();
    object.set(two);
    object.display();
    object.set(one);
    object.display();
}