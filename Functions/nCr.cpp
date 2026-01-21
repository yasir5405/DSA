#include <iostream>
using namespace std;

int factorial(int n)
{
    int answer = 1;
    for (int i = 1; i <= n; i++)
    {
        answer *= i;
    }
    return answer;
}

int nCr(int n, int r)
{
    int answer = factorial(n) / (factorial(r) * factorial(n - r));

    return answer;
}

int main()
{
    int n, r;
    cin >> n >> r;
    int ans = nCr(n, r);

    cout << ans;
}