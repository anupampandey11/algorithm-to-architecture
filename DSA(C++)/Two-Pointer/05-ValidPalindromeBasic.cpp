#include<iostream>
#include<string>

using namespace std;

bool checkStringIsPalindrome(string s){
    int left = 0;
    int right = s.length() - 1;
    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    string s = "racecar";
    bool isPalindrome = checkStringIsPalindrome(s);
    if(isPalindrome){
        cout << s << " is a palindrome" << endl;
    }
    return 0;
}
