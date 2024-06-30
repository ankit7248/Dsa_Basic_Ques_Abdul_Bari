#include <iostream>
using namespace std;

int main()
{

    int x = 10;
    int length = 12;
    int n[12] = {2, 3, 45, 2, 5, 2, 5, 3, 2};
    for (int i = length; i >= 4; i--)
    {
        n[i] = n[i - 1];
        n[i] = x;

        length++;
    } cout << n[i];

    return 0;
}

// #include <stdio.h>
// struct Array
// {
//     int A[10];
//     int size;
//     int length;
// };
// void Display(struct Array arr)
// {
//     int i;
//     printf("\nElements are\n");
//     for (i = 0; i < arr.length; i++)
//         printf("%d ", arr.A[i]);
// }
// int Delete(struct Array *arr, int index)
// {
//     int x = 0;
//     int i;
//     if (index >= 0 && index < arr->length)
//     {
//         x = arr->A[index];
//         for (i = index; i < arr->length - 1; i++)
//             arr->A[i] = arr->A[i + 1];
//         arr->length--;
//         return x;
//     }
//     return 0;
// }
// int main()
// {
//     struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};
//     printf("%d", Delete(&arr1, 3));
//     Display(arr1);
//     return 0;
// }


