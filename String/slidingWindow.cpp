#include <iostream>
using namespace std;

int countOccurence(string str, string substring)
{
    int count = 0;
    int n = str.size();
    int m = substring.size();

    for (int i = 0; i <= n - m; i++)
    {
        int j = 0;
        for (; j < m; j++)
        {
            if (str[i + j] != substring[j])
                break;
        }
        if (j == m)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    cout << countOccurence("acdxxxYxxxxxxxxYxxxdvxxxYxxxxxxxYxxx", "xxxYxxx") << endl;
    cout << countOccurence("yasiryasiyasiryasiryasiyasi", "yasir") << endl;
}