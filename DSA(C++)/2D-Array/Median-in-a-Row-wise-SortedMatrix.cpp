#include <iostream>
using namespace std;

pair<int, int> findLimits(const int arr[3][3], int r, int c)
{
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < r; i++)
    {
        if (min > arr[i][0])
        {
            min = arr[i][0];
        }
        if (max < arr[i][c - 1])
        {
            max = arr[i][c - 1];
        }
    }
    return {min, max};
}

int countLessEqual(const int arr[3][3] ,int r , int c, int mididx){
    int count = 0;
    int low = 0;
    int high = c - 1;
    int ans = c;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[r][mid]>mididx){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int findMedian(const int arr[3][3], int r, int c, int medianIdx)
{
    auto [low, high] = findLimits(arr, r, c);
    while(low<=high){
        int mid = low + (high - low) / 2;
        int countValue = 0;
        for (int i = 0; i < r; i++)
        {
            countValue += countLessEqual(arr, i, c, mid);
        }
        if(countValue<=medianIdx){
            low = mid +1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}

int main()
{
    int arr[3][3] = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}};

    int r = 3;
    int c = 3;
    int medianIdx = r * c / 2;
    int medianElement = findMedian(arr, r, c, medianIdx);
    cout << medianElement << endl;

    return 0;
}

/Users/air-m1/DSA(C++)/2D-Array/Median-in-a-Row-wise-SortedMatrix.cpp
