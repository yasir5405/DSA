// Pattern
// 1111
//  222
//   33
//    4

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int spaces = i - 1;
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << i;
        }
        cout << endl;
    }
}