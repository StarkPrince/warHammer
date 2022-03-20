/*
Prince Raj
719cr2008
Assignment 9
Question 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int data;
    struct node *next;
};

void printReverse(struct node *head)
{
    if (head == NULL)
        return;
    printReverse(head->next);
    printf("%d ", head->data);
}

int main()
{
    int n;
    scanf("%d", &n);
    struct node *head = NULL;
    struct node *temp = NULL;
    for (int i = 0; i < n; i++)
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        if (head == NULL)
            head = newNode;
        else
            temp->next = newNode;
        temp = newNode;
    }
    printReverse(head);
    return 0;
}