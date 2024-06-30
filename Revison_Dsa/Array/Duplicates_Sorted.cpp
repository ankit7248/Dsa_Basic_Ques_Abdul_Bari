#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[7] = {1, 3, 4, 5, 5, 5, 6};

    int dup = 0;

    for (int i = 0; i < 7; i++)
    {
        if (a[i] == a[i + 1] && a[i] != dup)
        {
            dup = a[i];
            cout << dup << ' ';
        }
    }
}