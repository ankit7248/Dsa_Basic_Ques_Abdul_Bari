#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> s = {1, 2, 3, 4};
    vector<int> t;

    for (int i = 0; i < s.size(); i++)
    {
        t.push_back(s[i]);
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
    return 0;
}