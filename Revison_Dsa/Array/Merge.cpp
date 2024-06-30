#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int m = 5;
    int a[n] = {2, 31, 3, 21, 3};
    int b[m] = {7, 4, 21, 4, 2};

    int k = 0;

    int c[m + n];

    int i = 0;
    int j = 0;
    int t = 0;

    for (i; i <= n - 1; i++)
    {
        c[k++] = a[i];
    }

    for (j; j <= m - 1; j++)
    {
        c[k++] = b[j];
    }

    for (t; t < m + n; t++)
    {
        cout << c[t] << " ";
    }
    return 0;
}