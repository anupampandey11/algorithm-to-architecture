#include<iostream>
#include<string>
using namespace std;

void printString(string s){
    for (size_t i = 0; i < s.length(); i++){
        cout << s[i];
    }
    cout << endl;
}
int main()
{
    string s1;
    string s2;
    cout << "Input : " << endl;
    getline(cin, s1);
    getline(cin, s2);
    s1 = s1 + " " + s2;
    printString(s1);
}
