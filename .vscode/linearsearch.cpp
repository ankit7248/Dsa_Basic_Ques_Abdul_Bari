#include <iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> v = {2,3,4,5,6,9};
   
    int key=3;

    int n;
    n = v.size();
    for (int it=0 ; it < n; it++)
    {
        if(key == v[it])
        {
            cout<<"matched";
        }
    }
     return -1;
}
    
