#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int longestEqualZeroOne(const vector<int>&nums){
    unordered_map<int, int> map;

    int maxLength = 0;
    int prefixSum = 0;
    map[0] = -1;
    int idx = 0;
    for (int x : nums)
    {
        if(x == 0){
            prefixSum -= 1;
        }
        if(x == 1){
            prefixSum += 1;
        }
        if(map.find(prefixSum) != map.end()){
            int length = idx - map[prefixSum];

            if(maxLength<length){
                maxLength = length;
            }
        }
        else{
            map[prefixSum] = idx;
        }
        idx++;
    }
    return maxLength;
}

int main(){
    vector<int> nums{0, 1, 1, 0, 1, 0, 1 , 0 };
    int length = longestEqualZeroOne(nums);
    cout << "Longest subarray length : " << length << endl;
    return 0;
}
