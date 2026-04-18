#include <iostream>
#include <array>
using namespace std;

int main()
{
    int basic[2] = {1, 4};
    int size = sizeof(basic) / sizeof(basic[0]);
    array<int, 4> arr = {1, 2, 3, 4};

    cout << arr.size() << endl;
    // cout << size;
}