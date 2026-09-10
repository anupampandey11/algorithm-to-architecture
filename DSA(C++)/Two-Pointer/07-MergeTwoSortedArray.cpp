#include<iostream>
#include<vector>
using namespace std;

vector<int>mergeArray(const vector<int>& arr1 , const vector<int>& arr2){
    vector<int> resultantArray;
    int p1 = 0;
    int l1 = arr1.size() - 1;
    int p2 = 0;
    int l2 = arr2.size() - 1;

    while(p1<=l1 && p2<=l2){
        if(arr1[p1]>arr2[p2]){
            resultantArray.push_back(arr2[p2]);
            p2++;
        }
        else{
            resultantArray.push_back(arr1[p1]);
            p1++;
        }
    }
    while(p1<=l1){
        resultantArray.push_back(arr1[p1]);
        p1++;
    }
    while(p2<=l2){
        resultantArray.push_back(arr2[p2]);
        p2++;
    }
    return resultantArray;
}

int main(){
    vector<int> arr1{1, 3, 5, 9};
    vector<int> arr2{2, 2, 4, 6, 10};
    vector<int> result = mergeArray(arr1, arr2);

    for(int x : result){
        cout << x << " ";
    }
    return 0;
}
