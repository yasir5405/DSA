#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[15] = {1, 2, 4};

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    // Printing the base address of the array
    cout << endl << "Printing the base address of the array: " << endl;
    cout << arr;
}