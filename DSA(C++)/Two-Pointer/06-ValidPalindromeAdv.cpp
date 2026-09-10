#include<iostream>
#include<string>

using namespace std;

char processCharToLower(char c){
    if(c >= 'A' && c<='Z'){
        return c + 32;
    }
    return c;
}

bool checkCharIsValid(char c){
    if((c >= 'a' && c<= 'z' )||(c>='0' && c<= '9')){
        return true;
    }
    return false;
}

bool checkStringIsPalindrome(string s){
    // A man, a plan, a canal: Panama
    int left = 0;
    int right = s.length() - 1;
    while(left<right){
        char sLeft = processCharToLower(s[left]);
        char sRight = processCharToLower(s[right]);
        bool isValidLeft = checkCharIsValid(sLeft);
        bool isValidRight = checkCharIsValid(sRight);
        if(!isValidLeft){
            left++;
            continue;
        }
        if(!isValidRight){
            right--;
            continue;
        }
        if(sLeft!=sRight){
            return false;
        }

        left++;
        right--;
    }
    return true;
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    bool isPalindrome = checkStringIsPalindrome(s);
    if(isPalindrome){
        cout << s << " is a palindrome" << endl;
    }
    return 0;
}
