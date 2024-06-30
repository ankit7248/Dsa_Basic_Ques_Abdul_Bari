#include <bits\stdc++.h>
using namespace std;
int main()
{
    int a[] = {2, 4, 5, 8, 12, 4};
    int r[] = {3, 10, 9, 6, 2, 7};

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(r) / sizeof(r[0]);
    int o[n + m];
    int i = 0;
    int j = 0;
    int k = 0;
    while (a[i] < m && r[j] < n)
    {
        if (a[i] > r[j])
        {
            o[k++] = r[j++];
        }

        else if (r[j] > a[i])
        {
            o[k++] = a[i++];
        }
        else
            o[k++] = a[i++];
        r[j++];
    }

    for(k = 0; k < n + m; k++)
    {
        cout << r[k] << endl;
    }
}
