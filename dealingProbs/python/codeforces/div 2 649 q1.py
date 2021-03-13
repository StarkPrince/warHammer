import random
alpha = "abcdefghijklmnopqrstuvwxyz"
for _ in range(int(input())):
    p = int(input())
    b = list(int(x) for x in input().split())
    s = "".join(random.choice(list(alpha)) for j in range(max(b)+1))
    print(s)
    for i in b:
        z = alpha.replace(s[i],"")
        t = s[:i] + str("".join(random.choice(list(z)) for k in range(max(b)+1-i)))
        s = t
        print(s)