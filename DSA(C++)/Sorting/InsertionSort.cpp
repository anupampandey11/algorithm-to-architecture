#include<iostream>
using namespace std;

void insertionSortAlgo(int arr[] , int n){
    for (int i = 1; i < n; i++){
        int element = arr[i];
        int lastIdx = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if(arr[j]>element){
                arr[j+1] = arr[j];
                 lastIdx = j;
            }
            else{
                break;
            }
        }
        arr[lastIdx] = element;
    }
}



int main(){
    int arr[5] ={5, 2, 8, 1, 3};
    int n = 5;
    insertionSortAlgo(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
 return 0;
}
