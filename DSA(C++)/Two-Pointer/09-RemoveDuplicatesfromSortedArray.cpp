#include<iostream>
#include<vector>
using namespace std;
/**
 * 1,2,2, 3, 4, 6, 9, 10
 * step-1:
 * scan = 1;
 * write = 0;
 * 1 == 2 --> 0 write++ , scan++;
 * step-2:
 * scan = 2;
 * write = 1;
 *
 *
 */

int removeDuplicates(vector<int>&nums){
    int scan;
    int write = 0;
    for (scan = 1; scan < nums.size(); scan++){
        if(nums[scan] != nums[write]){
            write++;
            nums[write] = nums[scan];
        }
    }
    return ++write;
}

int main(){
    vector<int> nums{1,2, 2, 3, 4, 6, 9, 10};
    int counter = removeDuplicates(nums);

    for (int i = 0; i < counter; i++){
        cout << nums[i] << " ";
    }


    return 0;

}
