#include<iostream>
#include<unordered_map>
using namespace std;
void udrmapNum()
{
    unordered_map<int, int> udrmap;
    udrmap[10] = 100;
    udrmap[20] = 200;
    udrmap[30] = 300;
    int key = 60;
    auto it = udrmap.find(key);
    if (it != udrmap.end())
    {
        cout << "Found -> " <<it->second<< endl;
    }
    else{
        cout << "Not Found !!";
    }
}

void udrmapStr(){
    unordered_map<int, string> udrmap;
    udrmap[10] = "Anupam";
    udrmap[20] = "Aman";
    udrmap[30] = "Satyam";
    int key = 10;
    auto it = udrmap.find(key);
    if (it != udrmap.end())
    {
        cout << "Found -> " <<it->second<< endl;
    }
    else{
        cout << "Not Found !!";
    }
    cout << endl;
}

int main(){

    udrmapNum();
    udrmapStr();

    return 0;
}
