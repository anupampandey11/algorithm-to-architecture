#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// when relative order is not required
// void pivotArray(vector<int>&nums , int pivot){
//     int n = nums.size();
//     int low = 0;
//     int mid = 0;
//     int high = n - 1;
//     while(mid<=high){
//         if(nums[mid] == pivot){
//             mid++;
//         }
//         else if(nums[mid]>pivot){
//             swap(nums[mid], nums[high]);
//             high--;
//         }
//         else{
//             swap(nums[low], nums[mid]);
//             low++;
//             mid++;
//         }
//     }
// }


// when relative order matters
vector<int>pivotArray(const vector<int>&nums , int pivot){
    vector<int> result;
    for(int x : nums){
      if(x<pivot){
          result.push_back(x);
      }
    }
    for(int x : nums){
      if(x==pivot){
          result.push_back(x);
      }
    }
    for(int x : nums){
      if(x>pivot){
          result.push_back(x);
      }
    }
    return result;
}

int main(){
    // vector<int> nums{9, 12, 5, 10, 14, 3, 10};
    // int pivot = 10;

    vector<int> nums{-3,4,3,2};
    int pivot = 2;
    // solution : 1(when relative order doesnot matter in problem)
    // pivotArray(nums, pivot);
    // for(int x : nums){
    //     cout << x << " ";
    // }

    // solution : 2(when relative order matters in problem)
    vector<int>result  = pivotArray(nums, pivot);
    for(int x : result){
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
