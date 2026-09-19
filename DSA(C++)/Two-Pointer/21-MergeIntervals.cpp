// Leetcode - 56 Merge Intervals


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>>merge(vector<vector<int>>&intervals){
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> result;
    int n = intervals.size();
    int start = 0;
    int end = 1;
    result.push_back(intervals[0]);
    for (int i = 1; i < n; i++)
    {
        int r1 = result.back()[start];
        int r2 = result.back()[end];
        int el1 = intervals[i][start];
        int el2 = intervals[i][end];

        if(r2>=el1){
            result.back()[end] = max(r2, el2);
        }
        else{
           result.push_back({el1, el2});
        }
    }

    return result;
}

int main(){
    vector<vector<int>> intervals{{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> result = merge(intervals);
    for(vector<int>&res : result){
        cout << "[";
        for (int x : res)
        {
            cout << x << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}
