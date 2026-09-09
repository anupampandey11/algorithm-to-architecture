#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int countSubArraySumZero(const vector<int>&nums){
    unordered_map<int, int> map;
    int count = 0;
    int prefixSum = 0;
    map[0] = 1;
    for(int x: nums){
        prefixSum += x;
        if(map.find(prefixSum) != map.end()){
            count += map[prefixSum];
        }
        map[prefixSum]++;
    }
    return count;
}

int main(){
    vector<int> nums{1, -1, 2, -2, 3, -3};
    int count = countSubArraySumZero(nums);
    cout << "Number of Sub Array with sum 0" << count << endl;
    return 0;
}
