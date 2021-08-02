#include <iostream>
#include <algorithm>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insertAtHead(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    node *n = new node(data);
    n->next = head;
    head = n;
}

node *recReverse(node *head)
{
    if (head == NULL or head->next == NULL)
        return head;
    node *sHead = recReverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return sHead;
}

node *recIterative(node *head)
{
    node *prev = NULL;
    node *curr = head;
    node *temp;

    while (curr)
    {
        temp = curr->next;
        curr->next = prev;

        prev = curr;
        curr = temp;
    }
    return prev;
}

void insertInMidle(node *&head, int data, int pos)
{
    if (pos == 0)
        insertAtHead(head, data);
    else
    {
        node *temp = head;
        for (int jump = 0; jump < pos - 1; jump++)
            temp = temp->next;
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void printLinkedList(node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
    return;
}

node *kreverse(node *head, int k)
{
    if (head == NULL)
        return head;
    node *prev = NULL;
    node *curr = head;
    node *temp;
    int count = 0;
    while (curr and count < k)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        count++;
    }
    if (temp)
        head->next = kreverse(temp, k);
    return prev;
}

node *merge2Lists(node *a, node *b)
{
    //base case
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    //recursively case
    node *c;
    if (a->data <= b->data)
    {
        c = a;
        c->next = merge2Lists(a->next, b);
    }
    else
    {
        c = b;
        c->next = merge2Lists(a, b->next);
    }
    return c;
}
node *midPoint(node *head)
{
    node *slow = head;
    node *fast = head->next;
    while (fast != NULL || fast->next != NULL)
        return slow;
}

node *mergesort(node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    node *mid = midPoint(head);

    node *a = head;
    node *b = mid->next;
    mid->next = NULL;

    a = mergesort(a);
    b = mergesort(b);
    return merge2Lists(a, b);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    node *a = NULL;

    insertAtHead(a, 6);
    insertAtHead(a, 10);
    insertAtHead(a, 2);
    insertAtHead(a, 4);
    insertAtHead(a, 1);
    insertAtHead(a, 8);
    printLinkedList(a);
    printLinkedList(mergesort(a));
}