#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]= {2,3,5,1,4};
    int n =  sizeof(a)/sizeof(a[0]);
    int temp = 0;
    for (int i = 0; i < n ; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j]; 
                a[j] = temp;
            }
        }  
    }
    for (int i = 0; i < n ; i++)
    {
        cout << a[i] <<endl;
    }
    
return 0;
}