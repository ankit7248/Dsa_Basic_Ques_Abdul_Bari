#include <bits/stdc++.h>
using namespace std;

// Hashing Method

int main()
{
    int a[4] = {1, 2, 3, 4};

    // int min = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] < min)
    //     {
    //         min = a[i];
    //         cout << min << " ";
    //     }
    // }

    int max = a[0];

    for (int i = 0; i < 4; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            // cout << max << "---------";
        }
    }

    int H[max];
    for (int i = 0; i < max + 1; i++)
    {
        H[i] = 0;
        cout << H[i] << " ";
    }

    for (int i = 0; i < 4; i++)
    {
        H[a[i]]++;
    }

    for (int i = 1; i < max + 1; i++)
    {
        if (H[i] == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}