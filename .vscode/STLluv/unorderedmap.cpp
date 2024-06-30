#include <bits/stdc++.h>
using namespace std;

int main()
{
    // inbuilt implementation

    // time complexity
    // valid keys datatype

    // unordered_map<pair<int,int>,string> m;
    // in this unorderd_map we cannot use pair<int,int> datatype. because it doesn't have hashing value

    // Inordered it use inbuilt hash table
    unordered_map<int, string> v;

    v[3] = "abcd"; // O(1)
    v[2] = "kumar";
    v[5] = "singh";

    auto it = v.find(2); // O(1)
    if (it != v.end())
        v.erase(it);

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     string x;
    //     cin >> x;

    //     v[x]++;
    // }
    for (auto pr : v)
    {
        cout << pr.first << " " << pr.second << endl;
    }
    return 0;
}

// multimap -> use for show duplicate elements