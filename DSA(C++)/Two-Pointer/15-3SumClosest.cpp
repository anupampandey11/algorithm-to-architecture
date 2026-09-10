#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int processNum(int num){
    if(num >= 0){
        return num;
    }
    else{
        return -1 * num;
    }
}

int threeSumClosest(vector<int>&nums , int target){
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int bestSum = nums[0]+nums[1]+nums[2];
    for (int i = 0; i < n-2; i++)
    {
        int left = i + 1;
        int right = n - 1;
        while (left < right){
            int currSum = nums[i] + nums[left] + nums[right];
            if(currSum == target){
                bestSum = currSum;
                return bestSum;
            }
            else if(currSum>target){
                right--;
            }
            else{
                left++;
            }

            if(processNum(target - currSum)<processNum(target-bestSum)){
                bestSum = currSum;
            }
        }
    }
    return bestSum;
}

int main(){
    vector<int> nums{-1, 2, 1, -4};
    int target = 1;
    int closestSum = threeSumClosest(nums, target);
    cout << "Closest Sum is : " << closestSum;
    cout << endl;
    return 0;
}
