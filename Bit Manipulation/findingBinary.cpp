// Steps of finding binary form of a number
// Divide by 2 and store the remainder unless the number become 0, and then reverse the result

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int power = 1;

    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * power) + ans;

        power = power * 10;

        n = n >> 1;
    }

    cout << ans;
}