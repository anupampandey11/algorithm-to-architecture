#include<iostream>
#include<string>
using namespace std;

void printString(string s){
    for (int i = 0; i < s.length(); i++){
        cout << s[i] << " ";
    }

}

int main(){
    string s = "vijaygandu";
    cout << s[0] <<" : "<<s[1]<<endl;
    cout << s.length() <<" : "<< s.size() << endl;
    printString(s);
    cout << endl;
    return 0;
}
