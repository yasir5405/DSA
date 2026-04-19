#include <iostream>
using namespace std;

int bin(int n)
{
    int s = 0;
    int e = n;

    long long int ans = -1;

    while (s <= e)
    {
        long long int mid = s + (e - s) / 2;

        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
double morePrecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;

    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int tempSol = bin(37);
    cout << "Answer is: " << morePrecision(37, 10, tempSol);
}