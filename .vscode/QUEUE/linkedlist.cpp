#include <iostream>
using namespace std;

class Node
{
public:
   Node *next;
   int data;
   Node *front = NULL, *rear = NULL;

   void enqueue(int x)
   {
      Node *p;
      p = new Node;
      if (p == 0)
      {
         cout << "queue is full";
      }
      p->data = x;
      p->next = NULL;
      if (front == NULL)
      {
         front = rear = p;
      }
      else
         rear->next = p;
      rear = p;
   }
   int dequeue()
   {
      int x = -1;
      Node *p;
      if (front == NULL)
      {
         cout << "queue is empty";
      }
      else
         p = front;
      front = front->next;
      x = p->data;
      free(p);
      return x;
   }
   void display()
   {
      Node *p = front;
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
   Node n;
   n.enqueue(23);
   n.enqueue(67);
   n.enqueue(8);
   n.enqueue(2);

   n.dequeue();

   n.display();
}



