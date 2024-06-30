#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int &r=a;  //referencing the values
    int b=90;
    r=b;
    cout<<a<<endl<<r<<endl;

}