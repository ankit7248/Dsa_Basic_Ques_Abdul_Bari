#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    int n;
    int l = sizeof(arr) / sizeof(arr[0]);
    cout << "n : ";
    cin >> n;
    int x;
    cout << "x : ";
    cin >> x;
    // cout << l;
    int i;
    for (i = l; i < arr[n]; i--)
    {
        arr[i] = arr[i + 1];
    }
    arr[n] = x;
    for (int i = 0; i < l; i++)
    {
        cout << arr[i];
    }

    return 0;
}