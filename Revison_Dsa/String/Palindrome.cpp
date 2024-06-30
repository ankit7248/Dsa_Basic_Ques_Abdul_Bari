#include <bits/stdc++.h>
using namespace std;

// Compare string

// int main()
// {
//     char a[] = "painting";
//     char b[] = "painter";

//     int H[19];

//     for (int i = 0, j = 0; a[i] != '\0' && b[j] != '\0'; i++, j++)
//     {
//         if (a[i] != b[j])
//         {
//             cout << "unequal";
//             break;
//         }
//     }
//     cout << "equal";
//     return 0;
// }

// Palindrome

int main()
{
    char a[] = "ankit";
    int n = sizeof(a) / sizeof(a[0]);
    cout << "length" << n << endl;

    for (int i = 0, j = n - 1; a[i] != a[j]; i++, j--)
    {
        if (a[i] != a[j])
        {
            cout << "Unequal" << endl;
            break;
        }
    }
    cout << "equal" << endl;

    return 0;
}
