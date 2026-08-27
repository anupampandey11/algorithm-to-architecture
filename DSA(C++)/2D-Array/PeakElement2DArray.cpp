#include <iostream>
using namespace std;

int maxInRowPosition(const int arr[3][4], int r, int mid)
{
    int maxElement = INT_MIN;
    int row = 0;
    for (int i = 0; i < r; i++)
    {
        if (maxElement < arr[i][mid])
        {
            maxElement = arr[i][mid];
            row = i;
        }
    }
    return row;
}

pair<int, int> findPeakElement(const int arr[3][4], int r, int c)
{
    int low = 0;
    int high = c - 1;
    int row = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        row = maxInRowPosition(arr, r, mid);
        int left = mid > 0 ? arr[row][mid - 1] : INT_MIN;
        int right = mid < c - 1 ? arr[row][mid + 1] : INT_MIN;
        if (arr[row][mid] > right && arr[row][mid] >left)
        {
            return {row, mid};
        }

        else if (arr[row][mid] > right)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return {-1, -1};
}

int main()
{
    int arr[3][4] = {
        {1, 2, 3, 1},
        {4, 5, 6, 2},
        {7, 8, 9, 3}};
    int r = 3;
    int c = 4;

    auto [row, col] = findPeakElement(arr, r, c);
    if(row != -1 && col !=-1){
        cout << "Peak Element is : " << arr[row][col] << endl;
    }


    return 0;
}
