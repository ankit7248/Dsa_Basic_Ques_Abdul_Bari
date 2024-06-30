#include <bits\stdc++.h>
using namespace std;

// Single Missing element

int main()
{

   // int arr[] = {10, 11, 12, 14, 15, 16, 17};
   // int h = sizeof(arr) / sizeof(arr[0]);
   // int l[0];

   // for (int i = 0; i < 10; i++)
   // {
   //     int diff = l[0] - 0;
   //     if (arr[i]-arr[i] != diff)
   //     {
   //         cout << "missing element founded " << i + diff;
   //         break;
   //     }
   //

   // for (int i = 0; i < h; i++)
   // {
   //    if (arr[i] - i != diff)
   //    {
   //       cout << diff + i;
   //       break;
   //    }
   // }

   // multiple missing element

   // int arr[] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};
   // int h = sizeof(arr) / sizeof(arr[0]);
   // int diff = arr[0] - 0;
   // for (int i = 0; i < h; i++)  //O(n)
   // {
   //    if (arr[i] - i != diff)
   //    {
   //       while ((arr[i] - i) > diff)  //0(1)
   //       {
   //          cout << diff + i << endl;
   //          diff++;
   //       }
   //    }

   // }

  //Hashing method

   int arr[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
   int h = sizeof(arr) / sizeof(arr[0]);
   
   int z = *max_element(arr,arr+h);
   int H[z];
   for (int i = 0; i < h; i++)
   {
      H[arr[i]]++;
   }
      for (int i = 1; i < z ; i++)
   {
      if (H[i] == 0)
      {
         cout << i << endl;
      }
   }
}


