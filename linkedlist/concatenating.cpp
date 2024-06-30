#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
}
    *first = NULL;
Node *second = NULL;
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

    
    void create1(int B[], int x)
    {
        Node *q, *m;
        second = new Node;
        second->data = B[0];
        second->next = NULL;
        q = second;

        for (int j = 1; j < x; j++)
        {
            m = new Node;
            m->data = B[j];
            m->next = NULL;
            q->next = m;
            q = m;
        }
    }
    void concate(Node *p,Node *q)
    {
        while (p!=0)
        {
            p=p->next;
        }
        p->next=second;   
    }
      void display1(Node *p)
    {
        while (p != 0)
        {
            cout << p->data << " ";

            p = p->next;
        }
    }
      void display2(Node *q)
    {
        while (q != 0)
        {
            cout << q->data << " ";

            q = q->next;
        }
    }
};
int main()
{
    Linkedlist l;
    int A[] = {2, 3, 1, 5, 6, 7};
    int B[] = {2, 3, 1, 5, 6, 7};
    l.create(A, 6);
    l.create1(B, 6);
    l.display1(first);
    l.display2(second);
    l.concate(first,second);
}
    
