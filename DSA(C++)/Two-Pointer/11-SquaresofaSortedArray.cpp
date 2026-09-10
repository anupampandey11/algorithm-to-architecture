#include<iostream>
#include<vector>
using namespace std;

int processNum(int num){
    if(num >= 0){
        return num;
    }
    else{
        return -1 * num;
    }
}

vector<int>squareArray(const vector<int>&nums){
    int n = nums.size();
    int left = 0;
    int right = n - 1;
    vector<int> array(n);
    int i = n - 1;
    while (left <= right)
    {
        if(processNum(nums[left])>processNum(nums[right])){
            array[i] = nums[left] * nums[left];
            left++;
        }
        else{
            array[i] = nums[right] * nums[right];
            right--;
        }
        i--;
    }
    return array;
}

int main(){
    vector<int> nums{-4, -2, 0, 3, 5};
    vector<int> squaredArray = squareArray(nums);
    for(int x : squaredArray){
        cout << x << " ";
    }
    return 0;
}
