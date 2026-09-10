#include<iostream>
#include<vector>
using namespace std;

/**
 * [1, 2, 3, 4, 5, 9]
 * [2, 2, 3, 4, 6, 9, 10]
 *
 * step 1:
 * [1] , 2 , 3 , 4 , 5 , 9
 * [2] , 2 , 3 ,4, 6, 9, 10
 * 1 == 2 -> 0
 * 1 > 2  -> 0
 * 1 < 2 -> 1 ==> p1++;
 *
 * step 2:
 * 1 , [2]  , 3 , 4 , 5 , 9;
 * [2] , 2 , 3 , 4 , 6 , 9 , 10;
 * 2 == 2 ->
 *
 */

vector<int>intersection(const vector<int>& arr1 , const vector<int>& arr2){
    vector<int> resultantArray;
    int p1 = 0;
    int l1 = arr1.size() - 1;
    int p2 = 0;
    int l2 = arr2.size() - 1;

    while(p1<=l1 && p2<=l2){
        if(arr1[p1] == arr2[p2]){
            resultantArray.push_back(arr1[p1]);
            p1++;
            p2++;
            continue;
        }
        if(arr1[p1]>arr2[p2]){
            p2++;
        }
        else{
            p1++;
        }
    }
    return resultantArray;
}

int main(){
    vector<int> arr1{1, 2, 3, 4, 5, 9};
    vector<int> arr2{2, 2, 3, 4, 6, 9, 10};
    vector<int> result = intersection(arr1, arr2);

    for(int x : result){
        cout << x << " ";
    }
    return 0;
}
