#include <iostream>
using namespace std;

void print1toN(int n)
{
    if (n == 1)
        return;

    n--;
    print1toN(n);
    cout << n << endl;
}

int main()
{
    int n = 5;
    print1toN(n);
}