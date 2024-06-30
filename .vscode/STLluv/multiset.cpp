#include <bits/stdc++.h>
using namespace std;
void print(multiset<string> &v)
{
    for (string value : v)
    {
        cout << value << endl;
    }
}
int main()
{
    // inbuilt implementation
    // time complexity
    // valid keys datatype

    // mulltiset allow duplicates

    multiset<string> v;
    v.insert("sjwd"); // Olog(n)
    v.insert("sjwdre");
    v.insert("rsder");
    v.insert("sjwd");

    multiset<string>::iterator it = v.begin();
    for (it; it != v.end(); it++)
    {
        auto s = v.find("sjwd");
        if (s != v.end())
        {
            v.erase(s);
        }
    }

    for (auto it : v)
    {
        string max;
        max = *(it.rbegin());
        cout << max << endl;
    }

    // auto it = v.find("sjwd"); // Olog(n)
    // if (it != v.end())
    // {
    //     v.erase(it);
    // }
    // v.erase("sjwd");
    print(v);
}