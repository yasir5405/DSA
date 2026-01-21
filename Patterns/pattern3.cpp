// Pattern and it's reverse also:
// 1234 rows = 4; colums = 4; and column goes from 1 to n;
// 1234
// 1234
// 1234
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}