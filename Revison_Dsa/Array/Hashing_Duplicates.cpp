#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10] = {3, 4, 7, 9, 10, 10, 10, 13, 15, 18};

    int dup = 0;
    int max = a[0];

    for (int i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    int H[max];
    for (int i = 0; i <= max + 1; i++)
    {
        H[i] = 0;
        // cout << H[i];
    }

    for (int i = 0; i < 10; i++)
    {
        H[a[i]]++;
        // cout << H[a[i]] << " ";
    }

    //                -----------------------------

    for (int i = 0; i <= max + 1; i++)
    {
        // cout << H[i] << " ";
    }

    for (int i = 0; i < max + 1; i++)
    {
        if (H[i] > 1)
        {
            cout << i << ' ';
        }
    }
}