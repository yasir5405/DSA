#include <iostream>
using namespace std;

// return pivot of a sorted rotated array
int bin(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int main()
{
    int arr[] = {7, 9, 1, 2, 4};

    cout << bin(arr, 5);
}