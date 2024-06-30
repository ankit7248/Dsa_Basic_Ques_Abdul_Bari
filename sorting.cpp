#include <iostream>

using namespace std;

int sorting(int arr[], int n)
{
    n = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int arr[] = {2, 3, 4, 1, 6, 7};

    if (sorting(arr, 6))
    {
        cout << "sorted";
    }
    else
    {
        cout << "unsorted";
    }
    return 0;
}