#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Using Priority Queue: " << endl;
    priority_queue<int> pq;

    pq.push(5);
    pq.push(6);
    pq.push(3);
    cout << pq.top();

    priority_queue<int, vector<int>, greater<int>> minh;
}