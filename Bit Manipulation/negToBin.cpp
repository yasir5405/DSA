#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int power = 1;
    int bits = 8;

    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     ans = (bit * power) + ans;
    //     power *= 10;
    //     n = n >> 1;
    // }
    for (int i = 0; i < bits; i++)
    {

        int bit = n & 1;
        ans = (bit * power) + ans;
        power *= 10;
        n = n >> 1;
    }
    cout << ans;
}