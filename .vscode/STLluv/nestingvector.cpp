#include <iostream>
using namespace std;
#include <vector>

// Vector of pairs

// void printvec(vector<pair<int, int>> v)
// {

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i].first << " " << v[i].second << endl;
//     }
// }

// int main()
// {
//     // vector<pair<int, int>> v = {{1,2},{3,4},{5,6}};
//     vector<pair<int, int>> v;

//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         v.push_back({x, y});
//         // v.push_back(make_pair(x,y));
//     }

//     swap(v[0], v[2]); // swapping the value of 0 index vector of set element to 2 index vector set element

//     printvec(v);
// }

// Vector of vector

// void printvec(vector<int> &v)
// {
//     cout << "size " << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << endl;
//     }
// }
// int main()
// {

//     int N;
//     cin >> N;
//     vector<int> v[N];           // taking N vector in v Vector
//     for (int i = 0; i < N; i++) // give the vector size for v vector
//     {
//         int x;
//         cin >> x;
//         for (int h = 0; h < x; h++) // give the element in v vector size(x) and input elements of v vector
//         {
//             int n;
//             cin >> n;
//             v[i].push_back(n); // push the element in v vector
//         }
//     }
//     for (int i = 0; i < N; i++)
//     {
//         cout << v[i] << endl;
//     }

//     printvec();
//     return 0;
// }

// void printvec(vector<int> v)
// {
//     cout << "size " << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << endl;
//     }
// }

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        vector<int> temp;
        for (int h = 0; h < x; h++)
        {
            int n;
            cin >> n;
            temp.push_back(n);
        }
        v[0].push_back(10);
        for (int i = 0; i < v.size(); i++)
        {
            printvec(v[i]);
        }
        return 0;
    }
}