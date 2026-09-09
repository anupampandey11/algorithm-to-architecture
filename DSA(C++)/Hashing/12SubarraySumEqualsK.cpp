#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int numberOfSubarray(const vector<int> &nums ,const int k){
    unordered_map<int, int> freq;
    int prefixSum = 0;
    int count = 0;
    freq[prefixSum] = 1;
    for (int x : nums)
    {
        prefixSum = prefixSum + x;
        int needed = prefixSum - k;
        if (freq.find(needed) != freq.end())
        {
            count += freq[needed];
        }
        freq[prefixSum]++;
    }
    return count;
}

int main(){
    vector<int> nums{1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int k = 3;
    int count = numberOfSubarray(nums, k);
    cout << "Number of SubArray Equals K :" << count << endl;
    return 0;
}
