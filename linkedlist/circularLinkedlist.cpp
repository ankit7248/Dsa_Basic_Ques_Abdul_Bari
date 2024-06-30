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
    void create(int A[], int x)
    {
        Node *p, *t;
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
    void circular(Node *p)
    {
        do
        {
            cout << p->data << " ";
            p = p->next;
        } while (p != first);
        circular(first);
    }
    void display(Node *p)
    {
        while (p != 0)
        {
            cout << p->data << " ";

            p = p->next;
        }
        cout << endl;
    }
};
int main()
{
    Linkedlist l;
    int A[] = {2, 3, 1, 5, 6, 7};
    l.create(A, 6);
    l.display(first);
    l.circular(first);
}