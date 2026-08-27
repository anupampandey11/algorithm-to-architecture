#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
    int arr[6] ={10, 20, 10, 30, 20, 10};
    unordered_map<int, int> freq;

    for(int x : arr){
       freq[x]++;
    }

    for (auto it = freq.begin(); it != freq.end(); it++)
    {
      cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}
