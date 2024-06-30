#include <bits/stdc++.h>
using namespace std;

// VECTOR IS DYNAMIC BUT ARRAY IS NOT
// Array is static

int main()
{
    array<int, 4> arr;
    arr.fill(4);

    // arr.at(index);

    for (int i = 0; i < 4; i++)
    {
        cout << arr.at(i) << " "; // at is same as to point the point the value of index.
    }

    arr.front();
    arr.back();

    vector<int> v(4, 10);
    vector<int> v1(3, 19);

    vector<int> ankit;
    ankit.push_back(2);
    ankit.push_back(4);
    ankit.push_back(5);
    ankit.push_back(7);
    
    ankit.emplace_back(3); // same as push_back but it  is slightly fast than push back in there is less chance of TLE.

    for (auto valu : ankit)
    {
        cout << valu;
    }

    vector<int> ankit1(ankit.begin(), ankit.begin() + 4); // you copy element as this method also.

    for (auto same : ankit1)
    {
        cout << same << endl;
    }

    // 2D VECTOR

    vector<vector<int>> vectors; // nested vector
    vectors.push_back(ankit);
    vectors.push_back(ankit1);

    //   vectors -> [[1,3,2],[5,4,3]]

    cout << endl;

    for (auto value : vectors)
    {
        for (auto data : value) // data is the element of value of first index after that it going in loop
        {
            cout << data << " ";
        }
    }
    cout << endl;

    // another method

    for (int i = 0; i < vectors.size(); i++)
    {
        for (int j = 0; j < vectors[i].size(); j++)
        {
            cout << vectors[i][j] << " kuch ";
        }
    }
    vector<vector<int>> vec(10, vector<int>(5, 2)); // EASY PISY
    vec.push_back(vector<int>(20, 5));              // push this vector in vector with size 20.

    vector<int> arr3[4]; // same way like vector but it is static in size
    arr3[1].push_back(5);

    // 3 D vector

    vector<vector<vector<int>>> vecas(10, vector<vector<int>>(5, vector<int>(4, 3)));
}