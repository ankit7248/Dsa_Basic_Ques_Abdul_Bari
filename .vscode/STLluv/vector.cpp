#include <bits/stdc++.h>
using namespace std;
#include <vector>

void printVec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    // vector<string> v;
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     string s;
    //     cin>>s;
    //     v.push_back(s);
    // }

    int n;
    // vector <int> v(10,3); // first is size and second is element

    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(7);
    
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x); // 0(1)
    // }

    v.size(); // -> O(1)

    cout << "size " << v.size() << endl;
    printVec(v);
    cout << endl;

    vector<int> &v1 = v;
    // if v1 is doesn't want copy of v vector so wwe have to use Ampersand in V1 vector
    //  Copy -> T.C -> O(N)

    v1.push_back(8);

    // When we use refernces & so, it gives thhe actual value in all vector where it's connected with & Vector
    printVec(v);

    cout << endl;

    // V1 vector

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << endl;

    vector<int> v2 = {1, 2, 4, 4};
    
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    return v;
}
