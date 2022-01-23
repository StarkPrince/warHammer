def MEX(arr):
    n = len(arr)
    for i in range(n):
        if i not in arr:
            return i
    return n


def upper_bound(arr, val):
    l, r = 0, len(arr)
    while l < r:
        m = (l + r) // 2
        if arr[m] <= val:
            l = m + 1
        else:
            r = m
    return l


for i in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    d = {}
    for i in range(n):
        if a[i] not in d:
            d[a[i]] = []
        d[a[i]].append(i)
    ans = []
    while d:
        s = MEX(set(d.keys()))  # might be optimised
        if s < len(d):
            ans.append(s)
            break
        mx = -1
        for i, j in d.items():
            if i < s:
                mx = max(mx, j[0])
        for i, j in d.copy().items():
            if i <= s:
                ctr = upper_bound(j, mx)
                if ctr == len(j):
                    del d[i]
                else:
                    d[i] = j[ctr:]
        ans.append(s)
    print(len(ans))
    print(*ans)
