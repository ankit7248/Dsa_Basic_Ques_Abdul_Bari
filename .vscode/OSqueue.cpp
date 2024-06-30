#include <iostream>
using namespace std;
class circularqueue
{
public:
    int size;
    int first;
    int last;
    char *arr;

    circularqueue(int size)
    {
        this->size = size;
        arr = new char[size];
        first = -1;
        last = 0;
    }
    void enqueue(char val)
    {
        if ((last + 1) % size == first)
        {
            cout << "Full" << endl;
        }
        else
        {
            last = (last + 1) % size;
            arr[last] = val;
        }
    }
    char dequeue()
    {
        char x;
        if (first == last)
        {
            cout << "Empty" << endl;
        }
        else
        {
            first = (first + 1) % size;
            x = arr[first];
        }
        return x;
    }
};
int main()
{
    int n;
    cout << "Enter the size of frame" << endl;
    cin >> n;
    circularqueue frame(n);
    string pages = "021640103121";
    for (int i = 0; i < n; i++)
    {
        frame.enqueue(pages[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << frame.arr[i] << " ";
    }
    cout << endl;
    for (int i = n; i < pages.size(); i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (frame.arr[j] == pages[i])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            frame.dequeue();
            frame.enqueue(pages[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << frame.arr[i] << " ";
        }
        cout << endl;
    }
    
}
