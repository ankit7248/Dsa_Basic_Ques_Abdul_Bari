#include <iostream>
using namespace std;

int main()
{
    char A[] = "how are   you"; // count the white spaces in string
    int i, word = 1;
    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == ' ' || A[i - 1] == ' ')
        {
            word++;
        }
    }
    cout << word;
   
    return 0;
}