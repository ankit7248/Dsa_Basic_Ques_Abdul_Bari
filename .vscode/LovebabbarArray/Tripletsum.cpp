#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Triplet sum -> 2 + 3 + 7 = 12
    //                3 + 4 + 5 = 12
    //                4 + 5 + 3 = 12

    vector<int> v = {1, 2, 3, 4, 5, 7};
    int sum = 12;

    int max = *max_element(v.begin(), v.end()); // O(1)

    int H[max];

    for (int i = 0; i < max + 1; i++)
    {
        H[i] = 0;
    }

    for (int i = 0; i < v.size(); i++)
    {
        H[v[i]]++;
    }

    for (int i = 0; i < max + 1; i++)
    {
        int rem = sum - (v[i] + v[i + 1]);
        if (H[rem] == 1)
        {
            cout << v[i] << " + " << v[i + 1] << " + " << rem << " = " << sum << endl;
        }
    }
    return 0;
}