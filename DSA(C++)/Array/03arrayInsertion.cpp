#include<iostream>
using namespace std;

// function for insertion at any position
void insert(int arr[] , int &n, int pos , int value ){
    if(pos < 0 || pos > n) {
        cout << "Invalid Position";
        return;
    }

    for(int i = n-1; i>=pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    n++;

}

int main(){
    int arr[10] = {1 , 2 , 3 , 4, 5};

    // insertion at the end
    // int n = 5;
    // arr[n] = 60;

    // for(int x : arr){
    //     cout<<x<<" ";
    // }


    // ********
    // insertion at the begining
    // int n = 5;
    // int val = 20;

    // for(int i=n-1; i>=0; i--){
    //     arr[i+1] = arr[i];
    // }
    // arr[0] = val;
    // n++;
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // shift all the elements from  right to left (cause of backward loop)

    // *********
    // insert at any given postion
    int n = 5;
    int position = 4;
    int value = 11;

    // for(int i = n-1; i>=position; i-- ){
    //     arr[i+1] = arr[i];
    // }
    // arr[position] = value;
    // n++;

    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    insert(arr , n , position, value );

     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
