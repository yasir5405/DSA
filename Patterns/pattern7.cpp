// Pattern:
// 1, i goes to n, j goes from 1 to i and prints count
// 23
// 456
// 78910

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}