#include <iostream>
#include <cmath>
#include <math.h>
#include <string.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
}
