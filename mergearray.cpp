#include <bits\stdc++.h>
using namespace std;

int main()

{
    int arr1[] = {2, 3, 4, 5, 5, 6};
    int arr2[] = {2, 3, 4, 5, 5, 6, 3, 4, 5};

    int n1 = sizeof(arr1) / sizeof(arr1[0]) - 1;
    int n2 = sizeof(arr2) / sizeof(arr2[0]) - 1;

    int arr3[n1 + n2];
    int i = 0;
    int j = 0;
    int k = 0;

    for (i; i <= n1; i++)
    {
        arr3[k++] = arr1[i];
    }
    for (j; j <= n2; j++)
    {
        arr3[k++] = arr2[j];
    }

    // sort(arr3, arr3 + n1 + n2);

    for (i = 0; i < n1 + n2; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}