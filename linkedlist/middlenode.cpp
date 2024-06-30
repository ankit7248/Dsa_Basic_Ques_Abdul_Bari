#include <bits\stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

Node *first = NULL;
class Linkedlist
{
public:
    void create(int A[], int index)
    {

        first = new Node;
        Node *t, *last;

        first->data = A[0];
        first->prev = first->next = NULL;
        last = first;

        for (int i = 1; i < index - 1; i++)
        {
            t = new Node;
            t->data = A[i];
            t->next = last->next;
            t->prev = last;
            last->next = t;
            last = t;
        }
    }
    void Display()
    {
        Node *p = first;

        while (p)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
    void middle(Node *p)
    {
        Node *q = NULL;
        q = first;
        while (q != 0)
        {
            q = q->next;
            if (q)
                p = p->next;
            if (q)
                q = q->next;
        }
        cout << p->data;
    }
};
int main()
{
    int A[] = {2, 3, 4, 5, 6};
    Linkedlist l;
    l.create(A, 6);
    l.Display();
    l.middle(first);
}