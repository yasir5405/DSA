#include <iostream>
using namespace std;

int findGcd(int a, int b)
{
    // for (int i = min(a, b); i > 0; i--)
    // {
    //     if (a % i == 0 && b % i == 0)
    //     {
    //         return i;
    //     }
    // }
    // return 1;

    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
        return b;
    return a;
}

int main()
{
    int a = 20, b = 15;

    cout << findGcd(a, b);
}