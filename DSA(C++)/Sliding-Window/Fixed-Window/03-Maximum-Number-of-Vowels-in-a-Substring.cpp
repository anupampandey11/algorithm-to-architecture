// LeetCode-1456

#include<iostream>
#include<string>
using namespace std;

bool checkVowels(char ch){
    string vowels = "aeiou";
    if(vowels.find(ch) != string::npos){
        return true;
    }
    return false;
}

int maxVowels(string s, int k){
    int curr_counter = 0;

    int n = s.length();
    for (int i = 0; i < k; i++){
        if(checkVowels(s[i])){
            curr_counter++;
        }

    }
    int max_counter = curr_counter;

    for (int i = 1; i <= n - k; i++){
      if(checkVowels(s[k + i -1]) && !checkVowels(s[i-1])){
                curr_counter++;
        }
        else if(!checkVowels(s[k + i -1]) && !checkVowels(s[i-1]) || checkVowels(s[k + i -1]) && checkVowels(s[i-1]) ){
            continue;
        }
        else{
            curr_counter--;
        }

        if (curr_counter > max_counter)
        {
            max_counter = curr_counter;
        }
    }

    return max_counter;
}

int main()
{
    string s = "leetcode";
    int k = 3;
    int max_vowels = maxVowels(s, k);

    cout << "Max vowels : " << max_vowels << endl;
}
