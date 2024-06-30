#include <bits/stdc++.h>
using namespace std;
#include <vector>

int main()

{
    vector<pair<int, int>> v = {{2, 3}, {4, 5}, {6, 7}};

    vector<pair<int, int>>::iterator it;
    for (it = v.begin(); it != v.end(); ++it) // o(n)
    {
        cout << (it->first) << " " << (*it).second;
    }

    for (auto it = v.begin(); it != v.end(); ++it) // o(n)  // auto -> In auto there is no need to use write the iterator
    {
        cout << (it->first) << " " << (*it).second << endl;
    }

    for (pair<int, int> value : v)

    {
        cout << value.first << " " << value.second << endl;
    }
    cout << endl;

    vector<int> v1 = {2, 3, 4, 5, 6};

    for (int value : v1) // if you use refernece then there is no copy there in value
    {
        value++;
        cout << value << " ";
    }
    cout << endl;

    for (int &value : v1) // if you use refernece then there is no copy there in value
    {
        value++;
        cout << value << " ";
    }
    cout << endl;

    // vector<int> :: iterator it;

    // for (it = v1.begin(); it != v1.end(); ++it)
    // {
    //     cout << (*it) << "   ";
    // }
}
// (*it).first <=> (it->first)