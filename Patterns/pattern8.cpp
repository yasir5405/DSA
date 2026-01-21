// Pattern:
// 1, rows goes to n, and cols goes from value of i to count of i
// 23
// 345
// 4567

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        // int value = i;
        for (int j = 1; j <= i; j++)
        {
            cout << i + j - 1;
            // value++;
        }
        cout << endl;
    }
}