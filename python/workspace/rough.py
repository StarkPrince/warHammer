def solve():
    n, k, z = map(int, input().split())
    a = list(map(int, input().split()))
    p = [a[0]]
    for i in range(1, n):
        p.append(p[-1] + a[i])
    ans = 0
    m = [0]
    for i in range(1, n):
        m.append(max(m[-1], a[i]+a[i-1]))
    for i in range(1, k+1):
        if i % 2 != k % 2:
            j = 0
            while j < z and i + 2*j + 1 <= k:
                j += 1
                ans = max(ans, p[i] + m[i]*j + a[i-1])
        else:
            j = 0
            while j <= z and i + 2*j <= k:
                j += 1
                ans = max(ans, p[i] + m[i]*j)
    print(ans)


if __name__ == '__main__':
    for _ in range(int(input())):
        solve()
