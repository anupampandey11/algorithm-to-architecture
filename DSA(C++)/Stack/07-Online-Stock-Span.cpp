// Leetcode - 901
// this is not leetcode version in that in fuction you have given price not vector
// so you have use  stack<pair<int , int>> prev_high_price
// one will store price and other will store spansz
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>stockSpaner(const vector<int>&price){
    int n = price.size();
    stack<int> prev_high_price;
    vector<int> result(n , 0) ;
    for (int i = 0; i < n; i++){
        while (!prev_high_price.empty() && price[i] >= price[prev_high_price.top()])
        {
            prev_high_price.pop();
        }
        if(prev_high_price.empty()){
            result[i] = i + 1 ;
        }
        else{
            result[i] = i - prev_high_price.top();
        }
        prev_high_price.push(i);
    }
        return result;
}

int main(){
    vector<int> price = {100 , 80 , 60 , 70 , 60 , 75 , 85};
    vector<int> result = stockSpaner(price);
    for(int x : result){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
