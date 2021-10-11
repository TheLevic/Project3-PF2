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
    set(s); //Using the set method
}

void Expression::set(const string& s){
    original = s;
    Token check(original);
    int count = 0;
    for (count; count < check.get_token().size(); count++){
        int pos = check.get_token().find(' '); //Search through the Token and find the spaces
        check.get_token().replace(pos, 1, ";"); //Replace the spaces with the ; character
    }
    //Now we need to separate the tokens
    

}



void Expression::display() const{
    cout << "original = " << original << endl;
    cout << "tokenized = ";
    for (int i = 0; i < tokenized.size(); i++){
       cout << tokenized.at(i).get_token();
    }
    cout << endl << "number of tokens = " << numTokens << endl;
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
