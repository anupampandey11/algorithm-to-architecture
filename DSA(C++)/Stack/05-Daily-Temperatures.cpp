// LeetCode - 739
#include<iostream>
#include<vector>
#include<stack>
using namespace std;


vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> result(n);
    stack<int> temp;

    for (int i = 0; i < n; i++){

        while(!temp.empty() && temperatures[i] > temperatures[temp.top()]){
            int waiting_index = temp.top();
            result[waiting_index] = (i - waiting_index);
            temp.pop();
        }

        temp.push(i);
    }

     return result;
}

int main(){
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> result = dailyTemperatures(temperatures);
    for(int x : result){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
