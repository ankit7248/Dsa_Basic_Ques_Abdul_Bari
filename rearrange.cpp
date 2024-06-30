#include <iostream>
using namespace std;

int main()
{
    int arr[] = {-1, 2, 3, -6, -9, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = n - 1;
    int j = 0;
    int temp;

    while (arr[i] < 0)
    {
        i--;
    }
    while (arr[j] > 0)
    {
        j++;
    }
    if (j != i)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int k = n - 1; k >= 0; k--)
    {
        cout << arr[k] << endl;
    }
    return 0;
}