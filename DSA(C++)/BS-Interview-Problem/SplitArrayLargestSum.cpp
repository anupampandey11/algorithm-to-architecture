#include<iostream>
using namespace std;

pair<int , int> findLimits(const int arr[] , int n ){
    int sum = 0;
    int maxElement = INT_MIN;

    for (int i = 0; i < n; i++){
        if(maxElement<arr[i]){
            maxElement = arr[i];
        }
        sum += arr[i];
    }
    return {maxElement, sum};
}

bool isPossibleSolution(const int arr[] , int n , int k ,int mid){
    int partitions = 1;
    int value = 0;

    for (int i = 0; i < n; i++){
        if(value+arr[i]<=mid){
            value += arr[i];
        }
        else{
            partitions++;
            if(partitions>k){
                return false;
            }
            value = arr[i];
        }
    }
        return true;
}

int largestSumSmall(const int arr[] , int n , int k){
    auto [low, high] = findLimits(arr, n);
    if(k>n){
        return -1;
    }
    while(low<=high){
        int mid = low + (high - low) / 2;
        if (isPossibleSolution(arr , n , k , mid)){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return low;
}
int main(){
    int arr[5] = {7, 2, 5, 10, 8};
    int k = 2;
    int n = 5;

    int SmallestSum = largestSumSmall(arr, n, k);
    cout << "Largest sum as small as possible for " << k << " continuous subarrays is :" << SmallestSum << endl;

    return 0;
}
