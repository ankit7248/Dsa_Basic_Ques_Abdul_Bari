#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;
    int a[n] = {2, 34, 90, 89, 1};
    int del = 0;
    int pos = 3;

    del = a[pos];

    for (int i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}