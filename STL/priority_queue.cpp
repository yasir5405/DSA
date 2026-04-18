#include <iostream>
#include <queue>

using namespace std;

int main()
{

    // Max Heap
    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    maxi.push(5);

    maxi.pop();

    cout << "Maximum elem in maxi " << maxi.top() << endl;

    // Min Heap

    priority_queue<int, vector<int>, greater<int>> mini;

    mini.push(5);
    mini.push(4);
    mini.push(3);
    mini.push(2);
    mini.push(1);

    mini.pop();

    cout << "Minimum elem in mini " << mini.top() << endl;
}