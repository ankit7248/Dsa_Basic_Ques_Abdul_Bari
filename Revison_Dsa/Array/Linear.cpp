#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int a[] = {23, 3, 2, 3, 2};
//     int key = 3;
//     for (int i = 0; i < 5; i++)
//     {
//         if (key == a[i])
//         {
//             cout << i << " ";
//         }
//     }
// }

int main()
{
    int key = 0;
    int a[] = {23, 3, 2, 45, 2};
    int min = a[0];

    for (int i = 0; i < 5; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << min;
    return min;
}