#include <iostream>
using namespace std;

#include <set>

void print(set<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
}

int main()
{
    set<string> s;
    s.insert("sjwd");
    s.insert("sjwdre");
    s.insert("rsder");
    s.insert("sjwd");

    s.erase("sjwd");           // log(n)
    auto it = s.find("rsder"); // log(n)
    if (it != s.end())
    {
        cout << "-------------";
        cout << (*it);
        cout << "-------------";
    }
    else
        cout << "no value";

    print(s);

    set<string> s1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s1.insert(str);
    }
    for (auto s : s1)
    {
        cout << s << endl;
    }
}