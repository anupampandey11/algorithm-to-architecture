#include<iostream>
using namespace std;

pair<int ,int> searchIn2DArrayII(const int arr[5][5] , int r , int c , int target){
    int row = 0;
    int col = c - 1;
    while(row < r && col>=0){
        if(arr[row][col] == target){
            return {row, col};
        }
        else if(arr[row][col] > target){
            col--;
        }
        else{
            row++;
        }
    }

    return {-1, -1};
}

int main(){
    int arr[5][5] = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}};
    int r = 5;
    int c = 5;
    int target = 23;
    auto [Row, Column] = searchIn2DArrayII(arr, r, c, target);
     if(Row !=-1 && Column != -1){
        cout << "Target "<<target<<" : Found at arr[" << Row << "][" << Column << "]" << endl;
    }
    else{
        cout << "Value not found !!" << endl;
    }

    return 0;
}
