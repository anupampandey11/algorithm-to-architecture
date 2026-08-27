#include<iostream>
using namespace std;

int maxValue(int v1 , int v2){
    if(v1>v2){
        return v1;
    }
    return v2;
}
int minValue(int v1 , int v2){
    if(v1>v2){
        return v2;
    }
    return v1;
}

double findMedian(const int nums1[] , const int nums2[] , int n1 , int n2 ){
    if(n1>n2){
        return findMedian(nums2, nums1, n2, n1);
    }
    int leftHalf = (n1 + n2 + 1) / 2;
    int low = 0;
    int high = n1;

    while(low<=high){
        int mid1 = low + (high - low) / 2;
        int mid2 = leftHalf - mid1;
        int L1 = mid1 > 0 ? nums1[mid1 - 1] : INT_MIN;
        int L2 = mid2 > 0 ? nums2[mid2 - 1] : INT_MIN;
        int R1 = mid1 < n1 ? nums1[mid1] : INT_MAX;
        int R2 = mid2 < n2 ? nums2[mid2] : INT_MAX;
        if(L1<=R2 && L2 <= R1){
            if((n1+n2) % 2 == 0){
                return (maxValue(L1, L2) + minValue(R1, R2))/ 2.0;
            }
            else{
                return maxValue(L1, L2);
            }
        }
        else if(L1 > R2){
            high = mid1 - 1;
        }
        else{
            low = mid1 + 1;
        }
    }
    return 0.0;
}
int main(){
    int nums1[6] = {2, 5, 8, 12, 15, 18};
    int nums2[10] = {1, 3, 6, 7, 9, 10, 11, 13, 14, 16};
    int n1 = 6;
    int n2 = 10;
    double median = findMedian(nums1, nums2, n1, n2);
    cout << "Median :" << median << endl;
    return 0;
}
