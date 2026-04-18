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

int main()
{
    string name;

    cin >> name;

    toLowerCase(name);

    cout << isalnum(name[0]);

    cout << "Lowercase name: " << name;
}