#include <iostream>
using namespace std;

void printNto1(int n)
{
    if (n == 0)
        return;

    cout << n << endl;

    n--;

    printNto1(n);
}

int main()
{
    int n = 5;
    printNto1(n);
}