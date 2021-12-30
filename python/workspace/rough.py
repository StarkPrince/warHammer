import math


def gcd(a):
    x = 0
    for p in a:
        x = math.gcd(x, p)
    return x


for _ in range(int(input())):
    n = input()
    *a, = map(int, input().split())
    e, o = a[::2], a[1::2]
    g1, g2 = gcd(e), gcd(o)
    if g2 != 0 and all(x % g2 != 0 for x in e):
        print(g2)
    elif g1 != 0 and all(x % g1 != 0 for x in o):
        print(g1)
    else:
        print(0)
