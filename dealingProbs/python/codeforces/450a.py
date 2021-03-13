'''There are n children in Jzzhu's school. Jzzhu is going to give some candies to them. Let's number all the children from 1 to n. The i-th child wants to get at least a i candies.

Jzzhu asks children to line up. Initially, the i-th child stands at the i-th place of the line. Then Jzzhu start distribution of the candies. He follows the algorithm:

Give m candies to the first child of the line.
If this child still haven't got enough candies, then the child goes to the end of the line, else the child go home.
Repeat the first two steps while the line is not empty.
Consider all the children in the order they go home. Jzzhu wants to know, which child will be the last in this order?

Input
The first line contains two integers n, m (1 ≤ n ≤ 100; 1 ≤ m ≤ 100). The second line contains n integers a 1, a 2, ..., a n (1 ≤ a i ≤ 100).

Output
Output a single integer, representing the number of the last child.'''
def gif(a):
    if a>int(a):
        return int(a)+1
    else:
        return int(a)
a = list(int(x) for x in input().split())
b = list(int(x) for x in input().split())
rounds = gif(max(b)/2)
for i in range(len(b)):
    b[i]-=2*rounds
b.reverse()
print(len(b)-b.index(max(b)))