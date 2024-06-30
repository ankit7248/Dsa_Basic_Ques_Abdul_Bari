#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mpp;

    // operation on log(n) time

    mpp["raj"] = 32;
    mpp["ankit"] = 12;
    mpp["kumar"] = 21;
    mpp["kuch"] = 43;
    mpp["yup"] = 42;

    for (auto v : mpp)
    {
        cout << v.first << v.second << endl;
    }

    // mpp.emplace("kus", 31);
    // mpp.erase("kumar");
    // mpp.erase(mpp.begin());    // mpp.erase(key)
    // mpp.clear();               // entire map is cleaned up
    //                            // mpp.erase(mpp.begin(), mpp.begin() + 2); // cleans up  a given range
    // auto it = mpp.find("hmm"); // points where hmm lies

    // if (mpp.empty())
    // {
    //     cout << " yes it is empty";
    // }
    // cout << endl;

    // cout << mpp.count("ankit");

    // for (auto it = mpp.begin(); it != mpp.end(); it++) // iterate the loop
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // // Unordered Map

    // // It doesn't store any order

    // unordered_map<int, int> mpps;
    // // it does not take unordered_map<pair<int,int> mpp; not possible
    // // o(1) in almost all cases
    // // o(n) in the worst case, where n is the container size
    // // Use as hashing

    // // Pair class
    // pair<int, int> pr = {1, 2};
    // pair<pair<int, int> int> r = {{1, 2}, 3};
    // // cout << pr.first.second << endl; // access first second element -> 2

    // pair<pair<int, int>, pair<int, int>> pr = {{1, 2}, {3, 4}};
    // // cout << pr.first.first;   // -> 1
    // cout << pr.second.second; // -> 4

    // vector<pair<int, int>> v; // vector pair
    // set<pair<int, int>> sa;
    // map<pair<int, int>, int> mpps2;

    // multimap<string, int> mpps3;

    // // Sorted aur multiple keys
    // mpps3.emplace("raj", 2);
    // mpps3.emplace("raj", 5);
}