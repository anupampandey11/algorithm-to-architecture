#include<iostream>
using namespace std;

int main(){
    int nums[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = 10;
    int value = nums[0];
    int count = 1;

    for (int i = 1; i < n; i++){
        if(value<nums[i]){
            value = nums[i];
            nums[count] = nums[i];
            count++;
        }
    }

    for (int i = 0; i < count; i++){
        cout << nums[i] << " ";
    }
        cout << "Count :" << count << endl;

    return 0;
}
