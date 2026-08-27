#include<iostream>
using namespace std;

void swapVal(int arr[] , int i , int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[] , int low ,int high){
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++){
        if(arr[j]<pivot){
            i++;
            swapVal(arr, i, j);
        }
    }
    swapVal(arr, i + 1, high);
    return i + 1;
}

void quickSortAlgo(int arr[] ,int low , int high){
    if(low<high){
        int partitionIdx = partition(arr, low, high);
        quickSortAlgo(arr, low, partitionIdx - 1);
        quickSortAlgo(arr, partitionIdx +1 , high);
    }
}


int main(){
    int arr[100] = {
        742, -18, 3051, 67, 999, -420, 13, 5806, 144, -73,
        2210, 0, 8888, -999, 456, 31, 7002, -12, 64, 390,
        1205, -305, 777, 42, 10001, -1, 235, 6789, -56, 812,
        91, 4500, -777, 300, 17, 9090, -234, 654, 222, 73,
        501, -88, 7600, 29, 1345, -600, 8, 980, 3333, -45,
        120, 4321, -321, 678, 55, 8901, -5, 210, 7777, 36,
        6000, -910, 123, 4567, 19, 2500, -150, 9999, 84, 302,
        710, -66, 5050, 27, 1111, -444, 202, 8700, 61, 3999,
        -22, 640, 15, 2750, 909, -700, 48, 333, 7654, 102,
        -333, 890, 25, 6120, 74, 4444, -90, 158, 9200, 11};
    int n = 100;
    quickSortAlgo(arr, 0 , n-1);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
