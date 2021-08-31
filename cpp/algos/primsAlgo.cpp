//Prim's Algorithms
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
using namespace std;

class Graph
{
    int V;
    vector<pair<int, int>> *adj;

public:
    Graph(int V)
    {
        this->V = V;
        adj = new vector<pair<int, int>>[V];
    }

    void addEdge(int u, int v, int w)
    {
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    int primsMST()
    {
        //initialise a min heap
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        //initialise a visited array
        bool *visited = new bool[V];
        int ans = 0;
        pq.push(make_pair(0, 0));
        while (!pq.empty())
        {
            auto best = pq.top();w
            pq.pop();

            int to = best.second;
            int wt = best.first;

            if (visited[to])
                continue;
            visited[to] = true;
            ans += wt;

            for (auto it : adj[to])
                if (!visited[it.first])
                    pq.push(make_pair(it.second, it.first));
        }
        return ans;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
}