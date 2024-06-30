#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[] = {1, 2, 3, 5};
    int n = sizeof(a) / sizeof(a[0]);

    int s = 0;
    int sum = 0;
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (int i = 0; i < n; i++)

    {
        sum = sum + a[i];
    }
    
    s = (max * (max + 1)) / 2;
    int ans = s - sum;
    cout << ans;
}