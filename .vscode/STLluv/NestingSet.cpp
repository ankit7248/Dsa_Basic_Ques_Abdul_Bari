#include <iostream>
using namespace std;
#include <map>
#include <vector>
#include <algorithm>
int main()
{
    map<pair<string, string>, vector<int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ct;
        string fn, ln;
        cin >> fn >> ln >> ct;
        for (int i = 0; i < ct; i++)
        {
            int x;
            cin >> x;
            v[{fn, ln}].push_back(x);
        }
        for (auto pr : v)
        {
            auto &full_name = pr.first;
            auto &list = pr.second;
            cout << full_name.first << " " << full_name.second << endl;
            cout << list.size() << endl;
            for (auto &value : list)
            {
                cout << value << " ";
            }
            cout << endl;
        }
    }
}
