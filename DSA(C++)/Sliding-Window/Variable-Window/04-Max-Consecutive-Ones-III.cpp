// LeetCode - 1004
#include <iostream>
#include <vector>
using namespace std;

int longestOnes(const vector<int> &nums, int k)
{
    int n = nums.size();
    int max_length = 0;
    int left = 0;
    int right = 0;
    int curr_zero_counter = 0;
    while (right < n)
    {
        if (nums[right] != 1)
        {
            curr_zero_counter++;
            while (curr_zero_counter > k)
            {
                if (nums[left] == 0)
                {
                    curr_zero_counter--;
                }
                left++;
            }

        }
        right++;
        int curr_length = right - left;
        if (max_length < curr_length)
        {
            max_length = curr_length;
        }
    }

    return max_length;
}

int main()
{
    vector<int> nums{0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1};
    int k = 3;
    int max_consecutive_ones = longestOnes(nums, k);

    cout << "Longest Consecutive Ones : " << max_consecutive_ones << endl;

    return 0;
}
