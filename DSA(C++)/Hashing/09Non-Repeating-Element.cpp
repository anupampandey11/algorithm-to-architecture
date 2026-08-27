#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int main(){
    vector<int> nums{10, 20, 30, 10, 40, 50, 20, 30};
    unordered_map<int, int> freq;
    for(int x: nums){
        freq[x]++;
    }

    for(int x : nums){
        if(freq[x] == 1){
            cout << x << endl;
            return 0;
        }
    }

    for(int x : nums){
        if(freq[x] == 1){
            cout << x << endl;
        }
    }

    return 0;
}
