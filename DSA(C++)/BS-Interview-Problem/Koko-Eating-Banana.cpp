#include<iostream>
using namespace std;

int maxEl(const int arr[] , int n){
    int max = arr[0];
    for (int i = 1; i < n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getTimeWithSpeed(const int arr[] , int speed , int n){
    int t = 0;
    for (int i = 0; i < n; i++){
        int val = (arr[i] + speed - 1)/speed;
        t += val;
    }
   return t;
}

int kokoEatingBanana(const int arr[], int t, int n)
{
    int low = 1;
    int high = maxEl(arr, n);
    int speed = -1;

    while(low<=high){
        int mid = low + (high - low) / 2;
        int time = getTimeWithSpeed(arr, mid, n);
        if(time<=t){
            speed = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return speed;
}

int main(){
    int arr[] = {3, 6, 7, 11};
    int n = 4;
    int t = 8;
    int speed = kokoEatingBanana(arr , t , 4);
    cout << "Speed : " << speed << endl;
    return 0;
}
