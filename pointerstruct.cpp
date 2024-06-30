#include <iostream>
using namespace std;

struct rect
{
    int length = 10;
    int breadth = 3;
};
int main()
{
    rect r;
    cout << r.length << endl;
    cout << r.breadth << endl;

    rect *p = &r;
    p = new rect;
    cout << p->length << endl;
    cout << p->breadth << endl;
    delete[] p;
}