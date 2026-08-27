#include<iostream>
#include<unordered_set>
using namespace std;


int main(){
    unordered_set<int> udrset;
    int arr[6] = {10 , 20 , 10 , 30 , 50 , 40};

    for(int x : arr){
        if(udrset.find(x) != udrset.end()){
            cout << "Duplicate ->" << x << endl;
        }
        udrset.insert(x);
    }
    for(int x : udrset){
        cout << x << " ";
    }
    return 0;
}
