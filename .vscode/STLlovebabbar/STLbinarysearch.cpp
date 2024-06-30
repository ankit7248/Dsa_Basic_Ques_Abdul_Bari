#include <iostream>
using namespace std;

#include <algorithm>
#include <vector>

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    v.push_back(8);
    v.push_back(15);
    v.push_back(5);
    v.push_back(19);

    cout << "find 5 -> " << binary_search(v.begin(), v.end(), 5) << endl;
    cout << "lower bound -> " << lower_bound(v.end(), v.begin(), 5) - v.begin() << endl; // Log(n)
    cout << "upper bound -> " << upper_bound(v.end(), v.begin(), 5) - v.begin() << endl; // Log(n)

    int a = 3;
    int b = 5;

    cout << "max -> " << max(a, b) << endl;
    cout << "min -> " << min(a, b);

    // swap(a, b);
    // cout << endl
    //      << "a -> " << a << endl;

    // string abcd = "abcd";
    // reverse(abcd.begin(), abcd.end());
    // cout << "string -> " << abcd << endl;

    // rotate(v.begin() + 1, v.begin() + 2, v.end()); // rotate the elements which elements you want
    // cout << "after rotate " << endl;
    // for (auto i : v)
    // {
    //     cout << i << endl;
    // }
    // cout << endl;

    // sort(v.begin(), v.end());  // sort is based into intro sort -> 1. heap sort 2. quick sort 3. insertion sort
    // for (auto i : v)
    // {
    //     cout << i << endl;
    // }
    // cout << endl;
}