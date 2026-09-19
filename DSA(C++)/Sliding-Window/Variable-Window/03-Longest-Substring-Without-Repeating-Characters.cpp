// LeetCode - 3
#include <iostream>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int arr[128] ={0};
        int max_length = 0;
        int left = 0;
        int right = 0;;
        while (right < n) {
            if (arr[s[right]] != 1)
            {
                arr[s[right]] = 1;
            }
            else
            {
                while (arr[s[right]] == 1) {
                    arr[s[left]] = 0;
                    left++;
                }
                arr[s[right]] = 1;
            }
            right++;
            if (max_length < right - left) {
                max_length = right - left;
            }
        }

        return max_length;
    }

int main()
{
    string s = "OSo@";
    int max_length = lengthOfLongestSubstring(s);

    cout << "Max length : " << max_length << endl;

    return 0;
}
