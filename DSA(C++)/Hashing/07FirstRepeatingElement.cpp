#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{10, 20, 30, 20, 40, 10};
    unordered_set<int> keys;
    for(int x : arr){
        if (keys.find(x) != keys.end()) {
            cout << "First Duplicate Value : " << x<<endl;
            return 0;
        }
        keys.insert(x);
    }

    return 0;
}
