#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[] , int low , int mid , int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mergeSortAlgo(int arr[] , int low , int high){
    if(low>=high)
        return;

    int mid = low + (high - low) / 2;
    mergeSortAlgo(arr, low, mid);
    mergeSortAlgo(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main(){
    int arr[5] = {5, 2, 1, 8, 3};
    int n = 5;

    mergeSortAlgo(arr, 0 , n-1);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
