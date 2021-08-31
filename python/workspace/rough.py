for _ in range(int(input())):
    a = int(input())
    b = [int(x) % 2 for x in input().split()]
    g = [[], []]
    for i in range(a):
        g[b[i]].append(i)
    o, e = len(g[1]), len(g[0])
    if abs(o - e) > 1:
        print(-1)
        continue
    ans1 = ans2 = 0
    for i in range(0, a, 2):
        ans1 += abs(g[o > e][i // 2] - i)
    for i in range(0, a - 1, 2):
        ans2 += abs(g[o < e][i // 2] - (i + 1))
    print(min(ans1, ans2))
