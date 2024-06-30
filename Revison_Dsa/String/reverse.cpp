#include <bits/stdc++.h>
using namespace std;

int main()
{
    string b[] = {"adw", "dss"};
    char a[] = "ankit";
    int j = 0;

    for (j; j != '\0'; j++)
    {
    }

    j = j - 1;

    for (int i = 0; i < j; i++, j--)
    {
        int temp = 0;

        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for (int i = 0; i != '\0'; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}