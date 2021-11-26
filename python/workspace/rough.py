from collections import deque

for _ in range(int(input())):
    n = int(input())
    t = [int(x) for x in input().split()]
    a = deque(t)
    ans = deque()
    while len(a) > 0:
        if a[0] > a[-1]:
            ans.appendleft(a.popleft())
        else:
            ans.append(a.pop())
    rans = ans.copy()
    tans = deque()
    while len(ans) > 1:
        if ans[0] < ans[-1]:
            tans.appendleft(ans.popleft())
        else:
            tans.append(ans.pop())
    if ans + tans == deque(t) or tans + ans == deque(t):
        print(*rans)
    else:
        print(-1)
