'''Mahmoud has n line segments, the i-th of them has length a i. Ehab challenged him to use exactly 3 line segments to form a non-degenerate triangle. Mahmoud doesn't accept challenges unless he is sure he can win, so he asked you to tell him if he should accept the challenge. Given the lengths of the line segments, check if he can choose exactly 3 of them to form a non-degenerate triangle.

Mahmoud should use exactly 3 line segments, he can't concatenate two line segments or change any length. A non-degenerate triangle is a triangle with positive area.

Input
The first line contains single integer n (3 ≤ n ≤ 105) — the number of line segments Mahmoud has.

The second line contains n integers a 1, a 2, ..., a n (1 ≤ a i ≤ 109) — the lengths of line segments Mahmoud has.

Output
In the only line print "YES" if he can choose exactly three line segments and form a non-degenerate triangle with them, and "NO" otherwise.'''
def triangle(a,b,c):
    if a+b>c and b+c>a and a+c>b:
        return True
    else:
        return False
a = int(input())
b = list(int(x) for x in input().split())
for i in range(a):
    for j in range(i+1,a):
        for k in range(j+1,a):
            if triangle(i,j,k)==True:
                print('YES')
            else:
                if i==a-3 and j==a-2 and k==a-1:
                    print('NO')
                else:
                    continue