#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

class Tree(Node *root){
    public :
        void printTopView(Node * root){
            vector<int> ans;
Node *temp = root;
while (root)
{
    ans.push_back(root->data);
    if (root->left)
        root = root->left;
    else
        root = root->right;
}
reverse(ans.begin(), ans.end());
root = temp->right;
while (root)
{
    ans.push_back(root->data);
    if (root->right)
        root = root->right;
    else
        root = root->left;
}
return ans;
}
}
;

vector<int> topView(Node *root)
{
    vector<int> ans;
    Node *cp = root;
    stack<int> st;
    while (cp->left)
    {
        st.push(cp->data);
        cp = cp->left;
    }
    st.push(cp->data);
    while (!st.empty())
    {
        ans.push_back(st.top());
    }
    while (cp->right)
    {
        ans.push_back(cp->right->data);
    }
    return ans;
}
