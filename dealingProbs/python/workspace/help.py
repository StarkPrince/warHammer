def yerin(n, x, y):
    if n % 2 == 1:
        return 1
    else:
        if x[int(n / 2) - 1] == x[int(n / 2)]:
            a = 1
        else:
            a = 1 - x[int(n / 2) - 1] + x[int(n / 2)]
        if y[int(n / 2) - 1] == y[int(n / 2)]:
            b = 1
        else:
            b = 1 - y[int(n / 2) - 1] + y[int(n / 2)]
        return a * b


t = int(input())
for i in range(t):
    n = int(input())
    x = []
    y = []
    for j in range(n):
        p, q = map(int, input().split())
        x.append(p)
        y.append(q)
    x.sort()
    y.sort()
    print(yerin(n, x, y))