#include <bits/stdc++.h>
using namespace std;

class disjointSet
{
    vector<int> rank, parent, size;

public:
    disjointSet(int n)
    {
        rank.resize(n + 1, 0);
        size.resize(n + 1, 1);
        parent.resize(n + 1); // assign value from 1 to n in parent
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
            // size[i] = 1;
        }
    }
    int findpar(int node) // path compression
    {
        if (node == parent[node])
        {
            return node;
        }
        return parent[node] = findpar(parent[node]);
    }

    void unionbyRank(int u, int v)
    {
        int ulp_u = findpar(u);
        int ulp_v = findpar(v);

        if (ulp_u == ulp_v) // if both parent is same return
        {
            return;
        }
        else if (rank[ulp_u] < rank[ulp_v]) // rank is less
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_u] > rank[ulp_v])
        {
            parent[ulp_v] = ulp_u;
        }
        else // if rank is same -> connectt any node to other node
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionbySize(int u, int v)
    {
        int ulp_u = findpar(u);
        int ulp_v = findpar(v);
        if (ulp_u == ulp_v) // if both parent is same return
        {
            return;
        }
        else if (size[ulp_u] < size[ulp_v]) // rank is less
        {
            parent[ulp_u] = ulp_v;
            size[ulp_u] += size[ulp_v];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

int main()
{

    // disjointSet ds(7);    // 7 size of rank and parent size of vector
    // ds.unionbyRank(1, 2); // call dsu
    // ds.unionbyRank(2, 3);
    // ds.unionbyRank(4, 5);
    // ds.unionbyRank(6, 7);
    // ds.unionbyRank(5, 6);

    // if (ds.findpar(3) == ds.findpar(7)) // first -> connecting all nodes to each other and give one single parent for all nodes
    // {
    //     cout << "same" << endl;
    // }
    // else
    // {
    //     cout << "n0 same" << endl;
    // }

    // ds.unionbyRank(3, 7);               // Second -> check both node it's parent connected or not or same or not
    // if (ds.findpar(2) == ds.findpar(6)) // return parent if it's same the return
    // {
    //     cout << "same" << endl;
    // }
    // else
    // {
    //     cout << "n0 same" << endl; // if parent is not same then return not same
    // }

    disjointSet ds(7);    // 7 size of rank and parent size of vector
    ds.unionbySize(1, 2); // call dsu
    ds.unionbySize(2, 3);
    ds.unionbySize(4, 5);
    ds.unionbySize(6, 7);
    ds.unionbySize(5, 6);

    if (ds.findpar(3) == ds.findpar(7)) // first -> connecting all nodes to each other and give one single parent for all nodes
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "n0 same" << endl;
    }

    ds.unionbySize(3, 7);               // Second -> check both node it's parent connected or not or same or not
    if (ds.findpar(3) == ds.findpar(7)) // return parent if it's same the return
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "n0 same" << endl; // if parent is not same then return not same
    }

    return 0;
}