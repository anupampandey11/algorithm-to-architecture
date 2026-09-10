#include<iostream>
#include<vector>
using namespace std;

// 1,8,6,2,5,4,8,3,7
int maxArea(const vector<int>&height){
    int n = height.size();
    int left = 0;
    int right = n - 1;
    int area = 0;
    while (left < right)
    {
        int w = right - left;
        int h;
        if (height[left] > height[right])
        {
            h = height[right];
            right--;
        }
        else{
             h = height[left];
             left++;
        }
        if(area < w*h){
            area = w * h;
        }
    }
    return area;
}

int main(){
    vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
    int area = maxArea(height);
    cout << "Maxium Area = " << area << endl;
    return 0;
}
