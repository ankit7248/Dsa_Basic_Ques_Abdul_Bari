#include <iostream>
using namespace std;

#include <stdio.h>
#include <stdlib.h>

class Node
{
public:
    int data;
    Node *next;
};
Node *first = NULL;

class linkedlist
{
public:
    void create(int a[], int n)
    {

        Node *p = first;
        first = new Node;
        first->data = a[0];
        first->next = NULL;

        for (int i = 0; i < n - 1; i++)
        {
            Node *t = new Node;
            t->data = a[i];
            t->next = NULL;
            p->next = t;
            p = t;
        }
    }
    void display(Node *p)
    {
        Node *p = first;
        while (p != NULL)
        {
            p = p->next;
            p->data;
        }
    }
};
