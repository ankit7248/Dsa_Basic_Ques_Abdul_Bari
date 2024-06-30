#include <iostream>

using namespace std;
#include <queue>

int main()
{
    queue<string> q;

    q.push("ankit");
    q.push("kumar");
    q.push("maurya");
    cout << "before size of queue -> " << q.size() << endl;

    cout << "top element " << q.front() << endl;
    q.pop();
    cout << "top element " << q.front() << endl;

    cout << "after size of queue -> " << q.size() << endl;

    cout << "empty or not" << q.empty() << endl;
   
}