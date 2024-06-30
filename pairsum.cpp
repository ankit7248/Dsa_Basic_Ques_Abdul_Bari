#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  int arr[]={2,3,4,5,1};

    //     int pair = 3;

    //     int n = sizeof(arr) / sizeof(arr[0]);
    //     for (int i = 0; i < n; i++)
    //     {
    //        for (int j = 1; j < n; j++)
    //        {
    //          if(arr[i]+arr[j] == pair)
    //          {
    //             cout<< arr[i]<<" "<<arr[j];
    //          }
    //        }

    //     }
    //     return 0;

    // HASHING METHOD

    int k = 2;
    int arr[] = {1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // int z = *max_element(arr, arr + n);
    // int H[z];

    for (int i = 0; i < n; i++)
    {
        int H[k - arr[i]];
        if (H[k - arr[i]] != 0)
        {
            cout << arr[i] << " " << k - arr[i] << endl;
        }
        H[arr[i]]++;
    }
}