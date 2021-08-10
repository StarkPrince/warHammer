#include <bits/stdc++.h>
#include <queue>
#include <map>
#include <vector>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        if (temp == NULL)
        {
            cout << endl;
            q.pop();
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            q.pop();
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
    return;
}

void printAtLevelK(node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }
    printAtLevelK(root->left, k - 1);
    printAtLevelK(root->right, k - 1);
    return;
}

int printNodesAtDistanceK(node *root, node *target, int k)
{
    if (root == NULL)
        return -1;
    if (root == target)
    {
        printAtLevelK(target, k);
        return 0;
    }
    int left = printNodesAtDistanceK(root->left, target, k);
    if (left != -1)
    {
        if (left == k - 1)
            cout << root->data << " ";
        else
            printAtLevelK(root->right, k - 2 - left);
        return 1 + left;
    }
    int right = printNodesAtDistanceK(root->right, target, k);
    if (right != -1)
    {
        if (right == k - 1)
            cout << root->data << " ";
        else
            printAtLevelK(root->left, k - 2 - right);
        return 1 + right;
    }
    return -1;
}

void traverseTree(node *root, int d, map<int, vector<int>> &m)
{
    if (root == NULL)
        return;
    m[d].push_back(root->data);
    traverseTree(root->left, d - 1, m);
    traverseTree(root->right, d + 1, m);
}

voidVerticalOrderPrint(node *root)
{
    map<int, vector<int>> m;
    int d = 0;
    traverseTree(root, d, m);

    for (auto p : m)
    {
        int key = p.first;
        vector<int> v = p.second;
        cout << key << ": ";
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(8);
    root->right->left->right = new node(9);
    root->right->right->right = new node(10);

    node *target = root->left->right;
    int k = 2;
    voidVerticalOrderPrint(root);
}
