#include<iostream>
using namespace std;

int main(){
    const int n = 5;
    int arr[n] = {2 , 4 , 6, 8 , 10};
    // for loop
    // for(int i = 0; i<n; i++){
    //     cout<<&arr[i]<<"->" <<arr[i]<<endl;
    // }
    // cout<<"while loop"<<endl;

    // while loop
    // int i=0;
    // while(i<n){
    //     cout<<&arr[i]<<"->" <<arr[i]<<endl;
    //     i++;
    // }

    // // Range-based for Loop
    // for(int x : arr){
    //     cout<<&x<<"->" <<x<<endl;
    // }

    // modify elements during traversal
     for(int &x : arr){
        x = x + 10;
    }

     for(int x : arr){
        cout<<&x<<"->" <<x<<endl;
    }
    

    return 0;
}
