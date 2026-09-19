// Leetcode -209
#include<iostream>
#include<vector>
using namespace std;

int minSubarrayLength(const vector<int>&nums , int target){
    int n = nums.size();
    int min_length = n+1;
    int left = 0;
    int right = 0;
    int curr_sum = 0;
    while(left<=right && right < n){
        curr_sum += nums[right];
        right++;
        while(curr_sum >= target){
            if(min_length>right-left){
                min_length = right - left;
            }
            curr_sum -= nums[left];
            left++;
        }
    }
    if(min_length > n){
        return 0;
    }
    return min_length;
}
int main(){
    vector<int> nums{2, 3, 1, 2, 4, 3};
    int target = 7;
    int sub_array_len = minSubarrayLength(nums, target);
    cout << "Minimum Length = " << sub_array_len << endl;

    return 0;
}
