#include <bits/stdc++.h>
using namespace std;

// all the set of operation is Logarithmic size
// store in ordered form

int main()
{

    set<int> s = {1, 2, 3, 1}; // Remove duplicate elements
    for (auto v : s)
    {
        cout << v;
    }

    // Erase functionality
    // Log n
    
    s.erase(s.begin()); // delete first element

    // s.erase(s.begin(), s.begin() +  2);
    // st.erase(startIterator, endIterator)

    // s.erase(2); // Directly delete the Key

    // auto it = s.find(3); // Log n it will be iterator to 7;
    // cout <<

    // auto it = s.find(8); // it = s.end();
    // cout << *(it);

    // cout << endl;

    for (auto v : s)
    {
        cout << v;
    }

    s.insert(3);
    s.emplace(87);
    s.size();

    // UNORDERERD SET

    unordered_set<int> s1 = {3, 2, 3, 1, 1};

    s.insert(4);
    s.insert(9);
    s.insert(2);
    cout << endl;

    for (auto v1 : s)
    {
        cout << v1;
    }

    // average time complexity is O(1)
    // tlle  -> switch to set
    // but the worst case is linear in nature , 0(set ,size);

    // Multiset

    multiset<int> ms; // It give in ordered set and give all elements like duplicate also

    cout << endl;

    ms.insert(2);
    ms.insert(1);
    ms.insert(5);
    ms.insert(2);
    ms.insert(4);

    ms.erase(4);
    ms.clear(); // delete all element

    auto it = ms.find(2);

    for (auto v3 : ms)
    {
        cout << v3 << endl;
    }

    for (auto it = ms.begin(); it != ms.end(); it++)
    {
        cout << *(it);
    }

    ms.erase(ms.find(2));
    ms.erase(ms.find(2), ms.find(2) + 2);

    unordered_set<int> ankit;

    // Unordered set if there is duplicate elements so it remove duplicate and give unique element

    ankit.insert(3);
    ankit.insert(3);
    ankit.insert(3);

    for (auto it : ankit)
    {
        cout << it;
    }
    
}