#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Sorted array

    int a[6] = {1, 2, 2, 3, 4};
    int b[5] = {2, 2, 3, 3};
    int c[5];
    int i = 0;
    int j = 0;

    while (i < 6 && j < 5)
    {
        if (a[i] < b[j])
        {
            i++;
        }

        else if (a[i] == b[j])
        {
            c[i] = a[i];
            cout << c[i] << " ";
            i++;
            j++;
        }

        else if (a[i] > b[j])
        {
            j++;
        }
    }

    return 0;
}