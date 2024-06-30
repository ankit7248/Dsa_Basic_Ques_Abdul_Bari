#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Max = 0;
    int sum = 0;
    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> empty;

    for (int i = 0; i < v.size(); i++)
    {
        sum = 0;
        for (int j = i; i < v.size(); j++)
        {
            sum = sum + v[j];
            empty.push_back(sum);
            // Max = max(sum, v[j]);
        }
    }

    int max1 = *max_element(empty.begin(), empty.end());

    cout << max1;

    //   // vector<vector<long long int>>:: iterator it;

    //   // for (it = v.begin(); it < v.end(); it++)
    //   // {
    //   //     cout << (*it);
    //   // }

    //   cout
    //   << v[0];

    return 0;
}