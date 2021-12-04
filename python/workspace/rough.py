def solve(diff, k):
    ans = k
    for i in range(len(diff)):
        ans += min(diff[i], k)
    return ans


for _ in range(int(input())):
    n, h = [int(x) for x in input().split()]
    a = [int(x) for x in input().split()]
    diff = []
    for i in range(len(a)-1):
        diff.append(a[i+1]-a[i])
    ans = 0
    u = 0
    d = 10**18
    while u <= d:
        mid = (u+d)//2
        temp = solve(diff, mid)
        if temp >= h:
            d = mid-1
        elif temp < h:
            u = mid+1
        else:
            ans = mid
            break
    print(u)
