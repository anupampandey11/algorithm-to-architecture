#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std; 

int pairSumCount(const vector<int>&nums , int target){
    unordered_map<int , int> freq;
    int pairCount = 0;
    for (int x : nums)
    {
        int key = target - x;
        if(freq.find(key) != freq.end()){
            pairCount += freq[key];
        }
      freq[x]++;
    }

    return pairCount;
}

int main(){
    vector<int> nums{5 ,5 , 5};
    int target = 10;
    int pairCount = pairSumCount(nums, target);
    cout << "Number of Pair = " << pairCount << endl;
    return 0;
}
