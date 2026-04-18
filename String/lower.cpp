#include <iostream>
using namespace std;

void toLowerCase(string &name)
{
    for (int i = 0; i < name.size(); i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            int temp = name[i] - 'A' + 'a';
            name[i] = temp;
        }
    }
}

void toUpperCase(string &name)
{
    for (int i = 0; i < name.size(); i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            int temp = name[i] - 'a' + 'A';
            name[i] = temp;
        }
    }
}

int charToNum(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - 'a';
    }
    else
    {
        return ch - 'A';
    }
}

char numToChar(int n)
{
    return 'a' + n - 1;
}

int main()
{
    // string name = "Yasir";

    // toLowerCase(name);

    // cout << "Lowercase name: " << name << endl;

    // toUpperCase(name);

    // cout << "Uppercase name: " << name;

    char c = 'z';

    // cout << charToNum(c);

    cout << numToChar(26);
}
