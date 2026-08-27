#include <iostream>
using namespace std;

void bubbleSortAlgo(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
        {
            return;
        }
    }
}

int main()
{
    int arr[5] = {5, 2, 8, 1, 3};
    int n = 5;
    bubbleSortAlgo(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
