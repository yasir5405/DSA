#include <iostream>
#include <vector>
using namespace std;

void solve(string input, string output, int index, string mapping[10], vector<string> &ans)
{
    if (index >= input.size())
    {
        ans.push_back(output);
        return;
    }

    int digit = input[index] - '0';
    string values = mapping[digit];

    for (int i = 0; i < values.length(); i++)
    {
        output.push_back(values[i]);
        solve(input, output, index + 1, mapping, ans);
        output.pop_back();
    }
}

int main()
{
    vector<string> ans;
    string output;
    string input;

    cout << "Enter the number clicked on the keypad: " << endl;
    cin >> input;

    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi",
                          "jkl", "mno", "pqrs", "tuv", "wxyz"};

    solve(input, output, index, mapping, ans);

    for (string a : ans)
    {
        cout << a << " ";
    }
}