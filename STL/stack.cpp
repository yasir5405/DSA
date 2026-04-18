#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    // top return top element of stack
    cout << s.top();
}