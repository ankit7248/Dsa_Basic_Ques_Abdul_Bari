#include <iostream>
using namespace std;

void search(int length,int key)
{
    int temp;
    int arr[length] = {1, 2, 4, 5, 3, 9, 8};
    for (int i = 0; i < length; i++)
    {
        if (key == arr[i])
        {
            // temp = arr[i];
            // arr[i] = arr[0];
            // arr[0] = temp;
            cout << arr[i];
        }
        
        arr[length]--;
    }
}

int main()
{
   search(6,3);
}