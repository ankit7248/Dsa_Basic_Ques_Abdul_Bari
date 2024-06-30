#include <iostream>
using namespace std;

int main()
{

    int A[] = {5, 8, 3, 9, 6, 2, 10, 5, -1, 4};
    int min = A[0];
    int max = A[0];
    int n = 10;
    for (int i = 0; i < n; i++)
    {

        if (A[i] < min)
        {
            cout << "min value less than 5  : ";
            min = A[i];
            cout << min << endl;
        }

        else if (A[i] > max)
        {
            cout << "max value greater than 5  : ";
            max = A[i];
            cout << max << endl;
        }
    }
    return 0;
}