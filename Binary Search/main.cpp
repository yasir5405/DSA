#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int evenArr[6] = {1, 5, 7, 9, 10, 23};
    int oddArr[5] = {1, 3, 5, 9, 13};

    int evenIndex = binary_search(evenArr, 6, 23);
    int oddIndex = binary_search(oddArr, 5, 3);
    cout << "Index of 23: " << evenIndex << endl;
    cout << "Index of 3: " << oddIndex << endl;

    return 0;
}