// LeetCode - 438
#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int> findAnagrams(string s, string p) {
    int sLength = s.length();
    int pLength = p.length();
    int k = pLength;
    vector<int> result;
    if (pLength > sLength){
        return result;
    }
    unordered_map<char, int> s_map;
    unordered_map<char, int> p_map;
    for(char ch : p){
        p_map[ch]++;
    }
    int left = 0;
    int right = 0;
    while(right<k){
        s_map[s[right]]++;
        right++;
    }
    if(p_map == s_map){
        result.push_back(left);
    }

    while(right<=sLength){
        s_map[s[left]]--;
        if (s_map[s[left]] == 0)
        {
            s_map.erase(s[left]);
        }
        left++;
        s_map[s[right]]++;
        right++;
        if (p_map == s_map)
        {
            result.push_back(left);
        }
    }

    return result;
}

int main(){
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> result = findAnagrams(s, p);
    cout << " [ " ;
    for(int x : result){
        cout << x << " ";
    }
    cout << " ] " << endl;

    return 0;
}
