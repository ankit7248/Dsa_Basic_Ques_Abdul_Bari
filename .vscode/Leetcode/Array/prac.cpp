#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4] = {2, -1, 3, 0};
    int H[4];

    vector<int> v = {2, 3, 4, 2, 1};

    char names[] = "ankit kumar is good";
    for (int i = 0, j = 0; i < 4 && j < 4; i++, j++)
    {
        H[a[i]] = names[j];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << H[i] << " ";
    }

    vector<int> v1;

    copy(v.begin(), v.end(), back_inserter(v1));

    for (auto value : v)
    {
        cout << value << endl;
    }

    for (auto value1 : v1)
    {
        cout << value1 << endl;
    }
    int sum1 = accumulate(v.begin(), v.end(), sum1);
    cout << sum1 << endl;

}