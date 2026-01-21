#include <iostream>
using namespace std;
int nthFib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int first = 0;
    int sec = 1;
    int curr;
    for (int i = 3; i <= n; i++)
    {
        curr = first + sec;
        first = sec;
        sec = curr;
    }
    return sec;
}
int main()
{
    int n;
    cin >> n;
    cout << nthFib(n);
}