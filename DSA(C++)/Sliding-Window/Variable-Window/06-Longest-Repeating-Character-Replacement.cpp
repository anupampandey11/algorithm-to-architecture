// LeetCode - 424
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;


int characterReplacement(string s , int k){
    unordered_map<char, int> freq;
    int n = s.length();
    int left = 0;
    int right = 0;
    int max_length = 0;
    int max_freq = 0;
    while (right < n)
    {
        char key = s[right];
        freq[key]++;
        right++;
        if(max_freq < freq[key]){
            max_freq = freq[key];
        }

        int curr_length = right - left;
        int replacement_needed = curr_length - max_freq;
        while(replacement_needed >k){
            char key = s[left];
            freq[key]--;
            left++;
            curr_length = right - left;
            replacement_needed = curr_length - max_freq;
        }
        if(max_length<curr_length){
            max_length = curr_length;
        }
    }
    return max_length;
}

int main(){
    string s = "AABABBA";
    int k = 1;
    int max_length = characterReplacement(s, k);
    cout << "Max length : " << max_length;
    return 0;
}
