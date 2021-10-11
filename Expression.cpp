#include "Expression.h"
#include "Token.h"

enum SpecialTokens {special = '(' || ')' || '+' || '-' || '*' || '/' || '='}; //Creating a special type to compare to

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
    string tmp; //Temporary string to hold values
    int count = 0;
    
    //We need to separate each character based on the definition of a token (tokens are separated by spaces or special characters);

    //Once the first token is found, add it into tokenized
    //After adding into tokenized, repeat this process from the position
    //at which we stopped at until finding the terminating NULL character
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
