#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    string s = "aabbaaccddd1122";
    unordered_map<char, int> freq;
    for (char x : s){
        freq[x]++;
    }

    for(auto it : freq){
        cout << it.first << " -> " << it.second << endl;
    }
    return 0;
}
