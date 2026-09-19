// LC : 350
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>intersect(vector<int>&nums1 , vector<int>&nums2){
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    vector<int> result;
    int n1 = 0;
    int n2 = 0;
    while(n1 < nums1.size() && n2 < nums2.size()){
        if(nums1[n1] == nums2[n2]){
            result.push_back(nums1[n1]);
            n1++;
            n2++;
        }
        else if(nums1[n1] > nums2[n2]){
            n2++;
        }
        else{
            n1++;
        }
    }

    return result;
}

int main(){
    vector<int> nums1{1, 2, 2, 1};
    vector<int> nums2{2, 2};
    vector<int> result = intersect(nums1, nums2);
    for(int x : result){
        cout << x << " ";
    }
    return 0;
}
