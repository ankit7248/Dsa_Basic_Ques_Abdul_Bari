#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[] = "python";
    // cout << "After the reverse of a string  " << strrev(a) << endl;
    int n = 0;
    for(int i = 0;a[i]!='\0';i++){
        n++;
    }
    for(int i = 0,j = n-1;i<j;i++,j--){
        char t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    for(int i = 0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}   