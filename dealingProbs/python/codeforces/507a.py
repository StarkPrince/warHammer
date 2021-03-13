'''Amr is a young coder who likes music a lot. He always wanted to learn how to play music but he was busy coding so he got an idea.

Amr has n instruments, it takes a i days to learn i-th instrument. Being busy, Amr dedicated k days to learn how to play the maximum possible number of instruments.

Amr asked for your help to distribute his free days between instruments so that he can achieve his goal.

Input
The first line contains two numbers n, k (1 ≤ n ≤ 100, 0 ≤ k ≤ 10 000), the number of instruments and number of days respectively.

The second line contains n integers a i (1 ≤ a i ≤ 100), representing number of days required to learn the i-th instrument.

Output
In the first line output one integer m representing the maximum number of instruments Amr can learn.

In the second line output m space-separated integers: the indices of instruments to be learnt. You may output indices in any order.

if there are multiple optimal solutions output any. It is not necessary to use all days for studying.'''
a = list(int(x) for x in input().split())
b = list(int(x) for x in input().split())
days = a[1]
ins = a[0]
l=[]
if min(b)>days:
    print(0)
else:
    while(days>0):
        for i in range(ins):
            if b[i]<=days:
                l.append(i+1)
                days-=b[i]
            else:
                continue
    print(len(l))
    for x in l:
        print(x,end=" ")