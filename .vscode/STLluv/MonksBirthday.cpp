#include <bits/stdc++.h>
using namespace std;

void printfun(set<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        set<string> s;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            s.insert(str);
        }
        printfun(s);
    }
    return 0;
}