#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int N;
        cin >> N;
        int M;
        cin >> M;
        set<int> n;
        set<int> m;

        for (int i = 0; i < N; i++) // Olog(n)
        {
            int candiesN;
            cin >> candiesN;
            n.insert(candiesN);
        }

        for (int i = 0; i < M; i++) // Olog(n)
        {
            int candiesM;
            cin >> candiesM;
            m.insert(candiesM);
        }
    }
    return 0;
}