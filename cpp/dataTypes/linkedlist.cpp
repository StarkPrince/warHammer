#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <list>
#include <map>
#include <set>
#include <iterator>
#include <tuple>
using namespace std;
typedef long long ll;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void deletion(node *head, int val)
{
    node *temp = head;
    while (temp->next->data != val)
        temp = temp->next;
    node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
void makecycle(node *&head, int pos)
{
    node *temp = head;
    node *startNode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
            startNode = temp;
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}
void removecycle(node *&head)
{
    node *tort = head->next;
    node *hare = head->next->next;
    while (hare != NULL && hare->next != NULL && tort != hare)
    {
        tort = tort->next;
        hare = hare->next->next;
    }
    if (hare == tort)
    {
        hare = head;
        while (tort->next != hare->next)
        {
            tort = tort->next;
            hare = hare->next;
        }
        tort->next = NULL;
    }
}
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}
bool cyclefinder(node *&head)
{
    node *tort = head, *hare = head;
    while (hare && hare->next && tort)
    {
        tort = tort->next;
        hare = hare->next->next;
        if (hare == tort)
            return true;
    }
    return false;
}
node *reversek(node *&head, int k)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nxtptr;
    int count = 0;
    while (currptr != NULL && count < k)
    {
        nxtptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nxtptr;
        count++;
    }
    if (nxtptr != NULL)
        head->next = reversek(nxtptr, k);
    return prevptr;
}
node *reverseitr(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    while (currptr)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
node *reverserec(node *&head)
{
    if (head == NULL || head->next == NULL)
        return head;
    node *last;
    node *newhead = reverserec(head->next);
    head->next->next = head;
    last = head->next;
    head->next = NULL;
    return last;
}
bool compare_lists(node *head1, node *head2)
{
    node *temp1 = head1;
    node *temp2 = head2;
    while (temp1 && temp2 && temp1->data == temp2->data)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return temp1 == temp2;
}
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (!head)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = n;
}
node *mergeLists(node *head1, node *head2)
{
    node *ans = NULL;
    if (head1 == NULL)
        return head2;
    else if (head2 == NULL)
        return head1;
    if (head1->data <= head2->data)
    {
        ans = head1;
        ans->next = mergeLists(head1->next, head2);
    }
    else
    {
        ans = head2;
        ans->next = mergeLists(head2->next, head1);
    }
    return ans;
}
int getNode(node *head, int pos)
{
    node *fast = head;
    node *slow = head;
    for (int i = 0; i < pos + 1; i++)
        fast = fast->next;
    while (fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow->data;
}
node *removeDuplicates(node *head)
{
    node *temp = NULL;
    int last = 03452435;
    while (head != NULL)
    {
        if (head->data != last)
        {
            insertAtTail(temp, head->data);
            last = head->data;
        }
        head = head->next;
    }
    return temp;
}