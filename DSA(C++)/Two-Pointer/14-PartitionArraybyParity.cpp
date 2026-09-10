#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void partArray(vector<int>&nums){
    //2, 4, 6, 3, 1, 5
    int left = 0;
    int right = nums.size() - 1;
    while(left<right){
        // left pointer to scan even number if found move left++ else stop
        // right pointer to scan odd number if found move right-- else stop
        if(nums[left]%2==0){
            left++;
        }
        else if(nums[right]%2!= 0){
            right--;
        }
        else{
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
}

int main(){
    vector<int> nums{2, 1, 6, 3, 4, 5};
    partArray(nums);
    for (int x : nums){
        cout << " " << x;
    }
    cout << endl;
    return 0;
}
