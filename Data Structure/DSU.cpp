#include <bits/stdc++.h>
using namespace std;


struct DSU {
    vector<int>parent, sizes;
    void init(int n)
    {
        parent.resize(n + 2);
        sizes.resize(n + 2);
        for (int i = 1; i <= n; i++)
        {
            parent[i] = i;
            sizes[i] = 1;
        }
    }

    int Leader(int u)
    {
        if (parent[u] == u)
            return u;
        return parent[u] = Leader(parent[u]);
    }
    int merge(int u, int v)
    {
        int leader_u = Leader(u);
        int leader_v = Leader(v);

        if (leader_u == leader_v)
            return 0;

        if (sizes[leader_u] > sizes[leader_v])
            swap(leader_u, leader_v);

        parent[leader_u] = leader_v;
        sizes[leader_v] += sizes[leader_u];

        return 1;
    }
};