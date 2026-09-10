#include<iostream>
#include<vector>
using namespace std;

void moveZeros(vector<int>&nums){
    int write = 0;
    for (int scan = 0; scan < nums.size(); scan++){
        if(nums[scan] != 0){
            nums[write] = nums[scan];
            write++;
        }
    }
    for (int i = write; i < nums.size(); i++){
        nums[i] = 0;
    }
}

int main(){
    vector<int>nums{0, 1, 0, 3, 12};
    moveZeros(nums);

    for(int x : nums){
        cout << x << " " << endl;
    }

    return 0;
}
