#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;

class Graph
{
    list<int> *l;
    int V;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V + 1];
    }
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
};

int minTrioDegree(int n, vector<vector<int>> &edges)
{
    Graph g(n);
    for (auto &e : edges)
        g.addEdge(e[0], e[1]);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        cin >> v[i][0] >> v[i][1];
    cout << minTrioDegree(n, v);
}