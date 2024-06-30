#include <bits/stdc++.h>
using namespace std;

// int main()
// {

//     int sum = 10;
//     int a[] = {6, 3, 8, 10, 16, 7, 5, 4, 9, 14};
//     int n = sizeof(a) / sizeof(a[0]);

//     for (int i = 0; i < n - 1; i++)
//     {

//         for (int j = i + 1; j < n - 1; j++)
//         {
//             if (a[i] + a[j] == sum)
//             {
//                 cout << a[i] << "+" << a[j] << " -> " << sum << endl;
//             }
//         }
//     }
// }

int main()
{

    int max;
    int sum = 10;
    int a[] = {6, 3, 8, 10, 16, 7, 5, 4, 9, 14};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    int H[max + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        H[a[i]]++;
    }

    for (int k = 0; k < max + 1; k++)
    {
        if (H[sum - a[k]] != 0) // example -> 10 - 6 =4
        {
            cout << a[k] << " + " << sum - a[k] << "->" << sum;
        }
    }
}