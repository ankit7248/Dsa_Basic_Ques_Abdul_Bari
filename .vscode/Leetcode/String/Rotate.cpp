#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcde", goal = "cdeab";

    for (int i = 0; i < s.size(); i++)
    {
        int first = s[i];
        s.push_back(first);
        if ((s.compare(goal)) == 0)
        {
            cout << true;
        }
    }
    cout << false;
    return 0;
}