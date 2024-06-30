#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a = {4, 5, 6, 7, 0, 1, 2, 3};
    sort(a.begin(), a.end());

    for (auto v : a)
    {
        cout << v << " ";
    }
    return 0;
}