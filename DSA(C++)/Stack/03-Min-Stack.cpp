// Leetcode - 155
#include <iostream>
#include <vector>
#include <climits>
#include<algorithm>
using namespace std;

class MinStack
{
    vector<int> arr;
    vector<int> minArr;
    int minimum_value;

public:
    MinStack()
    {
    }
    void push(int value)
    {
        arr.push_back(value);
        if (minArr.size() == 0)
        {
            minArr.push_back(value);
        }
        else
        {
            minArr.push_back(min(value, minArr.back()));
        }
    }
    void pop()
    {
        arr.pop_back();
        minArr.pop_back();
    }
    int top()
    {
        return arr[arr.size() - 1];
    }
    int getMin()
    {
        return minArr.back();
    }
};

int main()
{
    MinStack *obj = new MinStack();
    obj->push(10);
    obj->push(20);
    obj->pop();
    obj->push(15);
    obj->push(20);
    obj->push(2);
    obj->push(30);
    obj->pop();
    obj->pop();
    int topElement = obj->top();
    int minElement = obj->getMin();

    cout << "Top element : " << topElement << endl;
    cout << "Min element : " << minElement << endl;

    return 0;
}
