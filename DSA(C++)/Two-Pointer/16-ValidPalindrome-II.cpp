#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s , int left , int right){
    while(left<right){
        if(s[left] != s[right]){
            return false;
        }
         left++;
        right--;
    }
    return true;
}

bool checkValidPalindrome(string s){
    int counter = 0;
    int left = 0;
    int right = s.length() - 1;

    while(left<right){
        if(s[left] == s[right]){
            left++;
            right--;
        }
        else{
            return (isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1));
        }
    }
    return true;
    }

int main(){
    string s = "abecbea";
    bool isValidPalindrome = checkValidPalindrome(s);

    if(isValidPalindrome){
        cout << s << " -> is valid palindrome with exception" << endl;
    }
    return 0;
}
