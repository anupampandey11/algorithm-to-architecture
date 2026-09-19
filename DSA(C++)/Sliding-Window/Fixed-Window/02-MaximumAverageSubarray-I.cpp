// LeetCode - 643
#include<iostream>
#include<vector>
using namespace std;

double maximumAvg(const vector<int>&nums , int k){
    int curr_sum = 0;
    int n = nums.size();
    for (int i = 0; i < k; i++)
    {
        curr_sum += nums[i];
    }
    double max_avg = (double)curr_sum / k;
    for (int i = 1; i <= n - k; i++){
        curr_sum += nums[k + i - 1] - nums[i - 1];

    if(max_avg<(double)curr_sum / k){
        max_avg = (double)curr_sum / k;
    }
  }
    return max_avg;
}

int main(){
    vector<int> nums{1, 12, -5, -6, 50, 3};
    int k = 4;
    double max_avg = maximumAvg(nums, k);

    cout <<"Max Average of Subarray = "<< max_avg << endl;
    return 0;
}
