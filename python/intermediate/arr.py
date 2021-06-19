#!/bin/python3

import math
import os
import random
import re
import sys

class SinglyLinkedListNode:
    def __init__(self, node_data):
        self.data = node_data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

def print_singly_linked_list(node):

    l = ""
    while node:
        l+=str(node.data)
        node = node.next
    print(l)

def insertNodeAtHead(head, data):
    node = SinglyLinkedListNode(data)
    if head == None:
        head = SinglyLinkedListNode(data)
        return head
    node.next = head.next
    head = node
    return head

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')
    llist_count = int(input())
    llist = SinglyLinkedList()
    for _ in range(llist_count):
        llist_item = int(input())
        llist_head = insertNodeAtHead(llist.head, llist_item)
        llist.head = llist_head
    print_singly_linked_list(llist.head)