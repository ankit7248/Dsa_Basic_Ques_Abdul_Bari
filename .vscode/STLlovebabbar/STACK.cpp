#include <iostream>
using namespace std;
#include <stack>

int main()
{
    stack<string> s;
    s.push("ankit");
    s.push("kumar");
    s.push("maurya");
    

    cout << "top element " << s.top() << endl;
    s.pop();
    cout << "top element " << s.top() << endl;

    cout << "size of stack" << s.size() << endl;

    cout << "empty or not" << s.empty() << endl;
}