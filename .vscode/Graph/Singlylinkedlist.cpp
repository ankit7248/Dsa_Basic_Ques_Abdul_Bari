#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = NULL;

class linkedlist
{
public:
    node *create(int num)
    {
        node *newNode = new node;
        newNode->data = num;
        newNode->next = NULL;
        return newNode;
    }

    void insert_head(int num)
    {
        node *newNode = create(num);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void insert_tail(int num)
    {
        node *newNode = create(num);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            node *current;
            current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    void insert_mid(int num, int val)
    {
        node *newNode = create(num);
        node *current = head;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            while (current != NULL)
            {
                if (current->data == val)
                {
                    break;
                }
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }
    void print()
    {
        node *current = head;
        while (current != NULL)
        {
            cout << current->data << "->";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    int a;
    while (1)
    {
        cout << "Enter the choice" << endl;
        cout << "0. STOP" << endl;
        cout << "1. insert at head" << endl;
        cout << "2. insert at tail" << endl;
        cout << "3. insert at mid" << endl;
        cout << "4. print the list" << endl;
        cin >> a;
        switch (a)
        {
        case 0:
            cout << "stopped" << endl;
            exit(0);
        case 1:
            linkedlist obj;
            obj.insert_head(3);
            break;
        case 2:
            obj.insert_tail(10);
            break;
        case 3:
            obj.insert_mid(99, 10);
            break;
        case 4:
            obj.print();
            break;
        }
    }
}
