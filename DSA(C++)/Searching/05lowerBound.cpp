#include<iostream>
using namespace std;


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
    int arr[8] = {1, 3, 4, 8, 10, 14, 19, 22};
    int n = 8;
    int target = 23;

    int lowerB = lowerBound(arr, n, target);
    cout << "Lower Bound : " << lowerB << endl;

    return 0;
}
