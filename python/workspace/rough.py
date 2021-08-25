for _ in range(int(input())):
    a = int(input())
    m = []
    for i in range(a):
        tt = [int(x) for x in input().split()]
        mn = 0
        for j in range(1, tt[0] + 1):
            mn = max(mn, tt[j] + 2 - j)
        m.append([mn, tt[0]])
    m = sorted(m)
    ans = le = ps = 0
    for i in range(a):
        if m[i][0] > le:
            ans = max(ans, m[i][0] - ps)
            le = m[i][0]
        ps += m[i][1]
        le = max(le, m[i][1])
    print(ans)
