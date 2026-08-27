#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s){
    if(s.empty()){
        return true;
    }
    int left = 0;
    int right = s.length() - 1;

    while(left<right){
        if (s[left] != s[right])
        {
            return false;
        }
        right--;
        left++;
    }
    return true;
}

int main(){
    string s = "racecar";
    if(isPalindrome(s)){
        cout << s << " is an palidrome." << endl;
    }
    else{
        cout << s << " is  not an palidrome !!" << endl;
    }
}
