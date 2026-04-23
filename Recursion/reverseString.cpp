#include <iostream>
using namespace std;

void reverseString(string &name, int s, int e)
{
    if (s > e)
        return;

    swap(name[s], name[e]);

    return reverseString(name, s + 1, e - 1);
}

int main()
{
    string name = "yasir";

    reverseString(name, 0, name.length() - 1);

    cout << name;
}