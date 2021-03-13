'''Xenia lives in a city that has n houses built along the main ringroad. The ringroad houses are numbered 1 through n
in the clockwise order. The ringroad traffic is one way and also is clockwise.

Xenia has recently moved into the ringroad house number 1. As a result, she's got m things to do. In order to complete
the i-th task, she needs to be in the house number a i and complete all tasks with numbers less than i. Initially,
Xenia is in the house number 1, find the minimum time she needs to complete all her tasks if moving from a house to a
neighboring one along the ringroad takes one unit of time.

Input
The first line contains two integers n and m (2 ≤ n ≤ 105, 1 ≤ m ≤ 105). The second line contains m integers a 1, a 2, 
..., a m (1 ≤ a i ≤ n). Note that Xenia can have multiple consecutive tasks in one house.

Output
Print a single integer — the time Xenia needs to complete all tasks.

Please, do not use the %lld specifier to read or write 64-bit integers in С++. It is preferred to use the cin, cout
streams or the %I64d specifier.'''
a = list(int(x) for x in input().split())
b = list(int(x) for x in input().split())
sum = 0
for i in range(a[1]):
    if i == a[1]-1:
        sum+=b[a[1]-1]
    elif b[i]==a[0]:
        sum+=a[0]
    else:
        if b[i]<=b[i+1]:
            pass
        else:
            sum+=a[0]
print(sum-1)