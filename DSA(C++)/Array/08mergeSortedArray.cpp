#include <iostream>
using namespace std;

void mergeTwoSortedArray(int arr1[], int n1, int arr2[], int n2, int mergedArr[])
{
    // 1 , 3 , 5 => i
    // 2 , 4  => j
    // i = 0 , j = 0 , k = 0 (value  of arr1[i] and i++ , k++)
    // i = 1 , j = 0,  k = 1 (value of arr2[j] and j++ , k++)
    // i = 1 , j = 1 , k =2 (value of arr1[i] and i++ , k++)
    // i = 2 , j = 1 , k =3 (value of arr[j] and j++ , k++)
    // break
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            mergedArr[k++] = arr1[i++];
        }
        else
        {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < n1)
    {
        mergedArr[k++] = arr1[i++];
    }
    while (j < n2)
    {
        mergedArr[k++] = arr2[j++];
    }
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int n1 = 5;
    int arr2[5] = {2, 4, 6, 8, 10};
    int n2 = 5;
    int mergedArr[10];

    mergeTwoSortedArray(arr1, n1, arr2, n2, mergedArr);
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << mergedArr[i] << " ";
    }
}
