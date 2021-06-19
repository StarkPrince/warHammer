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
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
        head->prev = n;
    head = n;
}
void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void display(node *head)
{
    node *temp = head;
    cout << "NULL--";
    while (temp != NULL)
    {
        cout << temp->data << "--";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void deleteAtHead(node *&head)
{
    if (head->next != NULL)
    {
        node *toDelete = head;
        head = head->next;
        head->prev = NULL;
        delete toDelete;
    }
}
void deletion(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    int count = 1;
    while (count != pos && temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    delete temp;
}
node* sortedInsert(node* head, int data) {
    node *newnode;
    if (head!=NULL || head->data>=data){
        newnode->next = head;
        newnode->next->prev = newnode;
        newnode->data = data;
        return newnode;
    }
    node *temp = head;
    
    while(temp->next!=NULL && temp->next->data<data){
        temp = temp->next;
    }
    newnode->next = temp->next;
    
    if (temp->next!=NULL)
        newnode->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
    return newnode;    
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    display(head);
    sortedInsert(head, 5);
    display(head);
}