#include <iostream>
#include <climits>
using namespace std;

int maxSum(int arr[][3], int m, int n)
{
    int maxSum = INT_MIN;

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }

        maxSum = max(maxSum, sum);
    }

    return maxSum;
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {6, 6, 4},
        {8, 1, 4}};

    int maxi = maxSum(arr, 3, 3);

    cout << maxi;
}