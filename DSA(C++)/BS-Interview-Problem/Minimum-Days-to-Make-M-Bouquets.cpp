#include<iostream>
using namespace std;
int maxEl(const int arr[] , int n ){
    int max = arr[0];
    for (int i = 1; i < n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int minEl(const int arr[] , int n ){
    int min = arr[0];
    for (int i = 1; i < n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int getNumberOfBouquets(const int arr[] , int mid , int n , int k){
    int count = 0;
    int bouquets = 0;
    for (int i = 0; i < n; i++)
    {
        if (mid  >= arr[i])
        {
            count++;
            if(count==k){
                bouquets++;
                count = 0;
            }
        }
        else{
            count = 0;
        }
    }
    return bouquets;
}

int minDaysToBloom(const int arr[] , int n , int m ,  int k ){
    if(m*k > n){
        return -1;
    }
    int low = minEl(arr, n);
    int high = maxEl(arr, n);
    int minDays = high;
    while (low <= high)
    {

        int mid = low + (high - low) / 2;
        int bouquets = getNumberOfBouquets(arr, mid, n, k);
        if (bouquets >= m)
        {
            minDays = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }

    }
    // 1 , 2 , 3 , 4, 5, 6, 7 , 8 , 10

    return minDays;
}

int main(){
    int arr[5] = {1, 10, 3, 10, 2};
    int n = 5;
    int m = 3;
    int k = 1;

    int minDays = minDaysToBloom(arr, n, m, k);
    cout << "Minimum days to make " << m << " bouquets : " << minDays << endl;

    return 0;
}
