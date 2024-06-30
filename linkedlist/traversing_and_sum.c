#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// int main()
// {

//     int *p;
//     while
// }

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
// void reverse(struct Node *p)  //sliding poniter
// {
//     struct Node *r = NULL;
//     struct Node *q = NULL;

//     while (p != 0)
//     {
//         r = q;
//         q = p;
//         p = p->next;
//         q->next = r;
//     }
//     first = q;

// }

// void concatenating(struct Node *p)
// {
//     second
//     while (p->next!=0)
//     {
//         p=p->next;
//     }

// }
// void reverse1(struct Node *p, struct Node *q)   // recursive reverse
// {
//     if (p != 0)
//     {
//         reverse1(p->next, p);
//         p->next = q;
//     }
//     else
//     {
//         first = q;
//     }
// }
// void RDisplay(struct Node *p)
// {
//     if (p != NULL)
//     {
//         RDisplay(p->next);
//         printf("%d ", p->data);
//     }
// }
int count(struct Node *p)
{
    if (p != 0)
    {
        return count(p->next) + 1;
    }
}
// int sum(struct Node *p)
// {
//     if (p == 0)
//         return 0;
//     else
//     {
//         return sum(p->next) + p->data;
//     }
// }
// int max(struct Node *p)
// {
//     int x;
//     if (p != 0)
//     {
//         x = max(p->next);
//         if (x > p->data)
//         {
//             return x;
//         }
//         else
//             return p->data;
//     }
//     else
//         return -34213212;
// }

void duplicate(struct Node *p)
{
    struct Node *q;
    q = first->next;
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

// int search(struct Node *p, int key)
// {
//     if (p == 0)
//     {
//         return 0;
//     }
//     else if (p->data == key)
//     {
//         printf("key founded: ", p->data);
//         return p->data;
//     }

//     return search(p->next, key);
// }
// int sorted(struct Node *last)
// {
//     int x = -3421;
//     // struct Node *last = first;
//     while (last != NULL)
//     {
//         if (last->data < x)
//         {
//             return 0;
//         }

//         x = last->data;
//         last = last->next;
//     }
//     return 1;
// }
// void insert(struct Node *p, int index, int x)
// {
//     struct Node *t;
//     int i;

//     if (index < 0 || index > count(p))
//         return;
//     t = (struct Node *)malloc(sizeof(struct Node));
//     t->data = x;
//     t->next = NULL;

//     if (index == 0)
//     {
//         t->next = first;
//         first = t;
//     }
//     else
//     {
//         for (i = 0; i < index - 1; i++)
//             p = p->next;
//         t->next = p->next;
//         p->next = t;
//     }
// }
int Delete(struct Node *p, int index)
{
    struct Node *q = NULL;
    int x = -1, i;

    if (index < 1 || index > count(p))
        return -1;
    if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else
    {
        for (i = 1; i < index; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        // free(p);
        return x;
    }
}
void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

// int search(struct Node *p, int key)
// {
//     struct node *q = NULL;
//     while (p != 0)
//     {
//         if (p->data == key)
//         {
//             q->next = p->next;

//         }
//     }

//     return search(p->next, key);
// }

int main()
{
    struct Node *p;
    int A[] = {3, 5, 7, 7, 11, 15, 32, 43};
    create(A, 8);
    Display(first);
    printf("\n");

    // // reverse(first);
    // // display(first);
    // // printf("\n");

    // reverse1(first, NULL);
    // display(first);
    // printf("\n");

    // printf("%d \n\n", sum(first));
    // printf("%d \n\n", count(first));

    // printf("%d \n\n", max(first));

    // duplicate(first);
    // Display(first);

    // printf("%d \n\n", search(first, 32));
    // insert(first, 0, 7);
    // display(first);
    Delete(first, 5);
    printf("\n\n");
    display(first);
    printf("\n\n");

    // printf("%d \n\n", sorted(first));
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void linkedListTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element: %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     // Allocate memory for nodes in the linked list in Heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     // Link first and second nodes
//     head->data = 7;
//     head->next = second;

//     // Link second and third nodes
//     second->data = 11;
//     second->next = third;

//     // Link third and fourth nodes
//     third->data = 41;
//     third->next = fourth;

//     // Terminate the list at the third node
//     fourth->data = 66;
//     fourth->next = NULL;

//     linkedListTraversal(head);
//     return 0;
// }
