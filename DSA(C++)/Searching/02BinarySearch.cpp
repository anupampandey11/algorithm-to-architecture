#include<iostream>
using namespace std;

int binarySearch(int arr[] , int n ,int target){
    int low = 0;
    int high = n - 1;
    while(low<=high){
        int mid = low + (high - low) / 2;
        // case 1 :
        // target is found and return the index;`
        if(arr[mid] == target){
            return mid;
        }

        // case 2 :
        // arr[mid] less than target increase than low = mid + 1
        else if(arr[mid]<target){
            low = mid + 1;
        }
        // case 3: and else case
        // if arr[mid] greater than target than high = mid - 1
        else{
            high = mid - 1;
        }
    }

    return -1;
}

int main(){
    int arr[5] = {5, 10, 13, 40, 41};
    int n = 5;
    int target = 40;

    int index = binarySearch(arr, n, target);

    if(index==-1){
        cout << "Target is not found in search space"<<endl;
    }
    else{
        cout << target << " Found at : " << index<<endl;
    }

    return 0;
}
