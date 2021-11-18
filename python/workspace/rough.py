def solve(n, m, mt, nt, k):
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    bs, ans = 0, 0
    for ai in range(k + 1):
        try:
            while b[bs] < a[ai] + mt:
                bs += 1
        except IndexError:
            print(-1)
            return None
        bi = k - ai
        try:
            if ans < b[bs + bi] + nt:
                ans = b[bs + bi] + nt
        except IndexError:
            print(-1)
            return None
    print(ans)


n, m, mt, nt, k = [int(x) for x in input().split()]
solve(n, m, mt, nt, k)
