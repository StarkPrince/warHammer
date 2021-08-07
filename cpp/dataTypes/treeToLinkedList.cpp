#include <iostream>
using namespace std;

class Node
{
public:
    int key;
    Node *left;
    Node *right;

    Node(int key)
    {
        this->key = key;
        left = NULL;
        right = NULL;
    }
};

Node *insert(Node *root, int key)
{
    if (root == NULL)
        return new Node(key);
    if (key < root->key)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);
    return root;
}

void printInOrder(Node *root)
{
    if (root == NULL)
        return;
    printInOrder(root->left);
    cout << root->key << " ";
    printInOrder(root->right);
}

class LinkedList
{
public:
    Node *head;
    Node *tail;
};

LinkedList tree2LL(Node *root)
{
    LinkedList l;
    if (root == NULL)
    {
        l.head = l.tail = NULL;
        return l;
    }
    if (root->left == NULL && root->right == NULL)
        l.head = l.tail = root;
    else if (root->right == NULL)
    {
        LinkedList leftLL = tree2LL(root->left);
        leftLL.tail->right = root;
        l.head = leftLL.head;
        l.tail = root;
    }
    else if (root->left == NULL)
    {
        LinkedList rightLL = tree2LL(root->right);
        root->right = rightLL.head;
        l.head = root;
        l.tail = rightLL.tail;
    }
    else
    {
        LinkedList leftLL = tree2LL(root->left);
        LinkedList rightLL = tree2LL(root->right);
        leftLL.tail->right = root;
        root->right = rightLL.head;
        l.head = leftLL.head;
        l.tail = rightLL.tail;
    }
    return l;
}

Node *nextInOrderSuccessor(Node *root, Node *target)
{
    if (target->right != NULL)
    {
        Node *temp = target->right;
        while (temp->left)
            temp = temp->left;
        return temp;
    }

    Node *temp = root;
    Node *succ = NULL;
    while (temp)
    {
        if (temp->key > target->key)
        {
            succ = temp;
            temp = temp->left;
        }
        else if (temp->key < target->key)
            temp = temp->right;
        else
            break;
    }
    return succ;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    Node *root = NULL;
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    for (int i : arr)
        root = insert(root, i);
    Node *t1 = root->left->right->right;
    Node *t2 = root->right;

    cout << "Next in order successor of " << t1->key << " is " << nextInOrderSuccessor(root, t1)->key << endl;
    cout << "Next in order successor of " << t2->key << " is " << nextInOrderSuccessor(root, t2)->key << endl;
}