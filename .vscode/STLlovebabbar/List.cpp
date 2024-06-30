#include <iostream>
using namespace std;

#include <list>       // USE IN DOUBLE LINKED LIST

int main()
{
    list<int> l;
    list<int> m(l); // copy element in -> m
    for (int i : m)
    {
        cout << i << " ";
    }
    cout << endl;

    list<int> n(5, 100); 
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "after erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << "size of list" << l.size() << endl;
}