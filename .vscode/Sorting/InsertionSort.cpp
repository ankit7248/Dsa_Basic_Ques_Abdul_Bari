// #include <bits/stdc++.h>
// using namespace std;

// int main()

// {
//     int a[] = {2, 6, 10, 15, 20, 25, 30};
//     int length = sizeof(a) / sizeof(a[0]);
//     int key = 3;
//     int put = 12;
//     for (int i = length - 1; i < 3; i--)
//     {
//         a[i+1] = a[i - 1];
        
//     }
//     a[3] = put;
//     length++;

//     for (int i = 0; i < length - 1; i++)
//     {
//         cout << a[i] << endl;
//     }
// }



#include <bits/stdc++.h>
using namespace std;
int main()

{
    int a[] = {2, 6, 10, 15, 20, 25, 30};
    int length = sizeof(a) / sizeof(a[0]);
    int i = length - 1;
    int key = 12;

    for (int i = 1 ; i < length; i++)
    {
       
        while(a[i] > key)
        {
            a[i+1] = a[i];
            i--;
        }
    }
    a[i+1] = key;
    //length ++;

    for (int i = 0; i < length - 1; i++)
    {
        cout << a[i] << endl;
    }
}
