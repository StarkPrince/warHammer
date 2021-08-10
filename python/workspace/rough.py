for _ in range(int(input())):
    n, k = [int(x) for x in input().split()]
    a = enumerate([int(x) for x in input().split()])
    indices = [i[0] for i in sorted(a, key=lambda x: x[1])]
    recc = 0
    for i in range(n - 1):
        recc += indices[i + 1] != indices[i] + 1
    print("Yes" if recc+1 <= k else "No")
