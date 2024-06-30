#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
}
    *first = NULL;
class Linkedlist
{
public:
    Node *p, *t;
    void create(int A[], int x)
    {
        first = new Node;
        first->data = A[0];
        first->next = NULL;
        p = first;

        for (int i = 1; i < x; i++)
        {
            t = new Node;
            t->data = A[i];
            t->next = NULL;
            p->next = t;
            p = t;
        }
    }
    void searching(Node *p, int A[], int key)
    {
        while (p != 0)
        {
            int i = 0;
            p = p->next;
            if (p->data == key)
            {
                cout << A[i];
                i++;
            }
        }
    }
    // bool sorted(Node *p)
    // {
    //     while (p != 0)
    //     {
    //         p = p->next;
    //         if (p->data <= p->next->data)
    //         {
    //             return true;
    //         }
    //         else
    //             return false;
    //     }
    // }
    bool sorting(Node *p)
    {
        int x = -3421;
        // struct Node *last = first;
        while (p != NULL)
        {
            if (p->data < x)
            {
                return 0;
            }

            x = p->data;
            p = p->next;
        }
        return 1;
    }
    void display(Node *p)
    {
        while (p != 0)
        {
            cout << p->data << " ";
            p = p->next;
        }
    }
};
int main()
{
    Linkedlist l;
    int A[] = {2, 3, 1, 5, 6, 7};
    l.create(A, 6);
    l.display(first);
    // cout << endl;
    // l.searching(first, A, 4);
    // l.sorted(first) ? cout << "no" : cout << "yes";
    l.sorting(first);

    return 0;
}
