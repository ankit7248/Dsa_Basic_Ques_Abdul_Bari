#include <bits/stdc++.h>
using namespace std;

int main()
{

    int key;

    cout << "key : ";
    cin >> key;

    int l = 0;
    int n = 5;
    int A[n];

    for (int i = 0; i < n; i++)
    {

        cout << "Array input" << endl;
        cin >> A[i];
    }

   
    sort(A, A + n);

    for (int t = 0; t < n; t++)
    {
        cout<<"Sorted Array -> "<< A[t]<<endl;
    }

   

    int h = n;
    int mid = 0;
    while (l < h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
        {
            cout << "mid -> " << mid;
            return 0;
        }
        else if (key < A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
      
    }
    return 0;

}