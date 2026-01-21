// Pattern
// 1234554321
// 1234**4321
// 123++++321
// 12******21
// 1********1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // For rows(n)
    for (int i = 1; i <= n; i++)
    {
        // Prints the first triangle
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        // Prints the second traingle
        for (int k = 0; k < i - 1; k++)
        {
            cout << "*";
        }
        // Prints the third triangle
        for (int l = i - 1; l > 0; l--)
        {
            cout << "*";
        }
        // Print the fourth triangle
        for (int m = n - i + 1; m >= 1; m--)
        {
            cout << m;
        }
        cout << endl;
    }
}