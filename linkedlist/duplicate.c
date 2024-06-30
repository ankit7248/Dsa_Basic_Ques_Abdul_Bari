#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}
    *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *p;
    first = (struct Node *)malloc(sizeof(struct Node));
    for (int i = 0; i < n; i++)
    {
        first->data = A[i];
        first->next = NULL;
    }
}

void display(struct Node *p)
{
    while (p != 0)
    {
        printf("%d", p->data);
        p = p->next;
    }
}
void duplicate(struct Node *p)
{

    struct node *q = NULL;
    
    q = p->next;
    while (p != 0)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
            p->next = q->next;
        free(q);
        q = p->next;
    }
}
int main()
{
    int A[] = {3, 4, 5, 6, 7, 7, 8};
    create(A, 7);
    display(first);
    duplicate(first);
    display(first);
}