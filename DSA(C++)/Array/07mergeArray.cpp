#include<iostream>
using namespace std;

void mergeArrayA1(int arr1[] ,int n1  , int arr2[], int n2 , int mergedArr[]){
    int k = 0;

    for (int i = 0; i < n1; i++){
        mergedArr[k++] = arr1[i];
    }
     for (int i = 0; i < n2; i++){
        mergedArr[k++] = arr2[i];
    }
}

int main(){
    int arr1[3] = {1, 3, 5};
    int n1 = 3;

    int arr2[3] = {7, 9, 11};
    int n2 = 3;

    int mergedArr[6];
    mergeArrayA1(arr1, n1, arr2, n2, mergedArr);

    for (int i = 0; i < n1 + n2; i++){
        cout << mergedArr[i] << " ";
    }

    return 0;
}
