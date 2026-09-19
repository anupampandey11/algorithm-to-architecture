// LeetCode - 904
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int totalFruit(const vector<int>&fruits){
    unordered_map<int, int> freq;
    int n = fruits.size();
    int left = 0;
    int right = 0;
    int max_fruit_count = 0;
    while(right<n){
        int key = fruits[right];
        freq[key]++;
        right++;
        while(freq.size()>2){
                int key = fruits[left];
                freq[key]--;
                left++;
                if(freq[key] == 0){
                    freq.erase(key);
                }
            }
        int curr_fruit_count = right - left;
        if(max_fruit_count<curr_fruit_count){
            max_fruit_count = curr_fruit_count;
        }
    }
    return max_fruit_count;
}

int main(){
    vector<int> fruits{1, 2, 3, 2, 2};
    int total_fruit = totalFruit(fruits);
    cout <<"Total Fruits :"<< total_fruit << endl;
    return 0;
}
