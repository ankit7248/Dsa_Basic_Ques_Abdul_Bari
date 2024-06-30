#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[] = "WelCoMe";

    // for (int i = 0; a[i] != '\0'; i++)
    // {
    //     if (i % 2 == 0) // only even index value change
    //     {
    //         a[i] = a[i] + 32;
    //     }
    // }

    for (int i = 0; i < a[i] != '\0'; i++)
    {
        if (a[i] > 65 && a[i] < 96) // check range is in smaller value or not
        {
            a[i] = a[i] + 32;
        }
        else
        {
            a[i] = a[i] - 32;
        }
    }

    for (int i = 0; a[i] != '\0'; i++)
    {
        cout << a[i] << " ";
    }
}