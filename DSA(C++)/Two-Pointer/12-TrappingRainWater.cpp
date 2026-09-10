#include<iostream>
#include<vector>
using namespace std;

int waterVolume(const vector<int>&height){
    int n = height.size();
    int water = 0;
    int left = 0;
    int right = n - 1;
    int leftMax = 0;
    int rightMax = 0;
    while(left<right){
        if(height[left]<height[right]){
            if(leftMax <=height[left]){
                leftMax = height[left];
            }
            else{
                water += leftMax - height[left];
            }
            left++;
        }
        else{
            if(rightMax <=height[right]){
                rightMax = height[right];
            }
            else{
                water += rightMax - height[right];
            }
            right--;

        }
    }
    return water;
}

int main(){
    vector<int> height{4,2,0,3,2,5};
    int volume = waterVolume(height);
    cout << volume << endl;
    return 0;
}
