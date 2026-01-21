// Pattern
// D
// CD
// BCD
// ABCD

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ch = 'A' + n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(ch + j - 1);
        }
        ch--;
        cout << endl;
    }
}