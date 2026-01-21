// Patterm
// ABC, rows go to n, and char c = 'A' goes until i*j;
// DEF
// GHI

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (char)ch;
            ch++;
        }
        cout << endl;
    }
}