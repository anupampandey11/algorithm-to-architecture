#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int>LPS(string s){
    vector<int> lps(s.length());
    int left  = 0;
    int right = 1;
    while(right<s.length()){


        if (s[left] == s[right])
        {
            cout << "[IF] LEFT ELEMENT -  " << left <<" ->"<< s[left] << endl;
            cout << "[IF] RIGHT ELEMENT -  " << right << " -> " << s[left] << endl;
            left++;
            lps[right] = left;
            right++;
        }
        else{
            cout << "[ELSE] LEFT ELEMENT -  " << left <<" ->"<< s[left] << endl;
            cout << "[ELSE] RIGHT ELEMENT -  " << right << " -> " << s[left] << endl;
            if(left != 0){
                cout << "[ELSE][IF] LEFT ELEMENT -  " << left <<" ->"<< s[left] << endl;
                left = lps[left-1];
            }
            else{
                lps[right] = 0;
                right++;
            }
        }
    }

    return lps;
}

int main(){
    string s = "ABCAA";
    vector<int> lps = LPS(s);
    for (int i = 0; i < s.length(); i++){
        cout << lps[i] << " ";
    }
    cout << endl;
    return 0;
}
