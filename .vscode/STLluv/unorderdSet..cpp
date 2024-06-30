#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_set<string> str;

    int n;
    string s1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        str.insert(s1);
    }

    // for (auto it : s)
    // {

    //     if (s.find("abddd") == s.end())
    //     {
    //         cout << "No";
    //     }
    //     else
    //     {
    //         cout << "yess";
    //     }
    // }
    return 0;
}