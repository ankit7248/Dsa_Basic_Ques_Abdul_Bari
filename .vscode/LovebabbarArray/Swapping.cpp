#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    int n;
    cout << "enter the size of array";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int s;
        cout << "enter the input";
        cin >> s;
        v.push_back(s);
    }

    // v.push_back(4);
    // v.push_back(3);
    // v.push_back(5);
    // v.push_back(8);
    // v.push_back(10);
    // v.push_back(9);

    for (int i = 0; i < v.size();)
    {

        int temp = 0;

        temp = v[i];

        v[i] = v[i + 1];

        v[i + 1] = temp;

        i = i + 2;
    }

    for (auto value : v)
    {
        cout << value << " ";
    }
}