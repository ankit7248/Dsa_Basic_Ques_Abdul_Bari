#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4] = {2, 3, 5, 9};

    int i = 0;

    while (i < 4)
    {
        if (a[i + 1] < a[i])
        {
            break;
        }
        i++;
    }
    cout << "sorted";

    return 0;
}