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
        int digit = n % 10;
        ans += digit * power;
        power *= 2;
        n /= 10;
    }
    cout << ans;
}