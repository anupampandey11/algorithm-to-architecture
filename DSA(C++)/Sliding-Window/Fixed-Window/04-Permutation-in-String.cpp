// Leetcode - 567
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
bool checkInclusion(string s1, string s2)
{
    unordered_map<char, int> freqS1;
    unordered_map<char, int> freqS2;
    int n1 = s1.length();
    int n2 = s2.length();
    int k = n1;
    if (n1 > n2)
    {
        return false;
    }
    for (char ch : s1)
    {
        freqS1[ch]++;
    }
    for (int i = 0; i < k; i++)
    {
        freqS2[s2[i]]++;
    }
    if (freqS1 == freqS2)
    {
        return true;
    }
    for (int i = 1; i <= n2 - k; i++)
    {

        freqS2[s2[i - 1]]--;
        if(freqS2[s2[i - 1]] == 0){
            freqS2.erase(s2[i - 1]);
        }
        freqS2[s2[k + i - 1]]++;
        if (freqS1 == freqS2)
        {
            return true;
        }
    }

    return false;
}
int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";
    bool flag = checkInclusion(s1, s2);
    if (flag)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
