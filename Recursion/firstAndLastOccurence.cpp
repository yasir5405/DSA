#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> &arr, int s, int e, int key)
{
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
        int leftAns = firstOcc(arr, s, mid - 1, key);
        return (leftAns == -1) ? mid : leftAns;
    }

    if (arr[mid] < key)
    {
        s = mid + 1;
        return firstOcc(arr, s, e, key);
    }

    return firstOcc(arr, s, mid - 1, key);
}

int lastOcc(vector<int> &arr, int s, int e, int key)
{
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
        int rightAns = lastOcc(arr, mid + 1, e, key);
        return (rightAns == -1) ? mid : rightAns;
    }

    if (arr[mid] < key)
    {
        return lastOcc(arr, mid + 1, e, key);
    }

    return lastOcc(arr, s, mid - 1, key);
}

int main()
{
    vector<int> arr = {1, 2, 2, 2, 3, 3, 4, 5, 5, 5};
    int key = 2;
    cout << firstOcc(arr, 0, arr.size() - 1, key) << endl;
    cout << lastOcc(arr, 0, arr.size() - 1, key);
}