#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int *p;
    int n;
    cout << "n  values :" << endl;
    p = new int[];
    p[0] = 1, p[1] = 3, p[2] = 5, p[3] = 6;

    for (int i = 0; i<p.size(); i++)
    {
        cout << p[i] << endl;
    }
    // delete[ ]p;
}