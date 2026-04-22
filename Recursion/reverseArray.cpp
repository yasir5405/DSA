#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;

    swap(arr[s], arr[e]);

    return reverseArray(arr, s + 1, e - 1);
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};

    reverseArray(arr, 0, arr.size() - 1);

    for (int n : arr)
        cout << n << " ";
}