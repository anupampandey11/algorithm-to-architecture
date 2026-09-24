#include<iostream>
#include<stack> // C++ STL FOR STACK
using namespace std;

int main(){
    /**
     * @details(Operations)
     * push(x) -> for adding x in stack
     * (i.e stack = [] , #stack.push(10) , stack = [10])
     * pop() remove element from top #stack.pop()
     * top() get the top element without removing #stack.top()
     * empty() check if stack is empty or not
     * (i.e stack = [] , #stack.empty() -> true or else -> false)
     * size() get the size / how many element are there in stack now
     * #stack.size()
     */
    stack<int> bucket;
    bucket.push(10); // -> 10
    bucket.push(20); // -> 10, 20
    bucket.push(30); // -> 10, 20, 30
    bucket.push(40); // -> 10, 20, 30, 40
    bucket.push(50); // -> 10, 20, 30, 40, 50
    bucket.push(60); // -> 10, 20, 30, 40, 50, 60
    bucket.pop();    // -> remove top =  60
    bucket.pop();    // -> remove top =  50
    bucket.push(45); // -> 10, 20, 30, 40, 45
    bucket.push(50); // -> 10, 20, 30, 40, 45, 50
    bucket.push(60); // -> 10, 20, 30, 40, 45, 50, 60

    cout << bucket.top() << endl;   // -> 60
    cout << bucket.empty() << endl; // -> false / 0
    cout << bucket.size() << endl;  // -> 7

    // Print stack if you print original stack after printing all element in stack will be delete and originl stack becomes empty (destroyed);
    stack<int> copy = bucket;
    while(!copy.empty()){
        cout << copy.top() << endl;
        copy.pop();
    }

    return 0;
}
