#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {2, 5, 3, 7, 4, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    if (binary_search(a, a + 10, 2))
        cout << "element found";
    else
        cout << "Element not found in the array";

    cout<< "\n max element "<< *max_element(a,a+n);
    cout<< "\n max element "<< *min_element(a,a+n);
    reverse(a,a+n);
      for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

}