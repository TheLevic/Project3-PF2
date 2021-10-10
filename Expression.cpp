#include "Expression.h"
#include "Token.h"

Expression::Expression(){
    original = ""; //Making sure original is Empty
    type = Bad; //Setting type to bad
    valid = false; //Setting valid to be false initially
    tokenized = {}; //Making sure the inital vector is empty
    postfix = {}; //Making sure the inital vector is empty
}

Expression::Expression(const string& s){




}



void Expression::display() const{
    cout << "original = " << original << endl;
    //How do I print out the value of tokenized?
    cout << "number of tokens = " << endl;
    cout << "postfix = " << endl;
    cout << "valid = " << valid << endl;
    cout << "type = " << type << endl;
    cout << "----------------------------------------" << endl;
}

