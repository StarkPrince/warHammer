for _ in range(int(input())):
    s = int(input())
    a1 = [int(x) for x in input().split()]
    a2 = [int(x) for x in input().split()]
    p1 = [0]
    p2 = [0]
    for i in range(s):
        p1.append(p1[-1] + a1[i])
        p2.append(p2[-1] + a2[i])
    mn = (100000000,0)
    for i in range(1,s+1):
        comp = p1[i]+p2[-1]-p2[i-1]
        if comp<=mn[0]:
            mn = (comp,i)
    for i in range(mn[1]):
        a1[i] = 0
    for i in range(mn[1]-1,s):
        a2[i] = 0
    q1 = [0]
    q2 = [0]
    for i in range(s):
        q1.append(q1[-1] + a1[i])
        q2.append(q2[-1] + a2[i])
    mx = 0
    for i in range(1, s + 1):
        mx = max(q1[i] + q2[-1] - q2[i - 1], mx)
    print(mx)