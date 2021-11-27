for _ in range(int(input())):
    y, [n, m] = 0, map(int, input().split())
    for i in range(m):
        y |= [int(x) for x in input().split()][2]
    print(((2 ** (n - 1)) * y) % (10 ** 9 + 7))
