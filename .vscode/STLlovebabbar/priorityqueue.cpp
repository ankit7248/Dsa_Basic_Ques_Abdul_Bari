#include <iostream>

using namespace std;
#include <queue>

int main()
{
    priority_queue<int> maxe;

    priority_queue<int, vector<int>, greater<int>> mini;

    maxe.push(1);
    maxe.push(2);
    maxe.push(3);
    maxe.push(5);
    maxe.push(4);

    cout << "size ->" << maxe.size() << endl;
    int n = maxe.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxe.top() << " ";
        maxe.pop();
    }
    cout << endl;

    cout << "size ->" << maxe.size() << endl;

    cout << "mini elements " << endl;
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(5);
    mini.push(4);

    cout << "size ->" << mini.size() << endl;
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "khali ha kya bhai -> " << mini.empty() << endl;
}