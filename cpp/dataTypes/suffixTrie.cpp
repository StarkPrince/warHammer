#include <iostream>
#include <unordered_map>
using namespace std;

class Node
{
public:
    char data;
    bool isEnd;
    unordered_map<char, Node *> children;
    Node(char d)
    {
        data = d;
        isEnd = false;
    }
};

class Trie
{
public:
    Node *root;
    Trie()
    {
        root = new Node('\0');
    }
    void insert(string str)
    {
        Node *temp = root;
        for (char ch : str)
        {
            if (temp->children.count(ch) == 0)
            {
                Node *n = new Node(ch);
                temp->children[ch] = n;
            }
            temp = temp->children[ch];
        }
        temp->isEnd = true;
    }

    bool search(string str)
    {
        Node *temp = root;
        for (char ch : str)
        {
            if (temp->children.count(ch) == 0)
                return false;
            temp = temp->children[ch];
        }
        return temp->isEnd;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string words[] = {"the", "a", "there", "anaswe", "any", "by", "their"};
    Trie trie;
    for (string word : words)
        trie.insert(word);
    string str;
    cin >> str;
    cout << trie.search(str) << endl;
}