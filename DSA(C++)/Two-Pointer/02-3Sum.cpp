#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    // -4 , -1 , -1 , 0 , 1 , 2
    int n = nums.size();
    for (int idx = 0; idx < n; idx++)
    {
        if (idx > 0 && nums[idx] == nums[idx - 1])
        {
            continue;
        }
        int left = idx + 1;
        int right = n - 1;
        int target = 0 - nums[idx];
        while (left < right)
        {
            int sum = nums[left] + nums[right];
            if (sum == target)
            {
                cout << "[ " << nums[idx] << ", " << nums[left] << ", " << nums[right] << " ]" << endl;
                right--;
                left++;
                while(left<right&&nums[left] == nums[left -1]){
                    left++;
                }
                while(left<right && nums[right]==nums[right +1]){
                    right--;
                }
            }
            else if (sum > target)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
    }
}

int main()
{
    vector<int> nums{-2, 0, 0, 0, 2, 2};
    threeSum(nums);
    return 0;
}
