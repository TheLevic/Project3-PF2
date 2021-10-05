#include "Token.h"

Token::Token(){
    type = INVALID;
    token = "";
    priority = -1;
}

Token::Token(string s){
    token = s;
    //if s is empty ""
    if (s.empty()){
        type = INVALID;
        priority = -1;
    }
    //Check if s is an identifier (string that starts with a letter)

    //Check if s is an integer (Make sure it doesn't start with 0)
    else if(isdigit(s[0])){
        bool number = true;
        for(int i = 0; i < s.length(); i++){
            if(isdigit(s[i])){
                continue;
            }
            else{
                number = false;
                break;
            }
        }
        if (number){
            type = Integer;
        }
        else{
            type = INVALID;
        }
        priority = -1;
    }

    //check if s is an operator
    else if (s == "+" || s == "-" || s == "*" || s =="/"){
        type = Operators;
        if (s == "+" || s == "-"){
            priority = 1;
        }
        else{
            priority = 2;
        }
    }
    //check if s is an equal sign
    else if (s == "="){
        type = EqualSign;
        priority = -1;
    }
    //check if s is open parentheses
    else if(s == "("){
        type = OpenBrace;
        priority = 0;
    }
    //check if s is close parantheses
    else if(s == ")"){
        type = CloseBrace;
        priority = -1;
    }
    //anything else
    else{
        priority = -1;
        type = INVALID;
    }
}

void Token::set(string s){

}

int Token::value() const{
    int number = 0;
    if(type == Integer){
        number = stoi(token);
        return number;
    }
    else if(type == Identifier){
        return -1;
    }
    else{
        return -2;
    }
}

void Token::display() const{
    string nameType;
    switch(type){
        case 0:
            nameType = "Identifier";
            break;
        case 1:
            nameType = "Integer";
            break;
        case 2:
            nameType = "Operators";
            break;
        //Keep going
    }
    cout << "type = " << type << endl;
    cout << "token = " << token << " (value is " << value() << ")" << endl;
    cout << "priority = " << priority << endl;
}

Token_type Token::get_type()const{
    return type;
}

string Token::get_token() const{
    return token;
}

int Token::get_priority() const{
    return priority;
}