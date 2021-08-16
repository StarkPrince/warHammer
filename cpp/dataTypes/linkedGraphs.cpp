#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
using namespace std;

class Node
{
public:
    string name;
    list<string> nbrs;
    Node(string name)
    {
        this->name = name;
    }
};

class Graph
{
    unordered_map<string, Node *> m;

public:
    Graph(vector<string> cities)
    {
        for (auto city : cities)
            m[city] = new Node(city);
    }
    void addEdge(string city1, string city2, bool isUnDir = false)
    {
        m[city1]->nbrs.push_back(city2);
        if (isUnDir)
            m[city2]->nbrs.push_back(city1);
    }
    void printAdjList()
    {
        for (auto cityPair : m)
        {
            cout << cityPair.first << " -> ";
            Node *node = cityPair.second;
            for (auto nbr : node->nbrs)
                cout << nbr << ",";
            cout << endl;
        }
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    vector<string> cities = {"A", "B", "C", "D", "E", "F"};
    Graph g(cities);
    g.addEdge("A", "B");
    g.addEdge("A", "C");
    g.addEdge("B", "D");
    g.addEdge("C", "D");
    g.addEdge("C", "E");
    g.printAdjList();
}