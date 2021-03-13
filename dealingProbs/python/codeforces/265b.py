'''Squirrel Liss loves nuts. There are n trees (numbered 1 to n from west to east) along a street and there is a delicious nut on the top of each tree. The height of the tree i is h i. Liss wants to eat all nuts.

Now Liss is on the root of the tree with the number 1. In one second Liss can perform one of the following actions:

Walk up or down one unit on a tree.
Eat a nut on the top of the current tree.
Jump to the next tree. In this action the height of Liss doesn't change. More formally, when Liss is at height h of the tree i (1 ≤ i ≤ n - 1), she jumps to height h of the tree i + 1. This action can't be performed if h > h i + 1.
Compute the minimal time (in seconds) required to eat all nuts.

Input
The first line contains an integer n (1  ≤  n ≤ 105) — the number of trees.

Next n lines contains the height of trees: i-th line contains an integer h i (1 ≤ h i ≤ 104) — the height of the tree with the number i.

Output
Print a single integer — the minimal time required to eat all nuts in seconds.'''
a = int(input())
l = []
for i in range(a):
    l.append(int(input()))
c = l[0]+1
for i in range(a-1):
    if l[i]>l[i+1]:
        c+=2
    else:
        c+=l[i]+l[i+1]+1
if a==2:
    print(c-1)
else:
    print(c)