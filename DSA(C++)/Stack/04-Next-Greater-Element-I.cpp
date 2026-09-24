// LeetCode - 496
#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> next_element_map;
    stack<int> waiting_element;
    vector<int> result = {};
    int n1 = nums1.size();
    int n2 = nums2.size();

    if(n1>n2){
        return result;
    }
    waiting_element.push(nums2[0]);
    for (int i = 1; i < n2; i++)
    {
        while(!waiting_element.empty() && nums2[i] > waiting_element.top()){
            next_element_map[waiting_element.top()] = nums2[i];
            waiting_element.pop();
        }
        waiting_element.push(nums2[i]);

    }
    while(!waiting_element.empty()){
        next_element_map[waiting_element.top()] = -1;
        waiting_element.pop();
    }

    for (int i = 0; i < n1; i++){
        if(next_element_map.find(nums1[i]) != next_element_map.end()){
            result.push_back(next_element_map[nums1[i]]);
        }
    }
        return result;
}

int main(){
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    vector<int> result = nextGreaterElement(nums1, nums2);
    cout << endl;
    for(int x : result){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
