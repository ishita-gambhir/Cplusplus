#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool balancedParanthesis(string str){
    stack<char> stk;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            stk.push(str[i]);
        }
        else if(str[i] == ')'){
            if(stk.top() == '('){
                stk.pop();
            }
            else{
                return false;
            }
        }
        else if(str[i] == ']'){
            if(stk.top() == '['){
                stk.pop();
            }
            else{
                return false;
            }
        }
        else if(str[i] == '}'){
            if(stk.top() == '{'){
                stk.pop();
            }
            else{
                return false;
            }
        }
    }
    if(stk.empty()){
        return true;
    }
    return false;
}
int main(){
    string str;
    cin >> str;
    balancedParanthesis(str) ? cout << "Yes" : cout << "No";
    return 0;
}
