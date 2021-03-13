'''You are given an array a consisting of n integers.

In one move, you can choose two indices 1≤i,j≤n such that i≠j and set ai:=aj. You can perform such moves any number of
times (possibly, zero). You can choose different indices in different operations. The operation := is the operation of
assignment (i.e. you choose i and j and replace ai with aj).

Your task is to say if it is possible to obtain an array with an odd (not divisible by 2) sum of elements.

You have to answer t independent test cases.

Input
The first line of the input contains one integer t (1≤t≤2000) — the number of test cases.

The next 2t lines describe test cases. The first line of the test case contains one integer n (1≤n≤2000) — the number
 of elements in a. The second line of the test case contains n integers a1,a2,…,an (1≤ai≤2000), where ai is the i-th
 element of a.

It is guaranteed that the sum of n over all test cases does not exceed 2000 (∑n≤2000).

Output
For each test case, print the answer on it — "YES" (without quotes) if it is possible to obtain the array with an odd
 sum of elements, and "NO" otherwise'''
a = int(input())
for i in range(a):
    b = int(input())
    c = list(int(x) for x in input().split())
    sum=0
    for i in c:
        sum+=i
    if sum%2==0:
        print("NO")
    else:
        print("YES")