#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void maxMin(int arr[], int size)
{
    int max = arr[0];
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Max elem is: " << max << endl;
    cout << "Min elem is: " << min << endl;
}

int main()
{
    int arr[10] = {124, 61, 8, 2, 1, 32546, 12, 7, 23, 0};
    maxMin(arr, 10);
}