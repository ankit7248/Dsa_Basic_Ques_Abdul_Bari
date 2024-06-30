#include <iostream>
using namespace std;

#include <map>

void printvec(map<int, string> &v)
{
    cout << "size " << v.size() << endl;
    for (auto &pre : v)
    {
        cout << pre.first << " " << pre.second << endl;
    }
}
int main()

{

    // ordered map  it use inbuilt tree so, it compare keys other value key
    map<string, string> v1;

    v1["abcd"] = "ankit"; // T.C -> it takes  size() * Olog(n) beacuse string give the output in ordered form so it comapre all string keys first then give output.

    map<int, string> v;

    v[3] = "abcd"; // insertion part takes ->O (log(n))
    v[5] = "singh";
    v[2] = "kumar";
    // auto it = v.find(2); // Olog(n)
    // if (it != v.end())
    //     v.erase(it); // delete the element 0log(n)

    // {
    //     cout << "no value";
    // }
    // else
    //     cout << (*it).first << " " << (*it).second << endl;
    // v.insert({3, "abchj"});
    // v[0];

    printvec(v);
    map<int, string>::iterator it = v.begin();
    for (it; it != v.end(); it++) // Access the Map it takes O(log(n))
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    // shortcut method use to traverse
}