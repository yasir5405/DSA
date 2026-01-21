// Pattern
// 1234
//  234
//   34
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
        for (int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}