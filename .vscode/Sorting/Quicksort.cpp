// #include <stdio.h> #include<stdlib.h>
// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int partition(int A[], int l, int h)
// {
//     int pivot = A[l];
//     int i = l, j = h;
//     do
//     {
//         do
//         {
//             i++;
//         } while (A[i] <= pivot);
//         do
//         {
//             j--;
//         } while (A[j] > pivot);

//         if (i < j)
//             swap(&A[i], &A[j]);
//     } while (i < j);
//     swap(&A[l], &A[j]);
//     return j;
// }
// void QuickSort(int A[], int l, int h)
// {
//     int j;
//     if (l < h)
//     {
//         j = partition(A, l, h);
//         QuickSort(A, l, j);
//         QuickSort(A, j + 1, h);
//     }
// }
// int main()
// {
//     int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n = 10, i;


//     QuickSort(A, n,);

//     for (i = 0; i < 10; i++)
//         printf("%d ", A[i]);
//     printf("\n");
//     return 0;
// }

#include<bits/stdc++.h>

int partition(int arr[],int low,int high){
    int pivot= arr[high];
    
    int i= low-1;
    
    for(int j=low;j<high;j++){
        if(arr[j] < arr[high]){
            i++;
            int temp= arr[i];
            arr[i]= arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1]= arr[high];
    arr[high] = temp;
    return (i+1);
}
void quickSort(int arr[],int low,int high){
    if(low < high){
        int index = partition(arr,low,high);
        quickSort(arr,low,index-1);
        quickSort(arr,index+1,high);
    }
}
void printArray(int arr[]){
    for(int i=0;i<8;i++){
        printf("%d," , arr[i]);
    }
}
int main(){
    int arr[]={9,6,5,0,8,4,2,7};
    int n = (sizeof(arr)/sizeof(arr[0]));
    quickSort(arr,0,n-1);
    printArray(arr);

}