#include <iostream>
using namespace std;

class queue
{

public:
    int front;
    int rear;
    int size;
    int *q;

    void create(int size)
    {
        front = rear = -1;
        q = new int[size];
    }
    void insert(int x)
    {
        if (rear == size - 1)
        {
            cout << "overflow";
        }
        else
        {
            rear++;
            q[rear] = x;
        }
    }
    
    int Delete()

    {
        int d = -1;
        if (rear == front)
        {
            cout<<"underflow";
        }
        else
        {
            d = q[front+1]; 
            front++;
        }
        return d;
    }

    void display()
    {
      for (int i = front + 1 ; i <  rear; i++)
      {
        cout<<q[i]<<endl;
      }
      
    }
};

int main()
{
    queue q;

    q.create(5);

    q.insert(3);
    q.insert(5);
    q.insert(3);
    q.Delete();
    q.display();

}