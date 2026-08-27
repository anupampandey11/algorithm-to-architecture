#include<iostream>
using namespace std;

// imp :- the searchinsertindex is nothing but the lower bound 
int lowerBound(const int arr[] , int n , int target){
    int low = 0;
    int high = n - 1;
    int ans = n;

    while(low<=high){
        int mid = low + (high - low) / 2;
        if (arr[mid]>=target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    int arr[5] = {2, 4, 6, 8, 10};
    int n = 5;
    int target = 9;

    int searchInsertIndex = lowerBound(arr, n, target);
    cout << searchInsertIndex << endl;
}
