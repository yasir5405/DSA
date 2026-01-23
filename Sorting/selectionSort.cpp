#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> arr) {}

void sortArray(vector<int> &arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    vector<int> arr = {4, 6, 2, 7, 1};

    sortArray(arr, arr.size());

    cout << "Elements in sorted order are: " << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
}
