#include <iostream>
using namespace std;

int binSearch(int arr[], int n, int s, int e, int key)
{
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
        return mid;

    if (arr[mid] < key)
    {
        return binSearch(arr, n, mid + 1, e, key);
    }
    else
    {
        return binSearch(arr, n, s, mid - 1, key);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 5, 7, 9};

    cout << binSearch(arr, 6, 0, 5, 5);
}