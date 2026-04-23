#include <iostream>
using namespace std;

bool isPresent(int *arr, int size, int key)
{
    if (size == 0)
        return false;

    if (arr[0] == key)
    {
        return true;
    }

    return isPresent(arr + 1, size - 1, key);
}

int main()
{
    int arr[] = {1, 2, 3, 7, 4, 8};

    if (isPresent(arr, 6, 11))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }
}