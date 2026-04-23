#include <iostream>
using namespace std;

bool isSorted(int arr[], int n, int i)
{
    if (i >= n - 1)
        return true;

    if (arr[i] > arr[i + 1])
        false;

    return isSorted(arr, n, i + 1);
}

int main()
{
    int arr[] = {1, 3, 4, 6, 8, 9};

    if (isSorted(arr, 6, 0))
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not sorted" << endl;
    }
}