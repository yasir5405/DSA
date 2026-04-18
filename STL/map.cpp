#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, string> m;

    m["who"] = "Partners";
    m["boy"] = "Yasir";
    m["girl"] = "Asma";

    m.insert({"loveName", "Yasma"});

    for (auto i : m)
    {
        cout << i.first << ": " << i.second << endl;
    }
}