#include <iostream>
using namespace std;
bool isEven(int a)
{
    // If & with 1 is true the number is odd, else it is even
    if (a & 1)
    {
        return 0;
    }

    return 1;
}
int main()
{
    int ans = isEven(123);
    cout << ans;
}