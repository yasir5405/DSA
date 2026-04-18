#include <iostream>
#include <list>
using namespace std;

// a list is built of a doubly linked list, random access is of O(N) because it needs to travel to the particular node to read the value
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << endl;
    }
}