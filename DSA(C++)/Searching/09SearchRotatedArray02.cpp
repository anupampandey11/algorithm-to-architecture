#include<iostream>
using namespace std;

int searchSortedRotatedArrayII(const int arr[] , int n , int target){
    int low = 0;
    int high = n - 1;

    while(low<=high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target){
            return mid;
        }

        if(arr[low] == arr[mid] && arr[mid] == arr[high]){
            low++;
            high--;
            continue;
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
    int arr[6] = {2, 2, 2, 3, 4, 2};
    int target = 3;
    int n = 6;

    int idx = searchSortedRotatedArrayII(arr, n, target);

    if(idx == -1){
        cout << "Target Not Found !!" << endl;
    }
    cout << "Index of target : " << idx << endl;
}
