#include <iostream>
using namespace std;

void printName(string name, int n)
{
    if (n == 0)
        return;

    cout << name << " ";
    n--;
    printName(name, n);
}

int main()
{
    int n = 3;
    string name = "Yasir";

    printName(name, n);
}