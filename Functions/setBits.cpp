#include <iostream>
using namespace std;

int countSets(int n)
{
    int count = 0;
    while (n != 0)
    {
        int bit = n & 1;
        if (bit == 1)
            count++;
        n = n >> 1;
    }

    return count;
}

int setBits(int a, int b)
{
    return countSets(a) + countSets(b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << setBits(a, b);
}