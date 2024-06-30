
//    MEMOIZATION AVOID EXCCESSIVE CODES

// #include<stdio.h>

// int F[10];
// int mfib(int n)
// {
//     if (n <= 1)
//     {
//         F[n] = n;
//         return n;
//     }
//     else
//     {
//         if (F[n - 2] == -1)
//             F[n - 2] = mfib(n - 2);
//         if (F[n - 1] == -1)
//             F[n - 1] = mfib(n - 1);
//         F[n] = F[n - 2] + F[n - 1];
//         return F[n - 2] + F[n - 1];
//     }
// }
// int main()
// {
//     int i;
//     for (i = 0; i < 10; i++)
//         F[i] = -1;

//     printf("%d \n", mfib(5));
//     return 0;
// }

#include <stdio.h>

int fib(int n)
{

    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
void fibo(int n)
{
    int t1 = 0;
    int t2 = 1;
    int next;
    for (int i = 1; i <= n; i++)
    {

        next = t1 + t2;
        printf("%d ", t1);
        t1 = t2;
        t2 = next;
        }
}
int main()
{

    printf("%d \n", fib(5));
    fibo(5);

    return 0;
}