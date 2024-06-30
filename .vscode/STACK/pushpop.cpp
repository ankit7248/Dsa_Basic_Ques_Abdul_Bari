#include <iostream>
using namespace std;

class stack
{
private:
    int size;
    int top;
    int *s;

public:
    void create(int size)
    {
        this->size = size;
        s = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (top == size - 1)
        {
            cout << "overflow" << endl;
        }
        top++;
        s[top] = element;
    }
    int pop()
    {
        int x;
        if (top == -1)
        {
            cout << "underflow" << endl;
        }
        else
        {
            top--;
            x = s[top];
        }
        return x;
    }

    void display()
    {
        for (int i = 0; i < size - 1; i++)
        {
            cout << s[i] << endl;
        }
    }
};

int main()
{
    stack s;

    s.create(5);

    s.push(3);
    s.push(7);
    s.push(2);
    s.pop();
    s.display();

    // cout << s.peek();
    // s.pop();
    // cout << s.peek();
}
