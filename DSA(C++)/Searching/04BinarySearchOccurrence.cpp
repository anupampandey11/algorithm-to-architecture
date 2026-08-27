#include <iostream>
using namespace std;

int firstOcc(const int arr[], int low, int high, int target)
{
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int lastOcc(const int arr[], int low, int high, int target)
{
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int countOcc(int arr[], int low, int high, int target)
{
    int firstOccerrence = firstOcc(arr, low, high, target);
    int lastOccerrence = lastOcc(arr, low, high, target);
    if(firstOccerrence == -1){
        return 0;
    }
    return lastOccerrence - firstOccerrence + 1;;
}
int main()
{
    int arr[10] = {2, 3, 4, 4, 5, 6, 7, 7, 7, 9};
    int n = 10;
    int target = 7;
    int low = 0;
    int high = n - 1;

    int firstOccerrence = firstOcc(arr, low, high, target);

    cout << "First Occurrence of " << target << " at index : " << firstOccerrence << endl;

    int lastOccerrence = lastOcc(arr, low, high, target);

    cout << "Last Occurrence of " << target << " at index : " << lastOccerrence << endl;

    int countOccerrence = countOcc(arr, low, high, target);

    cout << "Count Occurrence of " << target << " at index : " << countOccerrence << endl;
}
