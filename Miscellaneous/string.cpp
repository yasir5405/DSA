#include <iostream>
using namespace std;
int main()
{
    string str1 = "ab";
    string str2 = "pqrs";

    string result = "";
    string secFirstSubStr = str2.substr(0, str1.length());
    string secSecondSubStr = str2.substr(str1.length());

    for (int i = 0; i < str1.length(); i++)
    {
        // result.append(word1.at(i));
        result += str1.at(i);
        result += secFirstSubStr.at(i);
        // result.append(secSecondStr.at(i));
    }
    // result.append(secSecondStr);
    result += secSecondSubStr;

    cout << result;
}