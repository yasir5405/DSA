#include <iostream>
#include <cmath>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the base address of the array: " << endl;
    cout << arr << endl;
    cout << "Size is: " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(arr, (sizeof(arr) / sizeof(arr[0])));
}