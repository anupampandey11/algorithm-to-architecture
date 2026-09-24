// Leetcode - 20
#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isOpeningbracket(char ch){
    return ch == '(' || ch == '{' || ch == '[';
}
char reverseBracket(char ch){
    if(ch == ')'){
        return '(';
    }
    else if(ch == '}'){
        return '{';
    }
    else{
        return '[';
    }
}

bool isValid(string s){
    int n = s.length();
    stack<char> s1;
    for (int i = 0; i < n; i++)
    {
        if(isOpeningbracket(s[i])){
            s1.push(s[i]);
        }
        else{
            if(s1.empty()){
                return false;
            }
            if(s1.top() != reverseBracket(s[i])){
                return false;
            }
            s1.pop();
        }
    }
    if(!s1.empty()){
        return false;
    }
    return true;
}

int main(){
    string s = "([{])";
    if(isValid(s)){
        cout << "true"<<endl;
    }
    else{
        cout << "false" << endl;
    }
}
