#include<iostream>
using namespace std;


int linearSearchFirstOccurrence(const int arr[] , int n, int value){
    for (int i = 0; i < n; i++){
        if(arr[i] == value){
            return i;
        }
    }
    return -1;
}

int linearSearchLastOccurrence(const int arr[] , int n, int value){
    for (int i = n-1; i >= 0; i--){
        if(arr[i] == value){
            return i;
        }
    }
    return -1;
}

int linearSearchCountOccurrence(const int arr[] , int n, int value){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == value){
           count++;
        }
    }
    return count;
}

void linearSearchAllOccurrence(const int arr[] , int n, int value){
    for (int i = 0; i <n; i++)
    {
        if(arr[i] == value){
            cout << "Occurrence " << i << "th" << " -> " << arr[i] << endl;
        }
    }
}

int main(){
    int arr[7] = {1, 2, 3, 4, 5 , 5, 7};
    int n = 7;
    int value = 5;

    int firstOccurrence = linearSearchFirstOccurrence(arr, n, value);
    cout <<"First Occurrence : "<< firstOccurrence << endl;
    int lastOccurrence = linearSearchLastOccurrence(arr, n, value);
    cout <<"Last Occurrence : "<< lastOccurrence << endl;
    int CountOccurrence = linearSearchCountOccurrence(arr, n, value);
    cout <<"Count Occurrence : "<< CountOccurrence << endl;
    linearSearchAllOccurrence(arr, n, value);
}
