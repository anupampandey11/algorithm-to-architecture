// leetcode - 88

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void merge(vector<int>&nums1 , int n1 , vector<int>&nums2 , int n2){
    if(n2<=0 ){
        return;
    }
    int i = n1 - 1;
    int j = n2 - 1;
    int k = n1 + n2 - 1;
    while(i>=0 && j>=0){
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
        }
        else{
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    while(j>=0){
        nums1[k] = nums2[j];
            k--;
            j--;
    }
}

int main(){
    vector<int> nums1{1, 2, 3, 0 , 0 ,0};
    vector<int> nums2{2, 5, 6};
    int n1 = nums1.size() - nums2.size();
    int n2 = nums2.size();
    merge(nums1, n1, nums2, n2);
    for(int x : nums1){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
