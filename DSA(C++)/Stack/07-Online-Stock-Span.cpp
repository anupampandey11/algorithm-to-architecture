// Leetcode - 739
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>stockSpaner(const vector<int>&price){
    int n = price.size();
    stack<int> prev_high_price;
    vector<int> result(n);
    for (int i = 0; i < n; i++){
        
    }

        return result;
}

int main(){
    vector<int> price = {100, 80, 60, 70, 60, 75, 85};
    vector<int> result = stockSpaner(price);
    for(int x : result){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
