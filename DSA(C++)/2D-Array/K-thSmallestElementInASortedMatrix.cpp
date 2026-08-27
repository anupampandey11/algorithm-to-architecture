#include<iostream>
using namespace std;

int countLessEqual(const int arr[3][3] ,int r , int c , int midValue){
    int low = 0;
    int high = c - 1;
    int count = c;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[r][mid] > midValue)
        {
            high = mid - 1;
            count = mid;
        }
        else{

            low = mid + 1;
        }
    }
    return count;
}

int kthSmallestElement(const int arr[3][3] , int r , int c , int k){
    int low = arr[0][0];
    int high = arr[r - 1][c - 1];
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int count = 0;
        for (int i = 0; i < r; i++){
            count += countLessEqual(arr, i, c, mid);

        }
        if (count >= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    int arr[3][3] = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}};

    int r = 3;
    int c = 3;
    int k = 8;

    int element = kthSmallestElement(arr, r, c, k);
    cout << "kth smallest number : " << element << endl;
    return 0;
}
