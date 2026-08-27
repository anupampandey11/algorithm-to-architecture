#include<iostream>
using namespace std;
int recursiveBinarySearch(const int arr[] , int low  , int high , int target){
    if(low>high){
        return -1;
    }
    int mid = low + (high - low) / 2;
    if(arr[mid]== target){
        return mid;
    }
    else if(arr[mid]<target){
        return recursiveBinarySearch(arr, mid+1, high, target);
    }
    else{
        return recursiveBinarySearch(arr, low, mid-1, target);
    }
}

int main(){
    int arr[7] = {5, 10, 13, 40, 41, 55, 60};
    int n = 7;
    int low = 0;
    int high = n - 1;
    int target = 41;

    int index = recursiveBinarySearch(arr, low , high, target);

    if(index==-1){
        cout << "Target is not found in search space"<<endl;
    }
    else{
        cout << target << " Found at : " << index<<endl;
    }
}
