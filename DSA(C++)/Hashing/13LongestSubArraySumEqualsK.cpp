#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


int longestSubArray(const vector<int>&nums , int k){
    unordered_map<int, int> udrmap;
    // we will store nums[i] as key and i as value in map

    int idx = 0;
    int prefixSum = 0;
    int maxLength = 0;
    udrmap[0] = -1;
    int lengthOfSubArray = 0;
    for (int x : nums)
    {
        prefixSum += x;
        int needed = prefixSum - k;
        if(udrmap.find(needed) != udrmap.end()){
            int length = idx - udrmap[needed];
            if (maxLength < length)
            {
                maxLength = length;
            }
        }
        if(udrmap.find(prefixSum) == udrmap.end()){
            udrmap[prefixSum] = idx;
        }
        idx++;
    }
    return maxLength;
}

int main(){
    vector<int> nums{-1, 2, 1, 1, 1, -3 , 1 , 1 , -3};
    int k = 3;
    int lengthOfSubArray = longestSubArray(nums, k);
    cout << "Longest subarray length : " << lengthOfSubArray << endl;
    return 0;
}
