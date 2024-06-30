#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p, *q;
    int i;
    p = new int[5];
    // p = (int *)malloc(5 * sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    q = (int *)malloc(10 * sizeof(int));

    for (i = 0; i < 5; i++)
        q[i] = p[i];

    delete[] p;
    // free(p);

    p = q;
    q = NULL;

    for (i = 0; i < 5; i++)
        printf("%d \n", p[i]);

    // int a = 100;
    // cout << a * 2;

    return 0;
}
