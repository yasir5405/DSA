#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {2, 3, 4};
    // Approach using ordered map
    vector<int> res;
    map<int, int> m;

    for (int i = 0; i < 3; i++)
    {
        m[arr1[i]]++;
    }

    for (int i = 0; i < 3; i++)
    {
        m[arr2[i]]++;
    }

    for (auto it : m)
    {
        res.push_back(it.first);
    }

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}