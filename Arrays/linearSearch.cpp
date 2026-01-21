#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
            return true;
    }
    return false;
}

int main()
{
    int arr[5] = {1, 4, 6, 2, 7};
    cout << linearSearch(arr, 5, 2);
}