#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i = i + 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << n << " is a prime num." << endl;
    }
    else
    {
        cout << n << " is not a prime num." << endl;
    }
}