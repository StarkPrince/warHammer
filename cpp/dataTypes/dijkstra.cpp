#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <climits>
#include <set>
using namespace std;

class Graph
{
    int V;
    list<pair<int, int>> *l; //declarction of list

public:
    Graph(int v)
    {
        V = v;
        l = new list<pair<int, int>>[V];
    }

    void addEdge(int u, int v, int wt, bool undir = true)
    {
        l[u].push_back({wt, v});
        if (undir)
            l[v].push_back({wt, u});
    }

    int dijkstra(int src, int dest)
    {
        vector<int> dist(V, INT_MAX);
        set<pair<int, int>> s;
        dist[src] = 0;
        s.insert(make_pair(dist[src], src));
        while (!s.empty())
        {
            auto it = s.begin();
            int node = it->second;
            s.erase(it);

            for (auto nbrPair : l[node])
            {
                int nbr = nbrPair.second;
                int currEdge = nbrPair.first;
                if (dist[nbr] > dist[node] + currEdge)
                {
                    auto f = s.find(make_pair(dist[nbr], nbr));
                    if (f != s.end())
                        s.erase(f);

                    dist[nbr] = dist[node] + currEdge;
                    s.insert({dist[nbr], nbr});
                }
            }
        }
        for (int i = 0; i < V; i++)
            cout << i << " " << dist[i] << endl;
        return dist[dest];
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    Graph g(5);
    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 2);
    g.addEdge(0, 2, 4);
    g.addEdge(0, 3, 7);
    g.addEdge(3, 2, 2);
    g.addEdge(3, 4, 3);
    g.dijkstra(0, 4);
}