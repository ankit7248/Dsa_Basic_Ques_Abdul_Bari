#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, string> s;

    s["abcd"] = " ankit";
    s["efgh"] = " kumar";
    s["ijkl"] = " singh";
    s["mnop"] = " rathore";
    s["qrst"] = " kuchbhi";
    s["abcd"] = " haa bhai";

    // map<string, string>::iterator it;
    // for (it = s.begin(); it != s.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    for (auto it : s)
    {
        cout << it.first << " " << it.second << endl;
    }
}