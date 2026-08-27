#include<iostream>
using namespace std;

void selectionSortAlgo(int arr[] , int n){
    for (int i = 0; i < n-1; i++){
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}


int main(){
    int arr[5] ={5, 2, 8, 1, 3};
    int n = 5;
    selectionSortAlgo(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
 return 0;
}
