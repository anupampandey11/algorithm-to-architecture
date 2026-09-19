#include<iostream>
#include<vector>
using namespace std;
int maxSum(const vector<int> &nums, int k){
    int n = nums.size();
    int curr_sum = 0;
    for (int i = 0; i < k; i++){
        curr_sum += nums[i];
    }

    int max_sum = curr_sum;
    for (int i = 1; i <= n - k; i++)
    {
        cout << curr_sum << " + " << nums[k + i - 1] << " - " << nums[i - 1] << " = ";
        curr_sum += nums[k + i - 1] - nums[i - 1];
        cout<<curr_sum << endl;
        if(max_sum<curr_sum){
            max_sum = curr_sum;
        }
    }

    return max_sum;
}
int main()
{
    vector<int> nums{4, 2, 7, 1, 8, 3};
    int k = 3; // window size
    int sum = maxSum(nums, k);
    cout << "Max sum in window size " << k << " : " << sum << endl;
    return 0;
}
