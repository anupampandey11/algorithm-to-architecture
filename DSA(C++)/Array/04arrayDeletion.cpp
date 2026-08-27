#include<iostream>
using namespace std;

void deleteElement(int arr[], int &n, int pos){
    if(pos>=n || pos<0){
        cout<<"Invalid Position"<<endl;
        return;
    }

    for(int i = pos; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
}

int main(){

    int arr[10] = {1 ,3 ,5, 7, 9};
    int n = 5;
    int pos = 2;

    deleteElement(arr,n,pos);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
