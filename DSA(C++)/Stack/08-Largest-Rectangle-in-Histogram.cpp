// Leetcode - 84
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>leftSmaller(const vector<int>&heights){
    int n = heights.size();
    vector<int> left_smaller(n);
    stack<int> st;
    for (int i = 0; i < n; i++){

        while(!st.empty() && heights[st.top()] >= heights[i]){
            st.pop();
        }
        if(st.empty()){
            left_smaller[i] = -1;
        }
        else{
            left_smaller[i] = st.top();
        }
        st.push(i);
    }
    return left_smaller;
}
vector<int>rightSmaller(const vector<int>&heights){
    int n = heights.size();
    vector<int> right_smaller(n);
    stack<int> st;
    for (int i = n-1; i >0; i--){

        while(!st.empty() && heights[st.top()] >= heights[i]){
            st.pop();
        }
        if(st.empty()){
            right_smaller[i] = n;
        }
        else{
            right_smaller[i] = st.top();
        }
        st.push(i);
    }
    return right_smaller;
}

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    int max_area = 0;
    vector<int> left = leftSmaller(heights);
    vector<int> right = rightSmaller(heights);
    for (int i = 0; i < n; i++){
        int height = heights[i];
        int width = right[i] - left[i] - 1;
        int curr_area = height * width;
        if(max_area<curr_area){
            max_area = curr_area;
        }
    }
    return max_area;
}

int main(){
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    int max_area = largestRectangleArea(heights);
    cout << "Max area histogram : " << max_area << endl;
    return 0;
}
