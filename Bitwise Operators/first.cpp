#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;
    cout << "The and of a and b is: ";
    cout << (a&b) << endl;
    cout << "The or of a and b is: ";
    cout << (a|b) << endl;
    cout << "The not of a is: ";
    cout << (~a) << endl;
    cout << "The not of b is: ";
    cout << (~b) << endl;
    cout << "The xor of a and b is: ";
    cout << (a^b);
}