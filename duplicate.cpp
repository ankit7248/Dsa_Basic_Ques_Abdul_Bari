#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[] = {1, 4, 4, 3, 3, 3, 4, 5, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // sort(arr, arr + n);
    // int lastDuplicate = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (arr[i] == arr[i + 1] && lastDuplicate != arr[i])
    //     {
    //         cout << "print duplcate values : " << arr[i] << endl;
    //     }
    //     lastDuplicate = arr[i];
    // }

    // for (int value : arr)
    // {
    //     cout << value;
    // }

    int arr[] = {3, 6, 88, 10, 12, 15, 15, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int length = n - 1;
    int H[20];

    for (int i = 0; i < length; i++)
    {
        H[arr[i]]++;
    }
    
    for (int i = 0; i < H[20]; i++)
    {
        if (H[i] > 1)
        {
            cout << i << " "<< H[i] << endl;
        }
    }

    return 0;
}