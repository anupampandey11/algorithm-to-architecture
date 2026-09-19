#include<iostream>
#include<vector>
using namespace std;

/**
 * Array = [2, 1, 3, 2, 1] , k = 5;
 * step -1 :
 * numa[i] = 2
 * curr_sum = 0 + 2;
 * curr_sum <= k -> true
 *
 * step -2:
 */

int subarrayLength(const vector<int>&nums, int k){
    int left = 0;
    int right = 0;
    int n = nums.size();
    int curr_sum = 0;
    int max_length = 0;
    while (left <= right && right < n)
    {
        curr_sum += nums[right];
        right++;
        while(curr_sum > k){
            curr_sum -= nums[left];
            left++;
        }
        if(max_length<right -left){
            max_length = right - left;
        }
    }

    return max_length;
}

int main(){
    // vector<int> nums{2, 1, 3, 2, 1};
    // int k = 5;

    vector<int> nums = {1, 2, 1, 1, 1, 3};
    int k = 4; // 3
    int sub_array_len = subarrayLength(nums, k);
    cout << "Longest Subarray Length = " << sub_array_len << endl;

    return 0;
}
