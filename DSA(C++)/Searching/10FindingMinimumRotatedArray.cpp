#include<iostream>
using namespace std;

int minInSortedRotatedArrayI(const int arr[] , int n){
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;


    while(low<=high){
         if (arr[low] <= arr[high])
    {
        if(ans>=arr[low]){
                ans = arr[low];
                break;
        }
    };
        int mid = low + (high - low) / 2;
        if(arr[low]<=arr[mid]){
            // left is sorted
            if(ans>=arr[low]){
                ans = arr[low];
            }
            low = mid + 1;
        }
        else{
            // right is sorted
            if(ans>=arr[mid]){
                ans = arr[mid];
            }
            high = mid - 1;
        }
    }

    return ans;
}

int minInSortedRotatedArrayII(const int arr[] , int n){
    int low = 0;
    int high = n - 1;
    if (arr[low] <= arr[high])
    {
        return arr[low];
    };

    while(low<high){
        int mid = low + (high - low) / 2;
        if(arr[mid]>arr[high]){
            low = mid + 1;
        }
        else{
            high = mid;
        }
    }

    return arr[low];
}



int main(){
    int arr[8] = {7, 8, 9, 1, 2, 3, 4, 5};
    int n = 8;

    int min = minInSortedRotatedArrayI(arr, n);
    cout << "Minimum value in arrayI is : " << min << endl;

    min = minInSortedRotatedArrayII(arr, n);
    cout << "Minimum value in arrayII is : " << min << endl;
}

