#include<iostream>
using namespace std;

/*
-- Info
int arr[5] = {2, 4, 6, 8, 10};
int n = 5;
int value = 7;
expected ans
floor = 6;
ceil = 8;


------ floor-------
-- iteration : 1
low = 0;
high = n-1 = 4;
ans = -1
mid = 0 + (4-0)/2 = 2;
arr[mid] => arr[2] = 6;

case 1: ✅
6 >= 8
ans = mid
high = mid- 1 => 1;

case 2: ❌
6 <= 8
low = mid + 1

*/


pair<int,int> FloorCeilVal(const int arr[] , int n , int value){
    int low = 0;
    int high = n - 1;
    int ans = -1;
    int floorIDX = -1;
    int ceilIDX = -1;
    while (low<=high){
        int mid = low + (high - low) / 2;
        if (arr[mid] ==value){
            floorIDX = mid;
            ceilIDX = mid;
            break;
        }
        else if (arr[mid]>value){
            ceilIDX = mid;
            high = mid - 1;
        }
        else{
            floorIDX = mid;
            low = mid + 1;
        }
    }
    return {floorIDX, ceilIDX};
}

int main(){
    int arr[5] = {2, 4, 6, 8, 10};
    int n = 5;
    int value = 7;

    pair<int , int > res  = FloorCeilVal(arr, n, value);
    if(res.first !=-1){
        cout << "floor of value : " << value << " is " << arr[res.first] << endl;
    }
    if(res.second !=-1){
        cout << "Ceil of value : " << value << " is " << arr[res.second] << endl;
    }
}
