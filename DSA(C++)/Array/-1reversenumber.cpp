#include<iostream>
using namespace std;
int main(){
    int value = 12345;
    int reversed = 0;
    while (value)
    {
        int r = value % 10;
        value = value / 10;
        reversed = reversed * 10 + r ;
    }

    cout << reversed;
}
