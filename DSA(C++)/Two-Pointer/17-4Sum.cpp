#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    int n = nums.size();
    for (int i = 0; i < n - 3; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1]){
        continue;
        }

        for (int j = i + 1; j < n - 2; j++)
        {
            if (j > i && nums[j] == nums[j - 1]){
        continue;
        }
            int left = j + 1;
            int right = n - 1;
            while (left < right)
            {
                int sum = nums[i] + nums[j] + nums[left] + nums[right];
                if (sum == target)
                {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    left++;
                    right--;

                    while(left<right && nums[left] === nums[left -1]){
                        left++;
                    }
                    while(left<right && nums[right] === nums[right + 1]){
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
    return result;
}

int main()
{
    vector<int> nums{1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> result = fourSum(nums, target);

    for (const auto &res : result)
    {
        cout << "[ ";
        for (int x : res)
        {
            cout << x << " ";
        }
        cout << "]"<<endl;
    }
    return 0;
}
