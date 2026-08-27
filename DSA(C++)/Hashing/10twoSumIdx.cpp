#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

pair<int,int>twoSumIdx(const vector<int>&nums , int target){
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++){
        int needed = target - nums[i];
        if(mp.find(needed) != mp.end()){
            return {mp[needed], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

int main(){
    vector<int> nums{2, 7, 12, 15};
    int target = 19;
    auto [first, second] =twoSumIdx(nums, target);
    cout << "[ " << first << " , " << second <<" ]"<< endl;
    return 0;
}
