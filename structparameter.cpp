#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

void change(struct rectangle *p) // call by address
{
    p->length = 20;
}

int main()

{
    struct rectangle r = {10, 5};
    cout << "value of length  " << r.length << endl;
    change(&r);
    cout << "modify the value  " << r.length;
    return 0;
}


// Array inside a structure


#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth; 
};

struct rectangle *change() // call by value copy the value in heap 
{
    struct rectangle *p;
    p = new rectangle;
    p->length = 20;
    p->breadth = 13;
    return p;
}

int main()

{
    struct rectangle r = {10, 5};
    cout << r.length<<endl << r.breadth<<endl;
    struct rectangle *ptr = change();
    cout << ptr->length<<endl << ptr->breadth<<endl;

    return 0;
}