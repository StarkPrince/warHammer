'''A frog is currently at the point 0 on a coordinate axis Ox. It jumps by the following algorithm: the first jump is a
 units to the right, the second jump is b units to the left, the third jump is a units to the right, the fourth jump is
b units to the left, and so on.

Formally:

if the frog has jumped an even number of times (before the current jump), it jumps from its current position x to
position x+a;
otherwise it jumps from its current position x to position x−b.
Your task is to calculate the position of the frog after k jumps.

But... One more thing. You are watching t different frogs so you have to answer t independent queries.

Input
The first line of the input contains one integer t (1≤t≤1000) — the number of queries.

Each of the next t lines contain queries (one query per line).

The query is described as three space-separated integers a,b,k (1≤a,b,k≤109) — the lengths of two types of jumps and
the number of jumps, respectively.

Output
Print t integers. The i-th integer should be the answer for the i-th query.'''
for i in range(int(input())):
    l = list(int(x) for x in input().split())
    a = l[0]
    b = l[1]
    k = l[2]
    if k%2==0:
        print(int((a-b)*k/2))
    else:
        print(int((a-b)*(k-1)/2)+a)