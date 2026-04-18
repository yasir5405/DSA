#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr1, int m, vector<int> &arr2, int n, vector<int> &arr3)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
        }
        else
        {
            arr3.push_back(arr2[j]);
            j++;
        }
    }
    while (i < m)
    {
        arr3.push_back(arr1[i]);
        i++;
    }

    while (j < n)
    {
        arr3.push_back(arr2[j]);
        j++;
    }
}

void print(vector<int> &arr, int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {3, 5, 7, 9, 10};

    vector<int> arr3;

    merge(arr1, arr1.size(), arr2, arr2.size(), arr3);

    print(arr3, arr3.size());

    return 0;
}