/**
 * @file 01.cpp
 * @brief : Key Creation
 */

#include<iostream>
#include<vector>
using namespace std;

bool isAvailable(vector<int>bucket[] , int key , int n){
    int idx = key % n;
    for (int value : bucket[idx]) {
        if (value == key) {
            return true;
        }
    }
    return false;
}

void deleteFromBucket(vector<int>bucket[] , int key , int n){
    int idx = key % n;
    for (auto it = bucket[idx].begin(); it!=bucket[idx].end(); it++){
        if(*it == key){
            bucket[idx].erase(it);
            cout << "Deleted " << key << endl;
            return;
        }
    }
}

int main(){
    int arr[7] = {10, 20, 30, 13, 50, 60, 70};
    const int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> bucket[n];
    for (int i = 0; i < n; i++){
        int idx = arr[i] % n;
        bucket[idx].push_back(arr[i]);
    }
    int key;
    cout << "Key = ";
    cin >> key;
    if (isAvailable(bucket, key , n))
    {
        cout << "Found !!" << endl;
    }
    else{
        cout << "Not Found !!" << endl;
    }
    deleteFromBucket(bucket, key, n);
    return 0;
}
