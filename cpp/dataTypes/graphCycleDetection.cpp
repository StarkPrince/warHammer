#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph
{
    int V;
    list<int> *l; // declarction of list

public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }

    void addEdge(int i, int j)
    {
        l[i].push_back(j);
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

    bool dfs(int node, vector<bool> &visited, int parent)
    {
        visited[node] = true;
        for (auto nbr : l[node])
        {
            if (!visited[nbr])
            {
                bool nbrFoundACycle = dfs(nbr, visited, node);
                if (nbrFoundACycle)
                    return true;
            }
            else if (nbr != parent)
                return true;
        }
        return false;
    }
    bool containsCycle()
    {
        vector<bool> visited(V, false);
        return dfs(0, visited, -1);
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n, m;
    cin >> n >> m;
    Graph g(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    if (g.containsCycle())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
}

// if the graph is directed

// #include <iostream>
// #include <vector>
// #include <list>
// #include <queue>
// using namespace std;

// class Graph
// {
//     int V;
//     list<int> *l; //declarction of list

// public:
//     Graph(int v)
//     {
//         V = v;
//         l = new list<int>[V];
//     }

//     void addEdge(int i, int j)
//     {
//         l[i].push_back(j);
//     }

//     void printAdjList()
//     {
//         for (int i = 0; i < V; i++)
//         {
//             cout << i << " -> ";
//             for (auto node : l[i])
//                 cout << node << ",";
//             cout << endl;
//         }
//     }

//     bool dfs(int node, vector<bool> &visited, int &callStack)
//     {
//         //return true if backedge is found
//         visited[node] = true;
//         stack[node] = true;
//         for (auto nbr : l[node])
//         {
//             if (stack[nbr])
//                 return true;
//             if (!visited[nbr])
//             {
//                 bool nbrFoundACycle = dfs(nbr, visited, callStack);
//                 if (nbrFoundACycle)
//                     return true;
//             }
//         }

//         //going back to the parent
//         stack[node] = false;
//     }
//     bool containsCycle()
//     {
//         vector<bool> visited(V, false);
//         vector<bool> callStack(V, false);

//         for (int i = 0; i < V; i++)
//         {
//             if (!visited[i])
//                 if (dfs(i, visited, callStack))
//                     return true;
//         }
//         return false;
//     }
// };

// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif // ONLINE_JUDGE
//     Graph g(7);
//     g.addEdge(0, 1);
//     g.addEdge(1, 2);
//     g.addEdge(2, 3);
//     g.addEdge(3, 5);
//     g.addEdge(5, 6);
//     g.addEdge(4, 5);
//     g.addEdge(0, 4);
//     g.addEdge(3, 4);
//     cout << g.containsCycle();
// }