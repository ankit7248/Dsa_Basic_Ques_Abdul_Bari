#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[] = {2, 3, 4, 1, 10};
    int n = sizeof(a) / sizeof(a[0]);
 
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int emp = 0;
        emp = a[i];
        a[i] = a[j];
        a[j] = emp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
