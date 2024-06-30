#include<iostream>
using namespace std;

#include<stack>

class 

int isoperand(char x)

{
    if(x=='+' || x=='-' || x=='*' || x=='/')
    {
        return 0;
    }
    return 1;
}
int pre(char x)
{
    if (x=='+'|| x=='-')
    {
        return 1;
    }
    
    else if (x=='*' || x== '-')
    {
        return 2;
    }
    return 0;
    
}
int main()
{
    char *convert(char *infix)
    stack<int> s;

    

    
    
      

}