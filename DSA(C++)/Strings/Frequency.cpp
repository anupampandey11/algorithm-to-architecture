#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int>frequecy(string s){
    vector<int>freq(26, 0);
    for (size_t i = 0; i < s.length(); i++){
    if(s[i]>='A' && s[i]<='Z'){
        s[i] = s[i] + 32;
    }
    freq[(s[i]-'a')]++;
}

return freq;
}


int main(){
    string s = "banaNA";
    vector<int> freq = frequecy(s);
    for (int i = 0; i < 26; i++){
        char letter = i + 'a';
        if(freq[i]>0){
            cout << letter << " - " << freq[i] << endl;
        }
    }
    cout << endl;
    return 0;
}
