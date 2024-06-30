#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    char s[] = "welcome";
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    cout << count;
    return 0;
}