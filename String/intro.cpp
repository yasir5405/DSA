#include <iostream>
using namespace std;

int main()
{
    char name[] = "Ya\0sir\0";

    string name2 = "Ya\0sir\0";

    cout << "Your name is: " << name << endl;
    cout << "Your name2 is: " << name2 << endl;
}