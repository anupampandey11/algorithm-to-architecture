#include<iostream>
using namespace std;
void copyArray(int arr[] , int arrCopy[] , int &n){
    for (int i = 0; i < n; i++){
        arrCopy[i] = arr[i];
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int arrCopy[5];
    int n = 5;
    copyArray(arr, arrCopy, n);
    for (int i = 0; i < n; i++){
        cout << arrCopy[i] << " ";
    }
    return 0;
}
