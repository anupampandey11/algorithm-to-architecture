/*
Given an array arr[] of integers, where each element arr[i] represents the number of pages in the i-th book. You also have an integer k representing the number of students. The task is to allocate books to each student such that:

Each student receives atleast one book.
Each student is assigned a contiguous sequence of books.
No book is assigned to more than one student.
All books must be allocated.
The objective is to minimize the maximum number of pages assigned to any student. In other words, out of all possible allocations, find the arrangement where the student who receives the most pages still has the smallest possible maximum. If it is not possible to allocate books to all students, return -1;

example:
Input: arr[] = [12, 34, 67, 90], k = 2
Output: 113
Explanation: Allocation can be done in following ways:
=> [12] and [34, 67, 90] Maximum Pages = 191
=> [12, 34] and [67, 90] Maximum Pages = 157
=> [12, 34, 67] and [90] Maximum Pages = 113
The third combination has the minimum pages assigned to a student which is 113.
*/


#include<iostream>
using namespace std;

int getmax(const int arr[] , int n){
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int getSum(const int arr[], int n){
    int sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

bool checkValidResult(const int arr[], int n , int m , int mid){
    int page = 0;
    int student = 1;

    for (int i = 0; i < n; i++){
        if (page + arr[i]  <= mid){
            page += arr[i];
        }
        else{
            student++;
            if(student>m){
                return false;
            }
            page = arr[i];
        }
    }
    return true;
}

int getMinPages(const int arr[], int n , int m){
    int low = getmax(arr, n);
    int high = getSum(arr, n);
    int ans = -1;

    if(m>n){
        return ans;
    }

    while(low<=high){
        int mid = low + (high - low) / 2;
        bool result = checkValidResult(arr, n, m, mid);
        if (result)
        {
            high = mid - 1;
            ans = mid;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}

int main(){
    int arr[4] = {10, 20, 30, 40};
    int n = 4;
    int m = 2;

    int minPagesAllocated = getMinPages(arr, n, m);
    cout << "Allocate Minium Page : " << minPagesAllocated << endl;

    return 0;
}
