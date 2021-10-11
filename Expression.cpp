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
    //We need to separate each character based on the definition of a token (tokens are separated by spaces or special characters);
    //Once the first token is found, add it into tokenized
    //After adding into tokenized, repeat this process from the next position
    //at which we stopped at until finding the terminating NULL character (hence the do while loop)
    
    original = s; //Setting original
    string tmp; //Temporary string to hold values
    int i = 0;
    do
    {
        
        while (s[i] != '(' && s[i] != ')' && s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/' && s[i] != '=' && s[i] != ' ' && s[i] != NULL){ //If it's an ordinary character
            tmp =  tmp + s[i]; //Setting tmp = to itself + the next char
            i++; //moving on
        }

        while(s[i] == '(' || s[i] == ')' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '=' && s[i] != NULL){//If character is special
            if(tmp.empty() != true){
                tmp = tmp + ';'; //Adding a semi-colon to the end of tmp for tokenizing purposes.
                tokenized.push_back(tmp); //Add current value to vector
                tmp.clear(); //Clear the vector
                tmp = s[i] + ';'; //Now tmp = a special character + a semi colon.
                tokenized.push_back(tmp); //Adding tmp to vector
                tmp.clear(); //Clearing tmp
                i++; //Moving on
            }
        
        }

        if(s[i] == ' '){ //If s is equal to space
            if (tmp.empty() != true){ //And if tmp is not empty
                tmp = tmp + ';'; //Replacing the space with a semi colon
                tokenized.push_back(tmp); //Adding tmp to our vector
                tmp.clear(); //clearing tmp
                i++; //Moving on
            }
            else{ //If it is empty
                i++; //Move on
            }
        }

        if(s[i] == NULL){ //If it's a NULL character
            break; //Break the loops
        }


    } while (s[i] != NULL);
}



void Expression::display() const{
    cout << "original = " << original << endl;
    cout << "tokenized = ";
    for (int i = 0; i < tokenized.size(); i++){
       cout << tokenized.at(i).get_token();
    }
    cout << endl << "number of tokens = " << tokenized.size() << endl;
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
