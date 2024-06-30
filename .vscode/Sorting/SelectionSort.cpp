#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k ;
    int a[] = {2, 8, 4, 5, 7, 12};
   int n = sizeof(a)/sizeof(a[0]);
   for (int i = 0; i < n-1; i++)
   {
     for (int j =  k = i ; j < n; j++)
     {
         if (a[j] < a[k])
         {
            k = j;
         }
         swap(a[k],a[i]);
         
     }
     
   }

   for (int i = 0; i < n-1; i++)
   {
     cout<<a[i]<<endl;
   }
   
   
}