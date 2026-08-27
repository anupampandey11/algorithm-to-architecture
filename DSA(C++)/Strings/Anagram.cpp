#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int>frequencyArray(string s){
    vector<int> frequency(26, 0);
    for (size_t i = 0; i < s.length(); i++){
        int element = s[i] - 'a';
        frequency[element]++;
    }
    return frequency;
}

bool isAnagram(string s1 , string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    vector<int> s1Frequency = frequencyArray(s1);
    vector<int> s2Frequency = frequencyArray(s2);
    for (int i = 0; i < 26; i++){
        if(s1Frequency[i]!=s2Frequency[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s1 = "listen";
    string s2 = "silent";

    if(isAnagram(s1 , s2)){
        cout << s1 << " and " << s2 << " is an anagram !!" << endl;
    }
    else{
        cout << s1 << " and " << s2 << " is not an anagram !!" << endl;
    }
    return 0;
}
