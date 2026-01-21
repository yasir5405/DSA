#include <iostream>
using namespace std;
int power()
{
    int a, b;
    cin >> a >> b;
    int answer = 1;
    for (int i = 1; i <= b; i++)
    {
        answer *= a;
    }
    return answer;
}
int main()
{
    cout << power();
}
