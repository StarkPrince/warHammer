#include <iostream>
#include <string>
#include <vector>
using namespace std;

class node
{
public:
    node *left;
    node *right;
};

class trie
{
    node *root;

public:
    trie()
    {
        root = new node();
    }

    void insert(int n)
    {
        node *temp = root;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (n >> i) & 1;
            if (bit == 0)
            {
                if (!temp->left)
                    temp->left = new node();
                temp = temp->left;
            }
            else
            {
                if (!temp->right)
                    temp->right = new node();
                temp = temp->right;
            }
        }
    }
    int max_xor_helper(int value)
    {
        int ans = 0;
        node *temp = root;
        for (int j = 31; j >= 0; j--)
        {
            int bit = (value >> j) & 1;
            if (bit == 0)
            {
                if (temp->right != NULL)
                {
                    temp = temp->right;
                    ans += (1 << j);
                }
                else
                    temp = temp->left;
            }
            else
            {
                if (temp->left != NULL)
                {
                    temp = temp->left;
                    ans += (1 << j);
                }
                else
                    temp = temp->right;
            }
        }
        return ans;
    }
    int max_xor(int *input, int n)
    {
        int max_xor = 0;
        for (int i = 0; i < n; i++)
        {
            int value = input[i];
            insert(value);
            int current_xor = max_xor_helper(value);
            max_xor = max(max_xor, current_xor);
        }
        return max_xor;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n[] = {3, 10, 5, 25, 9, 2};
    int p = sizeof(n) / sizeof(int);
    trie T;
    cout << T.max_xor(n, p) << endl;
}
