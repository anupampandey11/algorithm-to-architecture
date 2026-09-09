#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int longestEqualZero(const vector<int>&nums){
    unordered_map<int, int> map;
    int prefixSum = 0;
    int idx = 0;
    int maxLength = 0;
    map[0] = -1;
    for(int x: nums){
        prefixSum += x;
        if(map.find(prefixSum) != map.end()){
            int length = idx - map[prefixSum];
            if(maxLength<length){
                maxLength = length;
            }
        }
        if(map.find(prefixSum) == map.end()){
            map[prefixSum] = idx;
        }
        idx++;
    }
    return maxLength;
}

int main(){
    vector<int> nums{1, 2, -3, 3, -3, 2};
    int length = longestEqualZero(nums);
    cout << "Longest subarray length : " << length << endl;
    return 0;
}
