#include<iostream>
using namespace std;

int searchSortedRotatedArray(const int arr[] , int n , int target){
    int low = 0;
    int high = n - 1;

    while(low<=high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target){
            return mid;
        }

        else if(arr[mid]>=arr[low]){
            if (arr[low]<=target && arr[mid]>target)
            {
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(arr[mid]<target && arr[high]>=target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[6] = {15, 18, 2, 3, 6, 12};
    int target = 6;
    int n = 6;

    int idx = searchSortedRotatedArray(arr, n, target);

    if(idx == -1){
        cout << "Target Not Found !!" << endl;
    }
    cout << "Index of target : " << idx << endl;
}
