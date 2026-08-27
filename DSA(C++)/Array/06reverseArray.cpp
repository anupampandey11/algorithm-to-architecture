#include<iostream>
using namespace std;

void reverseArrayA1(int arr[], int temp[], int &n){
    //  approach 1; space and time -> O(n)
    for (int i = 0; i<n; i++){
        temp[i] = arr[n - 1 - i];
    }

}

void reverseArrayA2(int arr[] , int &n){
    // approach-2 two pointer approach
    int left = 0;
    int right = n - 1;
    int temp;

    while (left<right){
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main(){
    int n = 6;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int temp[6];

    // Approach 1
    reverseArrayA1(arr, temp, n);
    cout<<"A1 -> ";
    for (int i = 0; i < n; i++){
        cout << temp[i] << " ";
    }
    cout << endl;

    // Approach 2
    reverseArrayA2(arr, n);
    cout<<"A2 -> ";
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }

        return 0;
}
