#include "Expression.h"
#include "Token.h"

Expression::Expression(){
    original = ""; //Making sure original is Empty
    type = Bad; //Setting type to bad
    valid = false; //Setting valid to be false initially
    tokenized.clear(); //Making sure the inital vector is empty
    postfix.clear(); //Making sure the inital vector is empty
}

Expression::Expression(const string& s){
    original = s;
    Token check(s);
    if (check.get_type() != INVALID){
        tokenized.push_back(check);
    }
}



void Expression::display() const{
    cout << "original = " << original << endl;
    cout << "tokenized = ";
    for (int i = 0; i < tokenized.size(); i++){
        tokenized.at(i).display();
    }
    cout << endl << "number of tokens = " << endl;
    cout << "postfix = " << endl;
    cout << "valid = " << valid << endl;
    cout << "type = " << type << endl;
    cout << "----------------------------------------" << endl;
}

string Expression::getoriginal() const{
    return original;
}
vector<Token> Expression::gettokenized() const{
    return tokenized;
}
