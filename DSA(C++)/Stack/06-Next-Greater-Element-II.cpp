// Leetcode - 503
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextGreaterElements(vector<int> &nums)
{
    int n = nums.size();
    stack<int> waiting_element;
    vector<int> result(n, -1);
    for (int i = 0; i < 2 * n; i++)
    {
        int idx = i % n;
        while (!waiting_element.empty() && nums[idx] > nums[waiting_element.top()])
        {
            result[waiting_element.top()] = nums[idx];
            waiting_element.pop();
        }
        if (i < n)
        {
            waiting_element.push(idx);
        }
    }

    return result;
}

int main() 
{
    vector<int> nums = {1, 2, 1};
    vector<int> result = nextGreaterElements(nums);
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
