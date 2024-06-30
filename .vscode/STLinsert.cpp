#include <iostream>
using namespace std;
#include <vector>
// void print(vector<int> &v)
// {

// }
int main()
{
    vector<int> v = {3, 2, 0, 4, 6, 7};

    vector<int>::iterator it = v.begin();

    v.insert(it + 3, 100);
    cout << "Vector after inserting 100 at position 3 :\n";
    for (auto x : v)
        cout << x << " ";
    cout << "\n";

    // delete the element

    it = v.begin();
    v.erase(it + 4);
    for (auto x : v)
        cout << x << " ";

    cout << endl;
    cout << 10 % 10;
    cout << 10 / 10;
}
