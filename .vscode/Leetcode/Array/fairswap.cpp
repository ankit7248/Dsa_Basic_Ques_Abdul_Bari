#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2};
    vector<int> s = {2, 3};
    int add = 0;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            add = accumulate(s.begin(), s.end(), add);
            cout << add << " ";
        }
    }
    return 0;
}