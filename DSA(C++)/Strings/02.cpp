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
    printString(s);
    cout << endl;
    return 0;
}
