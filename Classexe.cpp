// #include <iostream>
// using namespace std;

// class rectangle
// {
// private:
//     int length;
//     int breadth;

// public:
//     rectangle setlength(int l)
//     {
//         length = l;
//     }
//     int getlength()
//     {
//         return length;
//     }
//     int getbreadth()
//     {
//         return breadth;
//     }
//     rectangle setbreadth(int b)
//     {
//         breadth = b;
//     }
//     int area()
//     {
//         return length * breadth;
//     }
//     char colour(char col[10])
//     {
//         return col[10];
//     }
// };
// int main()
// {
//     rectangle r1, r2;
//     r1.setlength(3);
//     r1.setbreadth(4);
//     cout << "R1 area :" << endl;
//     cout << r1.area() << endl;
//     cout<<r1.colour("green");

//     cout << endl;

//     r2.setlength(3);
//     r2.setbreadth(4);
//     cout << "R2 area :" << endl;
//     cout << r2.area() << endl;

//     if ((r2.colour("GREEN") == r1.colour("GREEN")) && (r2.area() == r1.area()))
//     {
//         cout << "matching rectangle" << endl;
//     }
//     else
//     {
//         cout << "not matching rectangle";
//     }
//     return 0;
//
#include <stdio.h>
// int a = 10;
// int *p = &a;
// int &r = a;
// int *y;
// y = new int[5];

// printf("%d \n", r);
// printf("%d \n", *y);
// printf("%d", *p);
struct rectangle
{
    int length;
    int breadth;
};
void change(struct rectangle *r)
{
    r->length=10;
}
int area(struct rectangle *r1)
{
    int *length;
    r1->length=11;
    return (r1->length * r1->breadth);
}
int main()
{
    struct rectangle r = {10, 4};
    printf("%d", area(&r));
}
