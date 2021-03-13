'''Polycarp wants to train before another programming competition. During the first day of his training he should solve exactly 1 problem, during the second day — exactly 2 problems, during the third day — exactly 3 problems, and so on. During the k-th day he should solve k problems.

Polycarp has a list of n contests, the i-th contest consists of ai problems. During each day Polycarp has to choose exactly one of the contests he didn't solve yet and solve it. He solves exactly k problems from this contest. Other problems are discarded from it. If there are no contests consisting of at least k problems that Polycarp didn't solve yet during the k-th day, then Polycarp stops his training.

How many days Polycarp can train if he chooses the contests optimally?

Input
The first line of the input contains one integer n (1≤n≤2⋅105) — the number of contests.

The second line of the input contains n integers a1,a2,…,an (1≤ai≤2⋅105) — the number of problems in the i-th contest.

Output
Print one integer — the maximum number of days Polycarp can train if he chooses the contests optimally.'''
a = int(input())
b = list(int(x) for x in input().split())
b.sort()
c=0
for i in range(1,a+1):
    for j in b:
        print(i,j)
        if j>=i:
            c+=1
            b.remove(j)
            break
        else:
            continue
print(c)