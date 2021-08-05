#include <bits/stdc++.h>
#include <queue>
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

node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
        return NULL;
    node *n = new node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

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

node *buildLevelOrder()
{
    int n;
    cin >> n;
    node *root = new node(n);
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *curr = q.front();
        q.pop();

        int c1, c2;
        cin >> c1 >> c2;
        if (c1 != -1)
        {
            curr->left = new node(c1);
            q.push(curr->left);
        }
        if (c2 != -1)
        {
            curr->right = new node(c2);
            q.push(curr->right);
        }
    }
    return root;
}

int height(node *root)
{
    if (root == NULL)
        return 0;
    return max(height(root->left), height(root->right)) + 1;
}

int diameter(node *root)
{
    if (root == NULL)
        return 0;
    int D1 = height(root->left) + height(root->right);
    int D2 = diameter(root->left);
    int D3 = diameter(root->right);
    return max(D1, max(D2, D3));
}
class HDPair
{
public:
    int height;
    int diameter;
};

HDPair findHeightAndDiameter(node *root)
{
    HDPair p;
    if (root == NULL)
    {
        p.height = p.diameter = 0;
        return p;
    }
    HDPair left = findHeightAndDiameter(root->left);
    HDPair right = findHeightAndDiameter(root->right);
    p.height = max(left.height, right.height) + 1;
    p.diameter = max(left.height + right.height, max(left.diameter, right.diameter));
    return p;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    node *root = buildLevelOrder();
    // cout << "Diameter of the tree is " << diameter(root) << endl;
    cout << "Diameter of the tree is " << findHeightAndDiameter(root).diameter << endl;
}
