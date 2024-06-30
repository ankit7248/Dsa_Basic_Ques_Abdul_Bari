#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int a[n] = {2, 3, 4, 1, 10};
    int pos = 3;
    int x = 7;

    for (int i = n - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }

    a[pos - 1] = x;
    n++;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}