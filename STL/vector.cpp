#include <iostream>
#include <vector>
using namespace std;

// In vectors, .capacity() amd .size() serve different purpose:
//  .capacity() tells us how many elements can fit into the vector before resizing happens
// .size() tells us how many elements are there in the vector
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    const int size = arr.size();
    const int capacity = arr.capacity();

    // cout << size << endl;
    // cout << capacity << endl;

    // Copying elems into vector

    vector<int> copy(arr);

    for (int i : copy)
    {
        cout << i << endl;
    }
}