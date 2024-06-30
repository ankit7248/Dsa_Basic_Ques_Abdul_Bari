#include <stdio.h>
#include <stdlib.h>
struct Matrix
{
    int *A;
    int n;
};
void Set(struct Matrix *m, int i, int j, int x)
{
    if (j >=i)
        m->A[j*(j-1)/2+i-1] = x; // column major formula
}
int Get(struct Matrix m, int i, int j)
{
    if (j >= i)
        return m.A[j*(j-1)/2+i-1];
    else
        return 0;
}
void Display(struct Matrix m)
{
    int i, j;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            if (j >= i)
                printf("%d ", m.A[j*(j-1)/2+i-1]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}
int main()
{
    struct Matrix m;
    int i, j, x;

    printf("Enter Dimension");
    scanf("%d", &m.n);
    m.A = (int *)malloc(m.n * (m.n + 1) / 2 * sizeof(int));
    printf("enter all elements");
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            scanf("%d", &x);
            Set(&m, i, j, x);
        }
    }
    printf("\n\n");
    Display(m);

    return 0;
}