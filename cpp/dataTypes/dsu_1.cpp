#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph
{
    int V;
    list<pair<int, int>> l;

public:
    Graph(int V)
    {
        this->V = V;
    }
    void addEdge(int v, int w)
    {
        l.push_back(make_pair(v, w));
    }
    //find function
    int findSet(int i, int parent[])
    {
        if (parent[i] == -1)
            return i;
        return findSet(parent[i], parent);
    }
    //union function
    void unionSet(int x, int y, int parent[])
    {
        int xset = findSet(x, parent);
        int yset = findSet(y, parent);
        if (xset != yset)
            parent[yset] = xset;
    }

    bool containsCycle()
    {
        int *parent = new int[V];
        for (int i = 0; i < V; i++)
        {
            parent[i] = -1;
        }
        for (auto i : l)
        {
            int xset = findSet(i.first, parent);
            int yset = findSet(i.second, parent);
            if (xset != yset)
                unionSet(xset, yset, parent);
            else
                return true;
        }
        return false;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}