#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {2, 1, 23, 2, 53};

    int l = 0;
    int h = n - 1;

    sort(arr, arr + h);

    int key = 53;
    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (key == arr[mid])
        {
            cout << mid << " ";
            return mid;
        }
        else if (key > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return 0;
}