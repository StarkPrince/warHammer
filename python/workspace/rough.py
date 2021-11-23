n, q = [int(x) for x in input().split()]
a = [int(x) for x in input().split()]
d = {2 ** i: 0 for i in range(32)}
for i in a:
    d[i] += 1
for _ in range(q):
    x = int(input())
    ans = 0
    for j in range(31, -1, -1):
        t = 2 ** j
        wl = min(x // t, d[t])
        ans += wl
        x -= wl * t
    print(ans if x == 0 else -1)
