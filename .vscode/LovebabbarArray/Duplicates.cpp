#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;

    int ans = 0;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);

    for (auto value : v)
    {
        ans = ans ^ value;
    }
    set<int> s;

    // int n;
    // cout << "enter the size of array";
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     int s;
    //     cout << "enter the input";
    //     cin >> s;
    //     v.insert(s);
    // }

    s.insert(2);
    s.insert(2);
    s.insert(5);
    s.insert(8);

    for (auto value : s)
    {
        cout << value << " ";
    }
}