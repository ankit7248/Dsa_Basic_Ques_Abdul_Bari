#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[9] = {3, 4, 12, 8, 8, 9, 8};

    int dup = 0;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 1 + i; j < 7; j++)
        {
            if (a[i] == a[j] && a[i] != dup)
            {
                dup = a[i];
                cout << dup << " ";
            }
        }
    }
    return 0;
}

// {
//     int n;
//     int a[] = {1, 3, 4, 5, 5, 6, 6};

//     n = sizeof(a) / sizeof(a[0]);

//     int j;

//     for (int i = 0; i < n - 1; i++)
//     {
//         if (a[i] == a[i + 1])
//         {
//             j = i + 1;
//             while (a[i] == a[j])
//             {
//                 cout << a[i] << " -> " << j - i << endl;
//                 j++;
//             }
//             i = j - 1;
//         }
//     }
//     return 0;
// }