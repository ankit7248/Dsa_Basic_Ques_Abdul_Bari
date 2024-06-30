#include <bits/stdc++.h>
using namespace std;
#include <vector>

int main()
{

    vector<int> v;
    cout << "capacity->" << v.capacity() << endl;

    vector<int> a(5, 1); // 5 is size and 1 is element
    cout << "print a" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }

    cout << endl;

    vector<int> last(9);
    cout << "print last" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }

    cout << endl;

    v.push_back(9);

    cout << "capacity->" << v.capacity() << endl;

    v.push_back(6);

    cout << "capacity->" << v.capacity() << endl;

    v.push_back(3);

    cout << "capacity->" << v.capacity() << endl; // capacity show kitna space ha

    cout << "size->" << v.size() << endl; // size show kitna element ha
    cout << "front element" << v.front() << endl;
    cout << "back element" << v.back() << endl;

    // cout << "element at 2nd index" << v.at(2) << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    v.pop_back();

    cout << "before pop" << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "before clear size " << v.size() << endl;
    v.clear();
    cout << "after clear size " << v.size() << endl;

    vector<int> v1 = {1};
    cout << v1.size() - 1;

    // copy(v.begin(), v.end(), back_inserter(last));

    // int a = 120;
    cout << endl;
    cout << 120 % 10;

    // reduce(begin(v),end(v),0);
}