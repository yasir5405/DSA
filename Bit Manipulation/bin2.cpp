#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n to find it's binary: ";
    cin >> n;

    int ans = 0;
    int power = 1;

    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * power) + ans;

        power *= 10;

        n = n >> 1;
    }
    cout << "Binary value is: " << ans;
}