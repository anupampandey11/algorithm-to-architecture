#include<iostream>
using namespace std;

/*
{1, 3, 5, 7 , 6 , 5, 4, 2 , 1 ,2 , 7};
low = 1
high = n-2
mid = 1 + (9-1)/2 = 5
arr[mid] = 5;
case 1: 6 < 5 > 4 false
case 2 : 5 > 4 true

*/

int findPeakElement(const int arr[] , int n){
    int low = 0;
    int high = n - 1;

    while(low<high){
        int mid = low + (high - low) / 2;
        if(arr[mid]>arr[mid+1]){
            high = mid;
        }
        else{
            low = mid + 1;
        }
    }

    return low;
}

int main(){
    int arr[11] = {1, 3, 5, 7 , 6 , 5, 4, 2 , 1 ,2 , 7};
    int n = 11;

    int idx = findPeakElement(arr, n);
    cout << "idx : " << idx << endl;
    if (idx != -1)
    {
        cout << "Peak Element : " << arr[idx] << endl;
    }

    return 0;
}
