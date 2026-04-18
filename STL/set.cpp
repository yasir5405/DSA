#include <iostream>
#include <set>
using namespace std;

// A set uses BST (Binary Search Tree) behind the scenes
int main()
{
    set<int> s;

    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);

    // set<int>::iterator it = s.begin();

    // it++;

    // // Erase needs an iterator
    // s.erase(it);

    // for (int i : s)
    // {
    //     cout << i << endl;
    // }

    // Count tells whether an element is present in the set or not
    // cout << s.count(0);

    // Find returns an iterator if an element is present in the set

    set<int>::iterator it = s.find(0);
    cout << *it;
}