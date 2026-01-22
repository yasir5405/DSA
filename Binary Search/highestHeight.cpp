#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int k, int mid)
{
    int woodSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > mid)
        {
            woodSum += arr[i] - mid;
        }
    }
    if (woodSum >= k)
    {
        return true;
    }
    return false;
}

int maxHeight(vector<int> arr, int n, int k)
{
    int start = 0;
    int end = *max_element(arr.begin(), arr.end());

    int mid = start + (end - start) / 2;

    int ans = -1;
    while (start <= end)
    {
        if (isPossible(arr, n, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {4, 42, 40, 26, 46};
    int n = arr.size();
    int k = 20;

    cout << "Maximum height possible is: " << maxHeight(arr, n, k);
}