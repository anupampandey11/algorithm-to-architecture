#include<iostream>
#include<vector>
using namespace std;

void pairSum(const vector<int>&nums , int target){
    int left = 0;
    int right = nums.size() - 1;
    while(left<right){
        int sum = nums[left] + nums[right];
        if(sum == target){
            cout << "[ " << left << ", " << right << " ]" << endl;
            return;
        }
        else if(sum>target){
            right--;
        }
        else{
            left++;
        }
    }
}

int main(){
    vector<int> nums{1, 2, 3, 4, 6, 8, 10};
    int target = 10;
    pairSum(nums, target);
    return 0;
}
