#include<iostream>
using namespace std;

pair<int,int>findLimits(const int arr[] , int n){
    int max = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return {max , sum};
}

bool possibleSolution(const int arr[] , int n , int p, int mid){
    int time = 0;
    int painter = 1;
    for (int i = 0; i < n; i++)
    {
        if (time + arr[i] <= mid)
        {
            time += arr[i];
        }
        else{
            painter++;
            if (painter > p)
            {
                return false;
            }
            time = arr[i];
        }
    }

return true;
}

int painterPartition(const int arr[] , int n , int p ){
    int ans = -1;
    auto [low , high] = findLimits(arr, n);

    if(p>n){
        return ans;
    }

    while(low<=high){
        int mid = low + (high - low) / 2;
        bool isPossible = possibleSolution(arr, n, p , mid);
        if (isPossible)
        {
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}

int main(){

    int boards[4] = {10, 20, 30, 40};
    int p = 2;
    int n = 4;

    int Timetaken = painterPartition(boards, n, p);
    cout << "Min Time Taken : " << Timetaken << endl;
}
