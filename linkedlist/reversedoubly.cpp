#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
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
        first->prev = first->next = NULL;
        p = first;

        for (int i = 1; i < x; i++)
        {
            t = new Node;
            t->data = A[i];
            t->next = p->next;
            t->prev = p;
            p = t;
        }
    }
    void reverse(Node *p)
    {
        Node * temp;

        while (p != 0)
        {
            p = p->next;
            temp = p->next;
            p->next = p->prev;
            p->prev=temp;
            p=p->prev;
        }
        if (p->next = NULL || p!=NULL)
        {
            first =p;
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
};
int main()
{
    int A[] = {2, 3, 4, 5, 6, 7};
    Linkedlist l;
    l.create(A, 7);
    l.Display();
    l.reverse(first);
}