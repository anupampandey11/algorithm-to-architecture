#include<iostream>
using namespace std;


pair<int ,int>search2DArray(const int arr[3][4] , int r , int c , int target){
    int low = 0;
    int high = r * c - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;
        int col = mid % c;
        int row = mid / c;
        if (arr[row][col] == target)
        {
            return {row, col};
        }
        else if(arr[row][col]<target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return {-1 , -1};
}

int main(){
    int arr[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int r = 3;
    int c = 4;
    int target = 5;
    auto [Row, Column] = search2DArray(arr, r, c, target);

    if(Row !=-1 && Column != -1){
        cout << "Target"<<target<<" : Found at arr[" << Row << "][" << Column << "]" << endl;
    }
}
