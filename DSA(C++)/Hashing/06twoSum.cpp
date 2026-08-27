#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void twoSum(const vector<int>&arr , int target){
    unordered_set<int> values;
    for(int x : arr){
        int key = target - x;
        if (values.find(key) != values.end())
        {
            cout << "Found !!" << endl;
            cout << key << " + " << x;
            return;
        }
        values.insert(x);
    }
}

int main(){
    vector<int> arr{2, 7, 11, 15};
    int target = 9;
    twoSum(arr, target);
    cout << endl;
    return 0;
}
