// LeetCode - 76 (Hard)
#include <iostream>
#include <string>
using namespace std;

int getIdx(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A';
    }
    else
    {
        return ch - 'a' + 26;
    }
}

string minWindow(string s, string t)
{
    string result = "";
    int s_length = s.length();
    int t_length = t.length();
    if (t_length > s_length || t_length == 0)
    {
        return result;
    }
    int need[52] = {0};
    int curr_window[52] = {0};
    int required_types = 0;

    for (char ch : t)
    {
        int idx = getIdx(ch);
        if (need[idx] == 0)
        {
            required_types++;
        }
        need[idx]++;
    }
    int left = 0;
    int best_left = 0;
    int right = 0;
    int satisfied = 0;
    int max_length = s_length + 1;
    while (right < s_length)
    {
        int idx = getIdx(s[right]);
        curr_window[idx]++;
        right++;
        if (curr_window[idx] == need[idx])
        {
            satisfied++;
        }
        while (satisfied == required_types)
        {
            int curr_length = right - left;
            if (curr_length < max_length)
            {
                max_length = curr_length;
                best_left = left;
            }
            int idxLeft = getIdx(s[left]);
            curr_window[idxLeft]--;
            left++;
            if (curr_window[idxLeft] < need[idxLeft])
            {
                satisfied--;
            }
        }
    }
    if (min_length <= s_len)
    {
        for (int i = best_left; i < best_left + max_length; i++)
        {
            result.push_back(s[i]);
        }
    }

    return result;
}

int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";
    string res = minWindow(s, t);
    cout << res << endl;
    return 0;
}
