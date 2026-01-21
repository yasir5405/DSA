#include <iostream>
using namespace std;

int getPivot(int n, int arr[])
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    };
    return s;
}

int main()
{
    int arr[5] = {8, 10, 17, 1, 3};

    cout << "Pivot of arr: " << getPivot(5, arr) << endl;
}