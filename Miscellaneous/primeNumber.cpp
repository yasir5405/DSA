#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    for (int i = 3; i < sqrt(num); i = i + 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n = 23;
    bool prime = isPrime(n);
    if (prime)
    {
        cout << n << " is a Prime num.";
    }
    else
    {
        cout << n << " is not a prime.";
    }
}
