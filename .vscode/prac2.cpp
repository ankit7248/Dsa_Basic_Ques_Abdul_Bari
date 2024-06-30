#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {2, 3, 4, 5, 6, -9};
    int a1[] = {2, 3, 4, 5, 6, -9};

    int n = sizeof(a) / sizeof(a[0]);
    int n1 = sizeof(a1) / sizeof(a1[0]);

    int a3[n + n1];
    int k = 0;
    int i = 0;
    int j = 0;

    for (i; i < n; i++)
    {
        a3[k++] = a[i];
    }
    for (j; j < n1; j++)
    {
        a3[k++] = a1[j];
    }

    for (k; k < n + n1; k++)
    {
        cout << a3[k] << " ";
    }
}
