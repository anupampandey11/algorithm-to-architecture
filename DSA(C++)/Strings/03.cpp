#include<iostream>
#include<string>
using namespace std;

void printString(string s){
    for (size_t i = 0; i < s.length(); i++){
        cout << s[i] << " ";
    }
}

int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin , s);
    if(s[0]>=97 && s[0]<=122){
        s[0] = s[0] - 32;
    }
    else if(s[0]>=65 && s[0]<=90){
        s[0] = s[0] + 32;
    }

    printString(s);
    cout << endl;
    return 0;
}

