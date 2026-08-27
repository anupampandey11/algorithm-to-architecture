#include<iostream>
using namespace std;

int rotationCount(const int arr[], int n){
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if(arr[low] <= arr[high]){
            return low;
        }
        if(arr[low]<=arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid;
        }
    }
    return low;
}

int main(){
    int arr[8] = {7, 8, 9, 1, 2, 3, 4, 5};
    int n = 8;

    int count = rotationCount(arr, n);
    cout << "Minimum value in arrayI is : " << count << endl;

    return 0;
}
