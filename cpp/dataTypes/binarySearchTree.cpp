#include <iostream>
#include <string>
#include <limits.h>
using namespace std;

class Node
{
public:
    int key;
    Node *left;
    Node *right;

    Node(int k)
    {
        key = k;
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
    else if (key > root->key)
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

bool search(Node *root, int key)
{
    if (root == NULL)
        return false;
    if (root->key == key)
        return true;
    if (key < root->key)
        return search(root->left, key);
    else
        return search(root->right, key);
}

Node *sortedArrayToBST(int arr[], int start, int end)
{
    if (start > end)
        return NULL;
    int mid = (start + end) / 2;
    Node *root = new Node(arr[mid]);
    root->left = sortedArrayToBST(arr, start, mid - 1);
    root->right = sortedArrayToBST(arr, mid + 1, end);
    return root;
}

int closestValue(Node *root, int target)
{
    int closest;
    int diff = INT_MAX;
    while (root != NULL)
    {
        int current_diff = abs(root->key - target);
        if (current_diff == diff)
            return root->key;
        if (current_diff < diff)
        {
            diff = current_diff;
            closest = root->key;
        }
        if (target < root->key)
            root = root->left;
        else
            root = root->right;
    }
    return closest;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    Node *root = NULL;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    root = sortedArrayToBST(arr, 0, 9);
    cout << closestValue(root, 15) << endl;
}