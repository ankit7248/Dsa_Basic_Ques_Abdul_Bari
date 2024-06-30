#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {0, 1, 1, 0, 0, 1};

    for (int i = 0, j = v.size() - 1; j > i; i++, j--)
    {
        if (v[i] == 0)
        {
            if (v[j] == 0)
            {
                int temp = 0;
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}