#include <bits/stdc++.h>
using namespace std;

class Node
{
private:

    int data;
    Node *lchild;
    Node *rchild;

};
int data;

Node *root = NULL;

Node ::Insert(int key)
{
    Node *t = root;
    Node *r = NULL, *p;

    if (root == NULL)
    {
       
        p = new node;
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;

    }

        while (t != NULL)
        {
            r = t;
            if (key == t->data)
            {
                return;
            }
            else if (key > t->data)
            {
                t = t->lchild;
            }
            else
            {
                t = t->rchild;
            }
        }

    p = new node;
    p->data = key;
    p->lchild = p->rchild = NULL;
    if (p->data < r->data)
    {
        r->lchild = p;
    }
    r->rchild = p;
    
}

