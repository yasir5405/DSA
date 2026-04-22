#include <iostream>
using namespace std;

int maxOnes(int arr[], int n)
{
    int cnt = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            cnt++;
        else if (arr[i] == 0)
            cnt = 0;
        maxi = max(maxi, cnt);
    }
    return maxi;
}

int main()
{
    int arr[] = {1, 1, 1, 1, 0, 1, 1, 1};

    cout << maxOnes(arr, 6);
}