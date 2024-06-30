#include <iostream>
#include <stdio.h>
using namespace std;

class matrix
{

public:
    int i, j, n, x, arr[];

public:
    void set(int i, int j, int x)
    {
        if (i == j)
        {
            arr[i - 1] = x;
        }
    }
    int get()
    {
        if (i == j)
        {
            return arr[i - 1];
        }
        else
            return 0;
    }

    void display(int n)

    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == j)
                {
                    printf("%-2d", arr[i - 1]);
                    // cout << arr[i - 1]<<" ";
                }
                else
                {
                    printf("%2d ", 0);
                    // cout << "0"<< " " ;
                }
            }
            cout << endl;
        }
    }
};
int main()
{
    matrix m;
    m.set(1, 1, 5);
    m.set(2, 2, 8);
    m.set(3, 3, 4);
    m.set(4, 4, 3);
    m.display(4);
    return 0;
}