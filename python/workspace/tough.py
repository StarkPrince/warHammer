for _ in range(int(input())):
    n = int(input())
    l = []
    for i in range(n):
        m, *p = [int(x) for x in input().split()]
        for j in range(m):
            p[j] = p[j]-j+1
        l.append([max(p), m])
    l = sorted(l)
    print(l)
    ans = l[0][0]
    c = l[0][1]
    for j in range(1, n):
        ans += max(0, l[j][0]-ans-c)
        c += l[j][1]
    print(ans)