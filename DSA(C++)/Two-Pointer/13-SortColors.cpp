#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortColors(vector<int>&colors){
    int low = 0;
    int mid = 0;
    int high = colors.size() - 1;
    while(mid<=high){
        if(colors[mid] == 0){
            swap(colors[low], colors[mid]);
            low++;
            mid++;
        }
        else if(colors[mid] == 1){
            mid++;
        }
        else{
            swap(colors[mid], colors[high]);
            high--;
        }
    }
}

int main(){
    vector<int> colors{2, 0, 2, 1, 0, 1};
    sortColors(colors);

    for(int color : colors){
        cout << color << " ";
    }
    cout << endl;

    return 0;
}
