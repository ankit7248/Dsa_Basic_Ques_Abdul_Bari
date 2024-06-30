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
    void recursion(Node *p, Node *q)
    {
        if (p != NULL)
        {
            recursion(p->next, p);
            p->next = q;
        }
        else
            first = q;
    }
    void insertion(int x, int index)
    {
        Node *q;
        q = new Node;
        Node *p = first;
        if (index != 0)
        {
            int i = 0;
            while (i < index - 1)
            {
                i++;

                q->data = x;
                p = p->next;
                q->prev = p;
                q->next = p->next;
                if (p->next)
                
                {
                    p->next->prev = q;
                    p->next = q;
                    return;
                }
                else
                    return;
            }
        }
        else
        {
            q->data = x;
            q->prev = NULL;

            q->next = first;
            first->prev = q;
            first = q;
        }
    }
};

int main()
{
    int A[] = {2, 3, 4, 5, 6, 7};
    Linkedlist l;
    l.create(A, 7);
    l.Display();
    //l.insertion(7, 0);
    
    // l.recursion(first, first->prev);
    // l.Display();
}
