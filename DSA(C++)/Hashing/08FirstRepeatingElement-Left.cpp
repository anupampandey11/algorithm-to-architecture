#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{ 20 ,30, 20, 30 };
    unordered_map<int , int> freq;
    for (int x : arr)
    {
        freq[x]++;
    }

    for(int x : arr){
        if(freq[x]>1){
            cout << "First Duplicate Element from left : " << x << endl;
            return 0;
        }
    }


    return 0;
}
