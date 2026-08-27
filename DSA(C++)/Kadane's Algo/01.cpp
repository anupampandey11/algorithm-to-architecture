#include<iostream>
using namespace std;


int maxSumSubArray(int arr[] , int n){
    int prevSum = arr[0];
    int maxSum = arr[0];
    int currIdx = 1;
    int startIdx = 1;
    int endIdx = n - 1;
    for (int i = 1; i < n; i++)
    {
        if(prevSum>0){
            prevSum += arr[i];
        }
        else{
            currIdx = i;
            prevSum = arr[i];
        }
        if(prevSum > maxSum){
            maxSum = prevSum;
            startIdx = currIdx;
            endIdx = i;
        }

    }
    cout <<startIdx<< " : " << endIdx<<endl;
    for (int i = startIdx; i <= endIdx; i++)
    {
        cout <<arr[i]<< " ";
    }
    cout << endl;
    return maxSum;
}

int main(){
    // int arr[5] = {-5, 3, 4, -10, 6};
    // int n = 5;
    int arr[6] = {-8, -3, -6, -2, -5, -4};
    int n = 6;
    int sum = maxSumSubArray(arr, n);
    cout << "Max Sum -> " << sum << endl;
    return 0;
}
