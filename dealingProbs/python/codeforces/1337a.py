'''Ichihime is the current priestess of the Mahjong Soul Temple. She claims to be human, despite her cat ears.

These days the temple is holding a math contest. Usually, Ichihime lacks interest in these things, but this time the
prize for the winner is her favorite — cookies. Ichihime decides to attend the contest. Now she is solving the following
 problem.



You are given four positive integers a, b, c, d, such that a≤b≤c≤d.

Your task is to find three integers x, y, z, satisfying the following conditions:

a≤x≤b.
b≤y≤c.
c≤z≤d.
There exists a triangle with a positive non-zero area and the lengths of its three sides are x, y, and z.
Ichihime desires to get the cookie, but the problem seems too hard for her. Can you help her?

Input
The first line contains a single integer t (1≤t≤1000)  — the number of test cases.

The next t lines describe test cases. Each test case is given as four space-separated integers a, b, c, d
(1≤a≤b≤c≤d≤109).

Output
For each test case, print three integers x, y, z  — the integers you found satisfying the conditions given in the
statement.

It is guaranteed that the answer always exists. If there are multiple answers, print any'''


def is_triangle(a, b, c):
    if a + b>c and b + c>a and a + c>b:
        return True
    else:
        return False


def fn(x):
    for i in range (x[0], x[1] + 1):
        for j in range (x[1], x[2] + 1):
            for k in range (x[2], x[3] + 1):
                if is_triangle (i, j, k) == True:
                    print (i, j, k)
                    return 0


for i in range (int (input ())):
    x=list (int (x) for x in input ().split ())
    fn (x)