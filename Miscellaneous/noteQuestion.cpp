#include <iostream>
using namespace std;
int main()
{

    int amount;
    cout << "enter amount: ";
    cin >> amount;

    int rem = amount;

    if (rem >= 100)
    {
        int numOf100Notes = amount / 100;
        cout << "Number of 100 notes: " << numOf100Notes << endl;
        rem = amount % 100;
    }
    if (rem >= 50 && rem <= 100)
    {
        int numOf50Notes = rem / 50;
        cout << "Number of 50 notes: " << numOf50Notes << endl;
        rem = rem % 50;
    }
    if (rem >= 20 && rem <= 50)
    {
        int numOf20Notes = rem / 20;
        cout << "Number of 20 notes: " << numOf20Notes << endl;
        rem = rem % 20;
    }
    if (rem >= 1 && rem <= 20)
    {
        int numOf1Notes = rem / 1;
        cout << "Number of 1 notes: " << numOf1Notes << endl;
    }
}