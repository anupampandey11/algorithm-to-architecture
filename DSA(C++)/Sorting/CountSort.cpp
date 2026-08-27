#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
pair<int,int>findLimits(int arr[] , int n){
    int minimum = INT_MAX;
    int maximum = INT_MIN;

    for (int i = 0; i < n; i++){
        if(arr[i]<minimum){
            minimum = arr[i];
        }
        if(arr[i]>maximum){
            maximum = arr[i];
        }
    }
    return {minimum, maximum};
}
void countSortAlgo(int arr[] , int n){
 auto [minimum, maximum] = findLimits(arr, n);
 int range = maximum - minimum + 1;
 vector<int> counter(range);
 for (int i = 0; i < n; i++){
     int idx = arr[i] - minimum;
     counter[idx]++;
 }
 int idx = 0;
 for (int i = 0; i < range; i++)
 {
    int  value = i + minimum;
     for (int j = 0; j < counter[i]; j++){
         arr[idx] = value;
         idx++;
     }
 }
}
int main(){
    int arr[6] = {2, 5, 2, 3, 5, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    countSortAlgo(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
