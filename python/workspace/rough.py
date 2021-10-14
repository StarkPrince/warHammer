for p in range(int(input())):
    if p == 0:
        a = input()
    n, k = [int(x) for x in input().split()]
    k = min(k, n)
    adj = {i: set() for i in range(1, n+1)}
    x = input()
    while(len(x) > 0):
        g, h = [int(u) for u in x.split()]
        adj[g].add(h)
        adj[h].add(g)
        x = input()
    for i in range(k):
        if not adj:
            break
        ddj = adj.copy()
        for key, val in ddj.items():
            if len(val) == 1:
                adj[val.pop()].remove(key)
                adj.pop(key)
    ans = 0
    for key, val in adj.items():
        ans += len(val) > 0
    print(adj)  # debug
