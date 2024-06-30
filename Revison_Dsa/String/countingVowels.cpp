#include <bits/stdc++.h>
using namespace std;

int main()
{

   char a[] = "how are you buddy";
   int flag = 0;
   int cons = 0;

   for (int i = 0; a[i] != '\0'; i++)
   {

      if ('a' == a[i] || 'e' == a[i] || 'i' == a[i] || 'o' == a[i] || 'u' == a[i])
      {
         flag++;
      }

      else if (a[i] >= 97 && a[i] <= 130)
      {
         cons++;
      }
      }
   cout << "vowles -> " << flag << endl;
   cout << "const ->" << cons;
   return 0;
}