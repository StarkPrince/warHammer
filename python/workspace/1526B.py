for _ in range(int(input())):
    a = input()
    z = [int(x) for x in list(a)]
    t = True
    for i in range(len(z)-1):
        if z[i]>z[i+1]:
            t = False
    print("YES" if int(a[-2:])%11==0 and t else "NO")