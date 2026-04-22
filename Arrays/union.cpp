#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {2, 3, 4};
    // Approach using ordered map
    // vector<int> res;
    // map<int, int> m;

    // Approach using set
    // set<int> s;
    // for (int i = 0; i < 3; i++)
    // {
    //     s.insert(arr1[i]);
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     s.insert(arr2[i]);
    // }

    // vector<int> res(s.begin(), s.end());

    // for (int i = 0; i < res.size(); i++)
    // {
    //     cout << res[i] << " ";
    // }

    // Appraoch using 2 pointers;

    int i = 0, j = 0;
    vector<int> Union;

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            if (Union.empty() || Union.back() != arr1[i])
            {
                Union.push_back(arr1[i]);
            }
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            if (Union.empty() || Union.back() != arr2[j])
            {
                Union.push_back(arr2[j]);
            }
            j++;
        }
        else
        {
            if (Union.empty() || Union.back() != arr1[i])
            {
                Union.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    while (i < arr1.size())
    {
        if (Union.empty() || Union.back() != arr2[i])
        {
            Union.push_back(arr2[i]);
        }
        i++;
    }

    while (j < arr1.size())
    {
        if (Union.empty() || Union.back() != arr2[j])
        {
            Union.push_back(arr2[j]);
        }
        j++;
    }

    for (int i : Union)
    {
        cout << i << " ";
    }
}