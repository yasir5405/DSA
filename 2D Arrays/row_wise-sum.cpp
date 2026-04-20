#include <iostream>
using namespace std;

void rowWiseSum(int m, int n, int arr[][3])
{
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    rowWiseSum(3, 3, arr);
}