#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[3][3] = {{1, 2, 3}, {2, 4, 6}, {1, 3, 5}};
    int B[3][3] = {{2, 4, 3}, {5, 3, 4}, {2, 3, 9}};

    // int *B[3];
    // int **C;
    int i, j, t, k;

    // B[0] = (int *)malloc(4 * sizeof(int));
    // B[1] = (int *)malloc(4 * sizeof(int));
    // B[2] = (int *)malloc(4 * sizeof(int));

    // C = (int **)malloc(3 * sizeof(int *));
    // C[0] = (int *)malloc(4 * sizeof(int));
    // C[1] = (int *)malloc(4 * sizeof(int));
    // C[2] = (int *)malloc(4 * sizeof(int));

    printf("value of matrix 1");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("value of matrix 2");
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("value of matrix multiplication");
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {

                printf("%d ", A[i][k] * B[k][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
