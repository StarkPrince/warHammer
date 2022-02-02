def gcd(a, b):
    # iterative approach
    for i in range(min(a, b), 0, -1):
        if a % i == 0 and b % i == 0:
            return i
    return 1


def comb(n, r):
    p = 1
    k = 1
    if (n - r < r):
        r = n - r
    if (r != 0):
        while (r):
            p *= n
            k *= r
            m = gcd(p, k)
            p //= m
            k //= m
            n -= 1
            r -= 1
    else:
        p = 1

    return p % 1000000007


n, m = [int(i) for i in input().split()]
print(comb(n+m-1, n-1))
