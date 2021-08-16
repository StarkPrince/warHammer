#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

//single sources shortest path for undirected graph with equal edge weights
class Graph
{
    int V;
    list<int> *l; //declarction of list

public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }

    void addEdge(int i, int j, bool isundir = true)
    {
        l[i].push_back(j);
        if (isundir)
            l[j].push_back(i);
    }

    void printAdjList()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << " -> ";
            for (auto node : l[i])
                cout << node << ",";
            cout << endl;
        }
    }
    void bfs(int source, int dest = -1)
    {
        queue<int> q;
        bool *visited = new bool[V]{0};
        int *dist = new int[V]{0};
        int *parent = new int[V]{-1};

        q.push(source);
        visited[source] = true;
        dist[source] = 0;
        parent[source] = source;

        while (!q.empty())
        {
            int u = q.front();
            // cout << u << " ";
            for (auto nbr : l[u])
                if (!visited[nbr])
                {
                    q.push(nbr);
                    parent[nbr] = u;
                    dist[nbr] = dist[u] + 1;
                    visited[nbr] = true;
                }
            q.pop();
        }

        // for (int i = 0; i < V; i++)
        //     cout << "shortest distance of " << i << " is " << dist[i] << endl;

        if (dest != -1)
        {
            int temp = dest;
            while (temp != source)
            {
                cout << temp << "->";
                temp = parent[temp];
            }
            cout << source << endl;
        }
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(4, 5);
    g.addEdge(0, 4);
    g.addEdge(3, 4);
    g.bfs(1, 6);
}