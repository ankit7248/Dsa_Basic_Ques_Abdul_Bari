#include <iostream>

using namespace std;
#include <set> // store only one element with in duplicate elements

int main()
{

    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(0);
    s.insert(5);
    s.insert(5);
    s.insert(9);
    s.insert(9);

    // cout << "size ->" << s.size() << endl;
    // int n = s.size();
    // for (int i = 1; i < n; i++)
    // {
    //     cout << i << endl;
    // }
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;
    // check the value in present ya not

    cout << "5 is present or not -> " << s.count(5) << endl;

    // find the value and iterate at the  max elements

    set<int>::iterator itr = s.find(5);
    for (auto it = itr; it != s.end(); it++)

    {
        cout << "-----------" << endl;
        cout << *it << endl;
        
        cout << distance(s.begin(), it);
    }

    cout << endl;
}