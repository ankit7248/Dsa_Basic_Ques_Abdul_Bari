#include <iostream>

using namespace std;
#include <map> // map has own unique key for elements

int main()
{
    map<int, string> m;

    m[1] = "ankit";
    m[3] = "kumar";
    m[19] = "maurya";

    m.insert({5, "hmm"});
    cout << endl;
    cout << "before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " -> " << i.second << endl;
    }
    cout << endl;
    cout << "finding 19 -> " << m.count(19) << endl;
    m.erase(1);
    cout << endl;
    cout << "after erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " -> " << i.second << endl;
    }
    cout << endl;

    auto it =m.find(5);

    for(auto i=it; i!=m.end(); i++)
    {
        cout<<(*i).first<<endl; 
    }
}