'''Let's consider a table consisting of n rows and n columns. The cell located at the intersection of i-th row and j-th column contains number i × j. The rows and columns are numbered starting from 1.

You are given a positive integer x. Your task is to count the number of cells in a table that contain number x.

Input
The single line contains numbers n and x (1 ≤ n ≤ 105, 1 ≤ x ≤ 109) — the size of the table and the number that we are looking for in the table.

Output
Print a single number: the number of times x occurs in the table.'''
a = list(int(x) for x in input().split())
l = []
for i in range(1,a[0]+1):
    for j in range(1,a[0]+1):
        l.append(i*j)
print(l.count(a[1]))