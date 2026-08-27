#include<iostream>
#include<algorithm>
using namespace std;


bool isPossibleSolution(const int position[],int n , int m  , int mid){
    int ball = 1;
    int lastPosition = position[0];
    for (int i = 1; i < n; i++)
    {
        if(position[i] - lastPosition >= mid){
            ball++;
            if (ball == m)
            {
                return true;
            }
            lastPosition = position[i];
        }
    }
        return false;
}

int minimumForceMaxGap(const int position[],int n , int m ){
    int low = 1;
    int high = position[n - 1] - position[0];

    while(low<=high){
        int mid = low + (high - low) / 2;
        if (isPossibleSolution(position , n , m , mid)){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return high;
}

int main(){
    int position[5] = {1, 2, 3, 4, 7};
    int n = 5;
    int m = 3;
    sort(position, position + n);
    if(m>n){
        return -1;
    }

    int MaxGap = minimumForceMaxGap(position, n, m);

    cout << "Maximum Gap Posible Between Balls :" << MaxGap << endl;
}
